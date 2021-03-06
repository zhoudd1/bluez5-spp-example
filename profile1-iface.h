/*
 * Generated by gdbus-codegen 2.48.2. DO NOT EDIT.
 *
 * The license of this code is the same as for the source it was derived from.
 */

#ifndef __PROFILE1_IFACE_H__
#define __PROFILE1_IFACE_H__

#include <gio/gio.h>

G_BEGIN_DECLS


/* ------------------------------------------------------------------------ */
/* Declarations for org.bluez.Profile1 */

#define TYPE_ORG_BLUEZ_PROFILE1 (org_bluez_profile1_get_type ())
#define ORG_BLUEZ_PROFILE1(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), TYPE_ORG_BLUEZ_PROFILE1, OrgBluezProfile1))
#define IS_ORG_BLUEZ_PROFILE1(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), TYPE_ORG_BLUEZ_PROFILE1))
#define ORG_BLUEZ_PROFILE1_GET_IFACE(o) (G_TYPE_INSTANCE_GET_INTERFACE ((o), TYPE_ORG_BLUEZ_PROFILE1, OrgBluezProfile1Iface))

struct _OrgBluezProfile1;
typedef struct _OrgBluezProfile1 OrgBluezProfile1;
typedef struct _OrgBluezProfile1Iface OrgBluezProfile1Iface;

struct _OrgBluezProfile1Iface
{
  GTypeInterface parent_iface;

  gboolean (*handle_new_connection) (
    OrgBluezProfile1 *object,
    GDBusMethodInvocation *invocation,
    const gchar *arg_device,
    GVariant *arg_fd,
    GVariant *arg_fd_properties);

  gboolean (*handle_release) (
    OrgBluezProfile1 *object,
    GDBusMethodInvocation *invocation);

  gboolean (*handle_request_disconnection) (
    OrgBluezProfile1 *object,
    GDBusMethodInvocation *invocation,
    const gchar *arg_device);

};

GType org_bluez_profile1_get_type (void) G_GNUC_CONST;

GDBusInterfaceInfo *org_bluez_profile1_interface_info (void);
guint org_bluez_profile1_override_properties (GObjectClass *klass, guint property_id_begin);


/* D-Bus method call completion functions: */
void org_bluez_profile1_complete_release (
    OrgBluezProfile1 *object,
    GDBusMethodInvocation *invocation);

void org_bluez_profile1_complete_new_connection (
    OrgBluezProfile1 *object,
    GDBusMethodInvocation *invocation);

void org_bluez_profile1_complete_request_disconnection (
    OrgBluezProfile1 *object,
    GDBusMethodInvocation *invocation);



