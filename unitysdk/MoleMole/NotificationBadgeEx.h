#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MPONGHENLLE.h"
#include "unitysdk/Share/ENotificationBadgeType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/NodeGraph/VariantUnion.h"

class IBENDELLLAO;
class POMONEFCEJG;
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_NOTIFICATIONBADGEEX_AAMLPHPAGNA_OFFSET UNITYSDK_OFFSET(0x1A7128C0)
#define MOLEMOLE_NOTIFICATIONBADGEEX_AJEEBNCNHMN_OFFSET UNITYSDK_OFFSET(0x1A712A40)
#define MOLEMOLE_NOTIFICATIONBADGEEX_AWAKE_OFFSET UNITYSDK_OFFSET(0x1A711A50)
#define MOLEMOLE_NOTIFICATIONBADGEEX_BDOPIOLJMEI_OFFSET UNITYSDK_OFFSET(0x1A712410)
#define MOLEMOLE_NOTIFICATIONBADGEEX_BINDNOTIFICATIONNODE_1_OFFSET UNITYSDK_OFFSET(0x1A712290)
#define MOLEMOLE_NOTIFICATIONBADGEEX_BINDNOTIFICATIONNODE_2_OFFSET UNITYSDK_OFFSET(0x1A7121C0)
#define MOLEMOLE_NOTIFICATIONBADGEEX_BINDNOTIFICATIONNODE_OFFSET UNITYSDK_OFFSET(0x1A711DB0)
#define MOLEMOLE_NOTIFICATIONBADGEEX_CLEARNOTIFY_OFFSET UNITYSDK_OFFSET(0x1A7126A0)
#define MOLEMOLE_NOTIFICATIONBADGEEX_DOCOPYRESET_OFFSET UNITYSDK_OFFSET(0x1A712810)
#define MOLEMOLE_NOTIFICATIONBADGEEX_GETREDSIGNCOUNT_OFFSET UNITYSDK_OFFSET(0x1A712640)
#define MOLEMOLE_NOTIFICATIONBADGEEX_GET_NOTIFICATIONNODE_OFFSET UNITYSDK_OFFSET(0x1A711A40)
#define MOLEMOLE_NOTIFICATIONBADGEEX_HIDE_OFFSET UNITYSDK_OFFSET(0x1A7127C0)
#define MOLEMOLE_NOTIFICATIONBADGEEX_INITGENERALNOTIFICATION_OFFSET UNITYSDK_OFFSET(0x1A711AB0)
#define MOLEMOLE_NOTIFICATIONBADGEEX_JMPNKFCKKFG_OFFSET UNITYSDK_OFFSET(0x1A712AC0)
#define MOLEMOLE_NOTIFICATIONBADGEEX_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1A712110)
#define MOLEMOLE_NOTIFICATIONBADGEEX_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1A7118F0)
#define MOLEMOLE_NOTIFICATIONBADGEEX_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1A7117B0)
#define MOLEMOLE_NOTIFICATIONBADGEEX_ONREALDISABLE_OFFSET UNITYSDK_OFFSET(0x1A7119F0)
#define MOLEMOLE_NOTIFICATIONBADGEEX_ONREALENABLE_OFFSET UNITYSDK_OFFSET(0x1A711870)
#define MOLEMOLE_NOTIFICATIONBADGEEX_REBINDNOTIFY_OFFSET UNITYSDK_OFFSET(0x1A711EF0)
#define MOLEMOLE_NOTIFICATIONBADGEEX_RESETNOTIFY_OFFSET UNITYSDK_OFFSET(0x1A711F50)
#define MOLEMOLE_NOTIFICATIONBADGEEX_SETUIDISPLAYORDER_OFFSET UNITYSDK_OFFSET(0x1A7126F0)
#define MOLEMOLE_NOTIFICATIONBADGEEX_SHOW_OFFSET UNITYSDK_OFFSET(0x1A712770)
#define MOLEMOLE_NOTIFICATIONBADGEEX__CTOR_OFFSET UNITYSDK_OFFSET(0x1A712870)

namespace MoleMole
{
	inline static constexpr unsigned int NotificationBadgeEx_TypeDefinitionIndex = 47969;

