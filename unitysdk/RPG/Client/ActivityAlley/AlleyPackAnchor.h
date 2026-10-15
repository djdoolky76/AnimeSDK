#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityAlley/AlleyPackAnchorDirType.h"
#include "unitysdk/RPG/Client/ActivityAlley/AlleyPackAnchorState.h"
#include "unitysdk/RPG/Client/ActivityAlley/AlleyPackAnchorViewState.h"
#include "unitysdk/RPG/GameCore/AlleyPackAnchorType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"
class IBNAFGFFJLJ;
namespace RPG::Client { class RPGAnimationEvent; }
namespace RPG::Client::ActivityAlley { class AlleyPackAnchor; }
namespace RPG::Client::ActivityAlley { class AlleyPackComponent; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKANCHOR_CCTOR_OFFSET UNITYSDK_OFFSET(0xC3B58F0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKANCHOR_CTOR_OFFSET UNITYSDK_OFFSET(0xC3B58E0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKANCHOR_ELHGCLEMDOH_OFFSET UNITYSDK_OFFSET(0xC3B57D0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKANCHOR_ENABLECOLLIDERTRIGGER_OFFSET UNITYSDK_OFFSET(0xC3B4A90)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKANCHOR_FOLDGAJHFPE_OFFSET UNITYSDK_OFFSET(0xC3B51A0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKANCHOR_GET_ANCHORTRANSFORM_OFFSET UNITYSDK_OFFSET(0xC3B4D30)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKANCHOR_GET_ANCHORWAITINGATTACH_OFFSET UNITYSDK_OFFSET(0xC3B4D80)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKANCHOR_GET_ISAVAILABLETAILANCHOR_OFFSET UNITYSDK_OFFSET(0xC3B4DA0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKANCHOR_GET_PARENTCOMPONENTREF_OFFSET UNITYSDK_OFFSET(0xC3B4D40)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKANCHOR_GET_STATE_OFFSET UNITYSDK_OFFSET(0xC3B4D60)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKANCHOR_GET_VIEWSTATE_OFFSET UNITYSDK_OFFSET(0xC3B58D0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKANCHOR_GKKINGFLMNI_OFFSET UNITYSDK_OFFSET(0xC3B4BD0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKANCHOR_GOGBDOGNGHJ_OFFSET UNITYSDK_OFFSET(0xC3B48A0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKANCHOR_INIT_OFFSET UNITYSDK_OFFSET(0xC3B46E0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKANCHOR_JJCODDEKCOC_OFFSET UNITYSDK_OFFSET(0xC3B5850)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKANCHOR_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xC3B4E10)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKANCHOR_NEAFLEKFANC_OFFSET UNITYSDK_OFFSET(0xC3B4810)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKANCHOR_ONSELECT_OFFSET UNITYSDK_OFFSET(0xC3B4A50)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKANCHOR_REFRESHCOLLIDERTRIGGERSTATE_OFFSET UNITYSDK_OFFSET(0xC3B4B50)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKANCHOR_SETSELECT_OFFSET UNITYSDK_OFFSET(0xC3B4FC0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKANCHOR_SETVISIBLE_OFFSET UNITYSDK_OFFSET(0xC3B4E80)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKANCHOR_SET_ANCHORWAITINGATTACH_OFFSET UNITYSDK_OFFSET(0xC3B4D90)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKANCHOR_SET_PARENTCOMPONENTREF_OFFSET UNITYSDK_OFFSET(0xC3B4D50)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKANCHOR_SET_STATE_OFFSET UNITYSDK_OFFSET(0xC3B4D70)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKANCHOR_SET_VIEWSTATE_OFFSET UNITYSDK_OFFSET(0xC3B4F60)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKANCHOR_TRYPLAYMATCHANIME_OFFSET UNITYSDK_OFFSET(0xC3B50C0)

namespace RPG::Client::ActivityAlley
{
	inline static constexpr unsigned int AlleyPackAnchor_TypeDefinitionIndex = 74083;

	class AlleyPackAnchor : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::ActivityAlley::AlleyPackComponent* _ParentComponentRef_k__BackingField; // 0x18
		::RPG::Client::ActivityAlley::AlleyPackAnchorState _State_k__BackingField; // 0x20
		::System::Byte _padding0[0x4];
		::RPG::Client::ActivityAlley::AlleyPackAnchor* _AnchorWaitingAttach_k__BackingField; // 0x28
		::RPG::Client::ActivityAlley::AlleyPackAnchor* AdjacentAnchorVertical; // 0x30
		::RPG::Client::ActivityAlley::AlleyPackAnchor* AdjacentAnchorHorizontal; // 0x38
		::RPG::GameCore::AlleyPackAnchorType AnchorType; // 0x40
		::RPG::Client::ActivityAlley::AlleyPackAnchorDirType AnchorUseType; // 0x44
		::System::UInt32 AnchorIndex; // 0x48
		::System::Byte _padding1[0x4];
		::IBNAFGFFJLJ* AnchorData; // 0x50
		::UnityEngine::Collider* MLJOMELBBMM; // 0x58
		::System::Single HJKPJJHCNEP; // 0x60
		::System::Boolean BIIHFBPFCMN; // 0x64
		::System::Byte _padding2[0x3];
		::UnityEngine::Animation* PMOJILOJEPE; // 0x68
		::RPG::Client::RPGAnimationEvent* DDCODMNKPIP; // 0x70
		::RPG::Client::ActivityAlley::AlleyPackAnchorViewState MKALMLPKLJD; // 0x78
		::RPG::Client::ActivityAlley::AlleyPackAnchorViewState KMGNGBLAFMF; // 0x7C
		::System::Boolean PFOKPFNJJAA; // 0x80
		static ::System::String** StaticGet_PPKJCJMHLCH()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client.ActivityAlley", "AlleyPackAnchor")->GetStaticField(0x11B20);
		}

		static ::System::String** StaticGet_CDKJFNMCCLJ()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client.ActivityAlley", "AlleyPackAnchor")->GetStaticField(0x11B28);
		}

		static ::System::String** StaticGet_EOBIFKHDEAL()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client.ActivityAlley", "AlleyPackAnchor")->GetStaticField(0x11B30);
		}

		static ::System::String** StaticGet_GIICHHECGGP()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client.ActivityAlley", "AlleyPackAnchor")->GetStaticField(0x11B38);
		}

		static ::System::String** StaticGet_JPGFDKLOGKA()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client.ActivityAlley", "AlleyPackAnchor")->GetStaticField(0x11B40);
		}

		static ::System::String** StaticGet_IOPLEMCBCBB()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client.ActivityAlley", "AlleyPackAnchor")->GetStaticField(0x11B48);
		}

		static ::System::String** StaticGet_KMOCDILCKJH()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client.ActivityAlley", "AlleyPackAnchor")->GetStaticField(0x11B50);
		}

		static ::UnityEngine::Vector3* StaticGet_GFFBPOBCNKL()
		{
			return (::UnityEngine::Vector3*)UnitySDK::FromName("RPG.Client.ActivityAlley", "AlleyPackAnchor")->GetStaticField(0x39E0);
		}

		static ::UnityEngine::Vector3* StaticGet_KIOGIOEDJOI()
		{
			return (::UnityEngine::Vector3*)UnitySDK::FromName("RPG.Client.ActivityAlley", "AlleyPackAnchor")->GetStaticField(0x39EC);
		}

		static ::UnityEngine::Vector3* StaticGet_BNACHKAFOPE()
		{
			return (::UnityEngine::Vector3*)UnitySDK::FromName("RPG.Client.ActivityAlley", "AlleyPackAnchor")->GetStaticField(0x39F8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKANCHOR_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKANCHOR_CCTOR_OFFSET))();
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKANCHOR_INIT_OFFSET))(this);
		}

