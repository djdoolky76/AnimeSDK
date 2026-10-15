#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KFCMGNCLHMD;
class LGBHONLHNPN;
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace RPG::Client::Prop { class AdjustContainer; }
namespace RPG::Client::Prop { class AdjustContainer_ContainerInstance; }
namespace RPG::GameCore { class OptionTalkInfo; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERCONTROLLER_AIFAKPNCPIL_OFFSET UNITYSDK_OFFSET(0xDC0A840)
#define RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERCONTROLLER_AOPPIGKFHKG_OFFSET UNITYSDK_OFFSET(0xDC0A2C0)
#define RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERCONTROLLER_APHBPNEFOBF_OFFSET UNITYSDK_OFFSET(0xDC0A1D0)
#define RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERCONTROLLER_BKCPMPMKLFI_OFFSET UNITYSDK_OFFSET(0xDC0B4D0)
#define RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERCONTROLLER_CDEBBIONEDG_OFFSET UNITYSDK_OFFSET(0xDC0AD30)
#define RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERCONTROLLER_CEKKFLPDHDJ_OFFSET UNITYSDK_OFFSET(0xDC0B830)
#define RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERCONTROLLER_CTOR_OFFSET UNITYSDK_OFFSET(0xDC0B940)
#define RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERCONTROLLER_DJGEBEHOPLO_OFFSET UNITYSDK_OFFSET(0xDC0B8D0)
#define RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERCONTROLLER_DNDHLAONCMM_OFFSET UNITYSDK_OFFSET(0xDC0A8B0)
#define RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERCONTROLLER_EMIGODHDMFF_OFFSET UNITYSDK_OFFSET(0xDC0B2E0)
#define RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERCONTROLLER_FEOHMGAFLCK_OFFSET UNITYSDK_OFFSET(0xDC0B040)
#define RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERCONTROLLER_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0xDC067D0)
#define RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERCONTROLLER_JDEANCEJOJH_OFFSET UNITYSDK_OFFSET(0xDC0B780)
#define RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERCONTROLLER_JJCMGLAGJHE_OFFSET UNITYSDK_OFFSET(0xDC09570)
#define RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERCONTROLLER_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xDC07290)
#define RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERCONTROLLER_KDLONLINIAG_OFFSET UNITYSDK_OFFSET(0xDC0ABD0)
#define RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERCONTROLLER_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0xDC076D0)
#define RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERCONTROLLER_MPOCPHAHNIB_OFFSET UNITYSDK_OFFSET(0xDC08230)
#define RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERCONTROLLER_NHIMDKHGJHC_OFFSET UNITYSDK_OFFSET(0xDC0B720)
#define RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERCONTROLLER_OGMPFAHGPCA_OFFSET UNITYSDK_OFFSET(0xDC0B1A0)
#define RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERCONTROLLER_PADOFEAEPAG_OFFSET UNITYSDK_OFFSET(0xDC09DC0)
#define RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERCONTROLLER_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0xDC07FF0)
#define RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERCONTROLLER___REGENERATENOREUSE_B__6_2_OFFSET UNITYSDK_OFFSET(0xDC0BA00)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int AdjustContainer_ContainerController_TypeDefinitionIndex = 78195;