	class NotificationBadgeEx : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Share::ENotificationBadgeType _badgeType; // 0x18
		::System::Byte _padding0[0x4];
		::UnityEngine::Transform* _newTransform; // 0x20
		::UnityEngine::Transform* _redPointTransform; // 0x28
		::UnityEngine::GameObject* _effectObj; // 0x30
		::System::Boolean copyDontClear; // 0x38
		::System::Byte _padding1[0x1];
		::MPONGHENLLE uiDisplayOrder; // 0x3A
		::System::Byte _padding2[0x2];
		::POMONEFCEJG* FHACEFDCLNJ; // 0x40
		::IBENDELLLAO* DNJGLFLBIBL; // 0x48
		::System::Boolean DEBGKPLOPCG; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NOTIFICATIONBADGEEX__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NOTIFICATIONBADGEEX_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NOTIFICATIONBADGEEX_ONDISABLE_OFFSET))(this);
		}

		::IBENDELLLAO* get_NotificationNode()
		{
			return ((::IBENDELLLAO*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NOTIFICATIONBADGEEX_GET_NOTIFICATIONNODE_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NOTIFICATIONBADGEEX_AWAKE_OFFSET))(this);
		}

		::System::Void OnRealEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NOTIFICATIONBADGEEX_ONREALENABLE_OFFSET))(this);
		}

		::System::Void OnRealDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NOTIFICATIONBADGEEX_ONREALDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NOTIFICATIONBADGEEX_ONDESTROY_OFFSET))(this);
		}

		::System::Void InitGeneralNotification()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NOTIFICATIONBADGEEX_INITGENERALNOTIFICATION_OFFSET))(this);
		}

		::System::Void BindNotificationNode(::Share::ENotificationBadgeType OMCKIJDHGOF, ::System::Boolean JEHCBLBLEAO)
		{
			return ((::System::Void(*)(::PVOID, ::Share::ENotificationBadgeType, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_NOTIFICATIONBADGEEX_BINDNOTIFICATIONNODE_OFFSET))(this, OMCKIJDHGOF, JEHCBLBLEAO);
		}

		::System::Void BindNotificationNode_1(::Share::ENotificationBadgeType OMCKIJDHGOF, ::NodeGraph::VariantUnion FKINMDOHGAN, ::System::Boolean JEHCBLBLEAO)
		{
			return ((::System::Void(*)(::PVOID, ::Share::ENotificationBadgeType, ::NodeGraph::VariantUnion, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_NOTIFICATIONBADGEEX_BINDNOTIFICATIONNODE_1_OFFSET))(this, OMCKIJDHGOF, FKINMDOHGAN, JEHCBLBLEAO);
		}

		::System::Void BindNotificationNode_2(::IBENDELLLAO* LMJBDKEEOHJ, ::System::Boolean JEHCBLBLEAO)
		{
			return ((::System::Void(*)(::PVOID, ::IBENDELLLAO*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_NOTIFICATIONBADGEEX_BINDNOTIFICATIONNODE_2_OFFSET))(this, LMJBDKEEOHJ, JEHCBLBLEAO);
		}

		::System::Int32 GetRedSignCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NOTIFICATIONBADGEEX_GETREDSIGNCOUNT_OFFSET))(this);
		}

		::System::Void ResetNotify()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NOTIFICATIONBADGEEX_RESETNOTIFY_OFFSET))(this);
		}

		::System::Void ClearNotify()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NOTIFICATIONBADGEEX_CLEARNOTIFY_OFFSET))(this);
		}

		::System::Void RebindNotify()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NOTIFICATIONBADGEEX_REBINDNOTIFY_OFFSET))(this);
		}

		::System::Void SetUIDisplayOrder(::MPONGHENLLE INFCEADBHGL)
		{
			return ((::System::Void(*)(::PVOID, ::MPONGHENLLE))((::PBYTE)hIl2Cpp + MOLEMOLE_NOTIFICATIONBADGEEX_SETUIDISPLAYORDER_OFFSET))(this, INFCEADBHGL);
		}

		::System::Void Show()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NOTIFICATIONBADGEEX_SHOW_OFFSET))(this);
		}

		::System::Void Hide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NOTIFICATIONBADGEEX_HIDE_OFFSET))(this);
		}

		::System::Void DoCopyReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NOTIFICATIONBADGEEX_DOCOPYRESET_OFFSET))(this);
		}

		::System::Void AAMLPHPAGNA(::System::Int32 EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_NOTIFICATIONBADGEEX_AAMLPHPAGNA_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Void AJEEBNCNHMN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NOTIFICATIONBADGEEX_AJEEBNCNHMN_OFFSET))(this);
		}

		::System::Void JMPNKFCKKFG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NOTIFICATIONBADGEEX_JMPNKFCKKFG_OFFSET))(this);
		}

		::System::Void BDOPIOLJMEI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NOTIFICATIONBADGEEX_BDOPIOLJMEI_OFFSET))(this);
		}
	};
}
