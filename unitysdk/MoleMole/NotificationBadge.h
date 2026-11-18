#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BFGOBPJPGBE.h"
#include "unitysdk/MoleMole/NotificationBadge_IIIOLFCNGMC.h"
#include "unitysdk/NodeGraph/VariantUnion.h"
#include "unitysdk/Share/ENotificationBadgeType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class IBENDELLLAO;
class NNHCKAIIBKD;
namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_NOTIFICATIONBADGE_BINDNOTIFICATIONNODE_OFFSET UNITYSDK_OFFSET(0x14BB4B20)
#define MOLEMOLE_NOTIFICATIONBADGE_BNHMJKABGND_OFFSET UNITYSDK_OFFSET(0x14BB4C70)
#define MOLEMOLE_NOTIFICATIONBADGE_CBHCLLKKIMF_OFFSET UNITYSDK_OFFSET(0x14BB3870)
#define MOLEMOLE_NOTIFICATIONBADGE_CHANGEBADGETYPE_OFFSET UNITYSDK_OFFSET(0x14BB3B70)
#define MOLEMOLE_NOTIFICATIONBADGE_CHANGEBADGEVIEWSTYLE_OFFSET UNITYSDK_OFFSET(0x14BB4940)
#define MOLEMOLE_NOTIFICATIONBADGE_CLEAR_OFFSET UNITYSDK_OFFSET(0x14BB3CF0)
#define MOLEMOLE_NOTIFICATIONBADGE_DISABLEWIDGET_OFFSET UNITYSDK_OFFSET(0x14BB3EC0)
#define MOLEMOLE_NOTIFICATIONBADGE_DOCOPYRESET_OFFSET UNITYSDK_OFFSET(0x14BB4AD0)
#define MOLEMOLE_NOTIFICATIONBADGE_ENABLEWEIGHT_OFFSET UNITYSDK_OFFSET(0x14BB3E60)
#define MOLEMOLE_NOTIFICATIONBADGE_GET_INITED_OFFSET UNITYSDK_OFFSET(0x14BB3450)
#define MOLEMOLE_NOTIFICATIONBADGE_GET_NOTIFICATIONNODE_OFFSET UNITYSDK_OFFSET(0x14BB3460)
#define MOLEMOLE_NOTIFICATIONBADGE_GET_NOTIFICATIONSHOWTYPE_OFFSET UNITYSDK_OFFSET(0x14BB3470)
#define MOLEMOLE_NOTIFICATIONBADGE_HIDE_OFFSET UNITYSDK_OFFSET(0x14BB3DA0)
#define MOLEMOLE_NOTIFICATIONBADGE_KELBGAKDHHM_OFFSET UNITYSDK_OFFSET(0x14BB3660)
#define MOLEMOLE_NOTIFICATIONBADGE_LLHJKDNMNCP_1_OFFSET UNITYSDK_OFFSET(0x14BB4EB0)
#define MOLEMOLE_NOTIFICATIONBADGE_LLHJKDNMNCP_OFFSET UNITYSDK_OFFSET(0x14BB4D10)
#define MOLEMOLE_NOTIFICATIONBADGE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x14BB35F0)
#define MOLEMOLE_NOTIFICATIONBADGE_ONNOTIFY_OFFSET UNITYSDK_OFFSET(0x14BB39A0)
#define MOLEMOLE_NOTIFICATIONBADGE_REGISTERNOTIFY_OFFSET UNITYSDK_OFFSET(0x14BB3F80)
#define MOLEMOLE_NOTIFICATIONBADGE_REGISTERSINGLESUBNOTIFY_OFFSET UNITYSDK_OFFSET(0x14BB4660)
#define MOLEMOLE_NOTIFICATIONBADGE_REGISTERSUBNOTIFY_OFFSET UNITYSDK_OFFSET(0x14BB4140)
#define MOLEMOLE_NOTIFICATIONBADGE_RESETNOTIFY_OFFSET UNITYSDK_OFFSET(0x14BB3D50)
#define MOLEMOLE_NOTIFICATIONBADGE_SETARRAYINDEX_OFFSET UNITYSDK_OFFSET(0x14BB40F0)
#define MOLEMOLE_NOTIFICATIONBADGE_SETDYNAMICTYPE_OFFSET UNITYSDK_OFFSET(0x14BB3F20)
#define MOLEMOLE_NOTIFICATIONBADGE_SETINVOKESTATECHGCBONSAMESTATE_OFFSET UNITYSDK_OFFSET(0x14BB3950)
#define MOLEMOLE_NOTIFICATIONBADGE_SHOW_OFFSET UNITYSDK_OFFSET(0x14BB3E00)
#define MOLEMOLE_NOTIFICATIONBADGE_START_OFFSET UNITYSDK_OFFSET(0x14BB3480)
#define MOLEMOLE_NOTIFICATIONBADGE__CTOR_OFFSET UNITYSDK_OFFSET(0x14BB4C20)