	class AdjustContainer_ContainerController : public ::System::Object
	{
	public:
		::System::Int32 TargetContainerIndex; // 0x10
		::System::Byte _padding0[0x4];
		::Il2CppArray<::System::Int32>* FollowContainerIndexArray; // 0x18
		::UnityEngine::Transform* ControllerAttachRoot; // 0x20
		::UnityEngine::GameObject* ContainerItem; // 0x28
		::System::String* ContainerControllerPrefabPath; // 0x30
		::System::Boolean IsRevertDirection; // 0x38
		::System::Byte _padding1[0x7];
		::System::String* MoveLeftText; // 0x40
		::System::String* MoveRightText; // 0x48
		::System::String* QuitOperationText; // 0x50
		::System::String* MoveOperationText; // 0x58
		::System::String* AnimatorStateName; // 0x60
		::System::String* OnPerformStartCustomEventString; // 0x68
		::System::String* OnPerformEndCustomEventString; // 0x70
		::System::String* MoveWaitPlayerAnimStateName; // 0x78
		::System::Single InteractMoveDelay; // 0x80
		::System::Boolean IsActiveVCamera; // 0x84
		::System::Byte _padding2[0x3];
		::RPG::Client::Prop::AdjustContainer* OwnerAdjustContainerRef; // 0x88
		::System::Int32 ConsoleID; // 0x90
		::System::Boolean IsInOperation; // 0x94
		::System::Boolean IsInMoving; // 0x95
		::System::Byte _padding3[0x2];
		::RPG::Client::Prop::AdjustContainer_ContainerInstance* TargetContainerInstance; // 0x98
		::System::Collections::Generic::List_1<::System::Object*>* FollowContainerInstanceList; // 0xA0
		::KFCMGNCLHMD* _TriggerProxy; // 0xA8
		::System::Collections::Generic::List_1<::System::String*>* _TextOptions; // 0xB0
		::UnityEngine::Animator* _Animator; // 0xB8
		::System::Boolean _IsRight; // 0xC0
		::System::Byte _padding4[0x7];
		::LGBHONLHNPN* _AnimEventCompt; // 0xC8
		::System::Int32 _AnimatorStateNameHash; // 0xD0
		::System::Int32 _MoveWaitPlayerAnimStateNameHash; // 0xD4
		::System::Single _DelayTimer; // 0xD8
		::System::Boolean _IsNeedShowOptionUI; // 0xDC
		::System::Boolean _IsTalkUIReady; // 0xDD
		::System::Byte _padding5[0x2];
		::RPG::GameCore::OptionTalkInfo* MoveLeftOption; // 0xE0
		::RPG::GameCore::OptionTalkInfo* MoveRightOption; // 0xE8
		::RPG::GameCore::OptionTalkInfo* QuitOption; // 0xF0
		::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>* _StreamingItem; // 0xF8
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERCONTROLLER_CTOR_OFFSET))(this);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERCONTROLLER_PJPFIHFAHGO_OFFSET))(this);
		}

		::System::Void KHGIKBFDLFB(::RPG::Client::Prop::AdjustContainer* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::AdjustContainer*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERCONTROLLER_KHGIKBFDLFB_OFFSET))(this, a1, a2);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERCONTROLLER_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERCONTROLLER_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void MPOCPHAHNIB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERCONTROLLER_MPOCPHAHNIB_OFFSET))(this);
		}

		::System::Void AIFAKPNCPIL(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERCONTROLLER_AIFAKPNCPIL_OFFSET))(this, a1);
		}

		::System::Void JJCMGLAGJHE(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERCONTROLLER_JJCMGLAGJHE_OFFSET))(this, a1);
		}

		::System::Void DNDHLAONCMM(::UnityEngine::GameObject* a1, ::RPG::Client::OpenWorld::StreamingItemData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERCONTROLLER_DNDHLAONCMM_OFFSET))(this, a1, a2);
		}

		::System::Void PADOFEAEPAG(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERCONTROLLER_PADOFEAEPAG_OFFSET))(this, a1);
		}

		::System::Void KDLONLINIAG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERCONTROLLER_KDLONLINIAG_OFFSET))(this);
		}

		::System::Void FEOHMGAFLCK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERCONTROLLER_FEOHMGAFLCK_OFFSET))(this);
		}

		::System::Void CDEBBIONEDG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERCONTROLLER_CDEBBIONEDG_OFFSET))(this);
		}

		::System::Void EMIGODHDMFF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERCONTROLLER_EMIGODHDMFF_OFFSET))(this);
		}

		::System::Void BKCPMPMKLFI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERCONTROLLER_BKCPMPMKLFI_OFFSET))(this, a1);
		}

		::System::Void NHIMDKHGJHC(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERCONTROLLER_NHIMDKHGJHC_OFFSET))(this, a1);
		}

		::System::Void AOPPIGKFHKG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERCONTROLLER_AOPPIGKFHKG_OFFSET))(this);
		}

		::System::Void JDEANCEJOJH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERCONTROLLER_JDEANCEJOJH_OFFSET))(this);
		}

		::System::Void CEKKFLPDHDJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERCONTROLLER_CEKKFLPDHDJ_OFFSET))(this);
		}

		::System::Void OGMPFAHGPCA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERCONTROLLER_OGMPFAHGPCA_OFFSET))(this);
		}

		::System::Void DJGEBEHOPLO(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERCONTROLLER_DJGEBEHOPLO_OFFSET))(this, a1, a2, a3);
		}

		::System::Void APHBPNEFOBF(::System::Single a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERCONTROLLER_APHBPNEFOBF_OFFSET))(this, a1, a2);
		}

		::System::Void __ReGenerateNoReUse_b__6_2(::UnityEngine::GameObject* a1, ::RPG::Client::OpenWorld::StreamingItemData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERCONTROLLER___REGENERATENOREUSE_B__6_2_OFFSET))(this, a1, a2);
		}

	};
}