/* D-Bus method calls: */
void org_bluez_profile1_call_release (
    OrgBluezProfile1 *proxy,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean org_bluez_profile1_call_release_finish (
    OrgBluezProfile1 *proxy,
    GAsyncResult *res,
    GError **error);

gboolean org_bluez_profile1_call_release_sync (
    OrgBluezProfile1 *proxy,
    GCancellable *cancellable,
    GError **error);

void org_bluez_profile1_call_new_connection (
    OrgBluezProfile1 *proxy,
    const gchar *arg_device,
    GVariant *arg_fd,
    GVariant *arg_fd_properties,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean org_bluez_profile1_call_new_connection_finish (
    OrgBluezProfile1 *proxy,
    GAsyncResult *res,
    GError **error);

gboolean org_bluez_profile1_call_new_connection_sync (
    OrgBluezProfile1 *proxy,
    const gchar *arg_device,
    GVariant *arg_fd,
    GVariant *arg_fd_properties,
    GCancellable *cancellable,
    GError **error);

void org_bluez_profile1_call_request_disconnection (
    OrgBluezProfile1 *proxy,
    const gchar *arg_device,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean org_bluez_profile1_call_request_disconnection_finish (
    OrgBluezProfile1 *proxy,
    GAsyncResult *res,
    GError **error);

gboolean org_bluez_profile1_call_request_disconnection_sync (
    OrgBluezProfile1 *proxy,
    const gchar *arg_device,
    GCancellable *cancellable,
    GError **error);



/* ---- */

#define TYPE_ORG_BLUEZ_PROFILE1_PROXY (org_bluez_profile1_proxy_get_type ())
#define ORG_BLUEZ_PROFILE1_PROXY(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), TYPE_ORG_BLUEZ_PROFILE1_PROXY, OrgBluezProfile1Proxy))
#define ORG_BLUEZ_PROFILE1_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), TYPE_ORG_BLUEZ_PROFILE1_PROXY, OrgBluezProfile1ProxyClass))
#define ORG_BLUEZ_PROFILE1_PROXY_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), TYPE_ORG_BLUEZ_PROFILE1_PROXY, OrgBluezProfile1ProxyClass))
#define IS_ORG_BLUEZ_PROFILE1_PROXY(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), TYPE_ORG_BLUEZ_PROFILE1_PROXY))
#define IS_ORG_BLUEZ_PROFILE1_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), TYPE_ORG_BLUEZ_PROFILE1_PROXY))

typedef struct _OrgBluezProfile1Proxy OrgBluezProfile1Proxy;
typedef struct _OrgBluezProfile1ProxyClass OrgBluezProfile1ProxyClass;
typedef struct _OrgBluezProfile1ProxyPrivate OrgBluezProfile1ProxyPrivate;

struct _OrgBluezProfile1Proxy
{
  /*< private >*/
  GDBusProxy parent_instance;
  OrgBluezProfile1ProxyPrivate *priv;
};

struct _OrgBluezProfile1ProxyClass
{
  GDBusProxyClass parent_class;
};

GType org_bluez_profile1_proxy_get_type (void) G_GNUC_CONST;

#if GLIB_CHECK_VERSION(2, 44, 0)
G_DEFINE_AUTOPTR_CLEANUP_FUNC (OrgBluezProfile1Proxy, g_object_unref)
#endif

void org_bluez_profile1_proxy_new (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
OrgBluezProfile1 *org_bluez_profile1_proxy_new_finish (
    GAsyncResult        *res,
    GError             **error);
OrgBluezProfile1 *org_bluez_profile1_proxy_new_sync (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);

void org_bluez_profile1_proxy_new_for_bus (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
OrgBluezProfile1 *org_bluez_profile1_proxy_new_for_bus_finish (
    GAsyncResult        *res,
    GError             **error);
OrgBluezProfile1 *org_bluez_profile1_proxy_new_for_bus_sync (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);


/* ---- */

#define TYPE_ORG_BLUEZ_PROFILE1_SKELETON (org_bluez_profile1_skeleton_get_type ())
#define ORG_BLUEZ_PROFILE1_SKELETON(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), TYPE_ORG_BLUEZ_PROFILE1_SKELETON, OrgBluezProfile1Skeleton))
#define ORG_BLUEZ_PROFILE1_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), TYPE_ORG_BLUEZ_PROFILE1_SKELETON, OrgBluezProfile1SkeletonClass))
#define ORG_BLUEZ_PROFILE1_SKELETON_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), TYPE_ORG_BLUEZ_PROFILE1_SKELETON, OrgBluezProfile1SkeletonClass))
#define IS_ORG_BLUEZ_PROFILE1_SKELETON(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), TYPE_ORG_BLUEZ_PROFILE1_SKELETON))
#define IS_ORG_BLUEZ_PROFILE1_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), TYPE_ORG_BLUEZ_PROFILE1_SKELETON))

typedef struct _OrgBluezProfile1Skeleton OrgBluezProfile1Skeleton;
typedef struct _OrgBluezProfile1SkeletonClass OrgBluezProfile1SkeletonClass;
typedef struct _OrgBluezProfile1SkeletonPrivate OrgBluezProfile1SkeletonPrivate;

struct _OrgBluezProfile1Skeleton
{
  /*< private >*/
  GDBusInterfaceSkeleton parent_instance;
  OrgBluezProfile1SkeletonPrivate *priv;
};

struct _OrgBluezProfile1SkeletonClass
{
  GDBusInterfaceSkeletonClass parent_class;
};

GType org_bluez_profile1_skeleton_get_type (void) G_GNUC_CONST;

#if GLIB_CHECK_VERSION(2, 44, 0)
G_DEFINE_AUTOPTR_CLEANUP_FUNC (OrgBluezProfile1Skeleton, g_object_unref)
#endif

OrgBluezProfile1 *org_bluez_profile1_skeleton_new (void);


G_END_DECLS

#endif /* __PROFILE1_IFACE_H__ */