namespace MoleMole
{
	inline static constexpr unsigned int NotificationBadge_TypeDefinitionIndex = 55453;

	class NotificationBadge : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Share::ENotificationBadgeType _badgeType; // 0x18
		::BFGOBPJPGBE notificationShowType; // 0x1C
		::System::Boolean _dynamicBind; // 0x20
		::System::Byte _padding0[0x3];
		::System::Int32 _arrayIndex; // 0x24
		::UnityEngine::GameObject* _selfEffectObj; // 0x28
		::MoleMole::NotificationBadge_IIIOLFCNGMC CDLHJGLBGEJ; // 0x30
		::System::Byte _padding1[0x4];
		::NodeGraph::VariantUnion JLCFHCKBHEB; // 0x38
		::System::Boolean EOJEABJDOMC; // 0x50
		::System::Byte _padding2[0x7];
		::System::Action_2<::MoleMole::NotificationBadge*, ::System::Boolean>* OnStateUpdate; // 0x58
		::NNHCKAIIBKD* KPMMHKHPFJJ; // 0x60
		::IBENDELLLAO* DNJGLFLBIBL; // 0x68
		::System::Boolean ShowState; // 0x70
		::System::Boolean EALKBPAJBFJ; // 0x71

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NOTIFICATIONBADGE__CTOR_OFFSET))(this);
		}

		::System::Boolean get_Inited()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NOTIFICATIONBADGE_GET_INITED_OFFSET))(this);
		}

		::IBENDELLLAO* get_NotificationNode()
		{
			return ((::IBENDELLLAO*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NOTIFICATIONBADGE_GET_NOTIFICATIONNODE_OFFSET))(this);
		}

		::BFGOBPJPGBE get_NotificationShowType()
		{
			return ((::BFGOBPJPGBE(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NOTIFICATIONBADGE_GET_NOTIFICATIONSHOWTYPE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NOTIFICATIONBADGE_START_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NOTIFICATIONBADGE_ONDESTROY_OFFSET))(this);
		}

		::System::Void SetInvokeStateChgCBOnSameState(::System::Boolean JKBLDFBGBPK)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_NOTIFICATIONBADGE_SETINVOKESTATECHGCBONSAMESTATE_OFFSET))(this, JKBLDFBGBPK);
		}

		::System::Void OnNotify(::System::Int32 EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_NOTIFICATIONBADGE_ONNOTIFY_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Void ChangeBadgeType(::Share::ENotificationBadgeType DLINOADFMCK)
		{
			return ((::System::Void(*)(::PVOID, ::Share::ENotificationBadgeType))((::PBYTE)hIl2Cpp + MOLEMOLE_NOTIFICATIONBADGE_CHANGEBADGETYPE_OFFSET))(this, DLINOADFMCK);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NOTIFICATIONBADGE_CLEAR_OFFSET))(this);
		}

		::System::Void ResetNotify()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NOTIFICATIONBADGE_RESETNOTIFY_OFFSET))(this);
		}

		::System::Void Hide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NOTIFICATIONBADGE_HIDE_OFFSET))(this);
		}

		::System::Void Show()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NOTIFICATIONBADGE_SHOW_OFFSET))(this);
		}

		::System::Void EnableWeight(::BFGOBPJPGBE PHNLHFCHPGC)
		{
			return ((::System::Void(*)(::PVOID, ::BFGOBPJPGBE))((::PBYTE)hIl2Cpp + MOLEMOLE_NOTIFICATIONBADGE_ENABLEWEIGHT_OFFSET))(this, PHNLHFCHPGC);
		}

		::System::Void DisableWidget()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NOTIFICATIONBADGE_DISABLEWIDGET_OFFSET))(this);
		}

		::System::Void SetDynamicType(::Share::ENotificationBadgeType DLINOADFMCK)
		{
			return ((::System::Void(*)(::PVOID, ::Share::ENotificationBadgeType))((::PBYTE)hIl2Cpp + MOLEMOLE_NOTIFICATIONBADGE_SETDYNAMICTYPE_OFFSET))(this, DLINOADFMCK);
		}

		::System::Void RegisterNotify()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NOTIFICATIONBADGE_REGISTERNOTIFY_OFFSET))(this);
		}

		::System::Void SetArrayIndex(::System::Int32 ABHBKFJKINO)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_NOTIFICATIONBADGE_SETARRAYINDEX_OFFSET))(this, ABHBKFJKINO);
		}

		::System::Void RegisterSubNotify(::NodeGraph::VariantUnion KMFOONLDBFA)
		{
			return ((::System::Void(*)(::PVOID, ::NodeGraph::VariantUnion))((::PBYTE)hIl2Cpp + MOLEMOLE_NOTIFICATIONBADGE_REGISTERSUBNOTIFY_OFFSET))(this, KMFOONLDBFA);
		}

		::System::Void RegisterSingleSubNotify(::Share::ENotificationBadgeType BAHGGFMGJEA, ::NodeGraph::VariantUnion KMFOONLDBFA)
		{
			return ((::System::Void(*)(::PVOID, ::Share::ENotificationBadgeType, ::NodeGraph::VariantUnion))((::PBYTE)hIl2Cpp + MOLEMOLE_NOTIFICATIONBADGE_REGISTERSINGLESUBNOTIFY_OFFSET))(this, BAHGGFMGJEA, KMFOONLDBFA);
		}

		::System::Void ChangeBadgeViewStyle(::BFGOBPJPGBE PHNLHFCHPGC)
		{
			return ((::System::Void(*)(::PVOID, ::BFGOBPJPGBE))((::PBYTE)hIl2Cpp + MOLEMOLE_NOTIFICATIONBADGE_CHANGEBADGEVIEWSTYLE_OFFSET))(this, PHNLHFCHPGC);
		}

		::System::Void DoCopyReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NOTIFICATIONBADGE_DOCOPYRESET_OFFSET))(this);
		}

		::System::Void BindNotificationNode(::IBENDELLLAO* LMJBDKEEOHJ)
		{
			return ((::System::Void(*)(::PVOID, ::IBENDELLLAO*))((::PBYTE)hIl2Cpp + MOLEMOLE_NOTIFICATIONBADGE_BINDNOTIFICATIONNODE_OFFSET))(this, LMJBDKEEOHJ);
		}

		::NNHCKAIIBKD* CBHCLLKKIMF()
		{
			return ((::NNHCKAIIBKD*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NOTIFICATIONBADGE_CBHCLLKKIMF_OFFSET))(this);
		}

		::System::Void BNHMJKABGND(::System::Boolean JMEALLCAKPB)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_NOTIFICATIONBADGE_BNHMJKABGND_OFFSET))(this, JMEALLCAKPB);
		}

		::System::Void LLHJKDNMNCP(::NodeGraph::VariantUnion FKINMDOHGAN, ::System::Int32 ABHBKFJKINO)
		{
			return ((::System::Void(*)(::PVOID, ::NodeGraph::VariantUnion, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_NOTIFICATIONBADGE_LLHJKDNMNCP_OFFSET))(this, FKINMDOHGAN, ABHBKFJKINO);
		}

		::System::Void KELBGAKDHHM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NOTIFICATIONBADGE_KELBGAKDHHM_OFFSET))(this);
		}

		::System::Void LLHJKDNMNCP_1(::NodeGraph::VariantUnion FKINMDOHGAN)
		{
			return ((::System::Void(*)(::PVOID, ::NodeGraph::VariantUnion))((::PBYTE)hIl2Cpp + MOLEMOLE_NOTIFICATIONBADGE_LLHJKDNMNCP_1_OFFSET))(this, FKINMDOHGAN);
		}
	};
}