		::System::Void OnSelect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKANCHOR_ONSELECT_OFFSET))(this);
		}

		::System::Void EnableColliderTrigger(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKANCHOR_ENABLECOLLIDERTRIGGER_OFFSET))(this, a1);
		}

		::System::Void RefreshColliderTriggerState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKANCHOR_REFRESHCOLLIDERTRIGGERSTATE_OFFSET))(this);
		}

		::System::Boolean GKKINGFLMNI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKANCHOR_GKKINGFLMNI_OFFSET))(this);
		}

		::UnityEngine::Transform* get_AnchorTransform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKANCHOR_GET_ANCHORTRANSFORM_OFFSET))(this);
		}

		::RPG::Client::ActivityAlley::AlleyPackComponent* get_ParentComponentRef()
		{
			return ((::RPG::Client::ActivityAlley::AlleyPackComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKANCHOR_GET_PARENTCOMPONENTREF_OFFSET))(this);
		}

		::System::Void set_ParentComponentRef(::RPG::Client::ActivityAlley::AlleyPackComponent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityAlley::AlleyPackComponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKANCHOR_SET_PARENTCOMPONENTREF_OFFSET))(this, a1);
		}

		::RPG::Client::ActivityAlley::AlleyPackAnchorState get_State()
		{
			return ((::RPG::Client::ActivityAlley::AlleyPackAnchorState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKANCHOR_GET_STATE_OFFSET))(this);
		}

		::System::Void set_State(::RPG::Client::ActivityAlley::AlleyPackAnchorState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityAlley::AlleyPackAnchorState))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKANCHOR_SET_STATE_OFFSET))(this, a1);
		}

		::RPG::Client::ActivityAlley::AlleyPackAnchor* get_AnchorWaitingAttach()
		{
			return ((::RPG::Client::ActivityAlley::AlleyPackAnchor*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKANCHOR_GET_ANCHORWAITINGATTACH_OFFSET))(this);
		}

		::System::Void set_AnchorWaitingAttach(::RPG::Client::ActivityAlley::AlleyPackAnchor* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityAlley::AlleyPackAnchor*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKANCHOR_SET_ANCHORWAITINGATTACH_OFFSET))(this, a1);
		}

		::System::Boolean get_IsAvailableTailAnchor()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKANCHOR_GET_ISAVAILABLETAILANCHOR_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKANCHOR_LATEUPDATE_OFFSET))(this);
		}

		::System::Void SetVisible(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKANCHOR_SETVISIBLE_OFFSET))(this, a1);
		}

		::System::Void SetSelect(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKANCHOR_SETSELECT_OFFSET))(this, a1);
		}

		::System::Void TryPlayMatchAnime(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKANCHOR_TRYPLAYMATCHANIME_OFFSET))(this, a1);
		}

		::System::Void NEAFLEKFANC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKANCHOR_NEAFLEKFANC_OFFSET))(this);
		}

		::System::Void FOLDGAJHFPE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKANCHOR_FOLDGAJHFPE_OFFSET))(this);
		}

		::System::Void GOGBDOGNGHJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKANCHOR_GOGBDOGNGHJ_OFFSET))(this);
		}

		::System::Void JJCODDEKCOC(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKANCHOR_JJCODDEKCOC_OFFSET))(this, a1);
		}

		::System::Void ELHGCLEMDOH(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKANCHOR_ELHGCLEMDOH_OFFSET))(this, a1);
		}

		::RPG::Client::ActivityAlley::AlleyPackAnchorViewState get_ViewState()
		{
			return ((::RPG::Client::ActivityAlley::AlleyPackAnchorViewState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKANCHOR_GET_VIEWSTATE_OFFSET))(this);
		}

		::System::Void set_ViewState(::RPG::Client::ActivityAlley::AlleyPackAnchorViewState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityAlley::AlleyPackAnchorViewState))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKANCHOR_SET_VIEWSTATE_OFFSET))(this, a1);
		}

	};
}
