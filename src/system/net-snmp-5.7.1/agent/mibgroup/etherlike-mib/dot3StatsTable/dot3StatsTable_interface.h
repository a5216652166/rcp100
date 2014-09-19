/*
 * Note: this file originally auto-generated by mib2c using
 *       version : 15899 $ of $
 *
 * $Id:$
 */
/** @ingroup interface: Routines to interface to Net-SNMP
 *
 * \warning This code should not be modified, called directly,
 *          or used to interpret functionality. It is subject to
 *          change at any time.
 * 
 * @{
 */
/*
 * *********************************************************************
 * *********************************************************************
 * *********************************************************************
 * ***                                                               ***
 * ***  NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE  ***
 * ***                                                               ***
 * ***                                                               ***
 * ***       THIS FILE DOES NOT CONTAIN ANY USER EDITABLE CODE.      ***
 * ***                                                               ***
 * ***                                                               ***
 * ***       THE GENERATED CODE IS INTERNAL IMPLEMENTATION, AND      ***
 * ***                                                               ***
 * ***                                                               ***
 * ***    IS SUBJECT TO CHANGE WITHOUT WARNING IN FUTURE RELEASES.   ***
 * ***                                                               ***
 * ***                                                               ***
 * *********************************************************************
 * *********************************************************************
 * *********************************************************************
 */
#ifndef DOT3STATSTABLE_INTERFACE_H
#define DOT3STATSTABLE_INTERFACE_H

#ifdef __cplusplus
extern          "C" {
#endif


#include "dot3StatsTable.h"


    /*
     ********************************************************************
     * Table declarations
     */

    /*
     * PUBLIC interface initialization routine 
     */
    void           
        _dot3StatsTable_initialize_interface(dot3StatsTable_registration *
                                             user_ctx, u_long flags);
    void           
        _dot3StatsTable_shutdown_interface(dot3StatsTable_registration *
                                           user_ctx);

    dot3StatsTable_registration *dot3StatsTable_registration_get(void);

    dot3StatsTable_registration
        *dot3StatsTable_registration_set(dot3StatsTable_registration *
                                         newreg);

    netsnmp_container *dot3StatsTable_container_get(void);
    int             dot3StatsTable_container_size(void);

    dot3StatsTable_rowreq_ctx *dot3StatsTable_allocate_rowreq_ctx(void *);
    void           
        dot3StatsTable_release_rowreq_ctx(dot3StatsTable_rowreq_ctx *
                                          rowreq_ctx);

    int             dot3StatsTable_index_to_oid(netsnmp_index * oid_idx,
                                                dot3StatsTable_mib_index *
                                                mib_idx);
    int             dot3StatsTable_index_from_oid(netsnmp_index * oid_idx,
                                                  dot3StatsTable_mib_index
                                                  * mib_idx);

    /*
     * access to certain internals. use with caution!
     */
    void            dot3StatsTable_valid_columns_set(netsnmp_column_info
                                                     *vc);


#ifdef __cplusplus
}
#endif
#endif                          /* DOT3STATSTABLE_INTERFACE_H */
/** @} */
