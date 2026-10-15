#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/BlockScreenHexPuzzle.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
namespace RPG::Client::Prop { class CablePuzzleItem; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PropInitPuzzle; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }

#define RPG_CLIENT_PROP_CABLEPUZZLEBOARD_AOBNMJOFAOA_OFFSET UNITYSDK_OFFSET(0xDC3DAA0)
#define RPG_CLIENT_PROP_CABLEPUZZLEBOARD_BDADKCDPPHH_OFFSET UNITYSDK_OFFSET(0xDC3DBF0)
#define RPG_CLIENT_PROP_CABLEPUZZLEBOARD_CCTOR_OFFSET UNITYSDK_OFFSET(0xDC3EFF0)
#define RPG_CLIENT_PROP_CABLEPUZZLEBOARD_CHNOGGODOIG_OFFSET UNITYSDK_OFFSET(0xDC3B880)
#define RPG_CLIENT_PROP_CABLEPUZZLEBOARD_CTOR_OFFSET UNITYSDK_OFFSET(0xDC3EBF0)
#define RPG_CLIENT_PROP_CABLEPUZZLEBOARD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDC3A610)
#define RPG_CLIENT_PROP_CABLEPUZZLEBOARD_EKFPAHCFBIN_OFFSET UNITYSDK_OFFSET(0xDC3DB60)
#define RPG_CLIENT_PROP_CABLEPUZZLEBOARD_GETUNIQUEID_OFFSET UNITYSDK_OFFSET(0xDC3A540)
#define RPG_CLIENT_PROP_CABLEPUZZLEBOARD_GET_ISFINISH_OFFSET UNITYSDK_OFFSET(0xDC3EBE0)
#define RPG_CLIENT_PROP_CABLEPUZZLEBOARD_INITCONTROLLERMODE_OFFSET UNITYSDK_OFFSET(0xDC3B050)
#define RPG_CLIENT_PROP_CABLEPUZZLEBOARD_INITITEMSPOSITION_OFFSET UNITYSDK_OFFSET(0xDC3C2C0)
#define RPG_CLIENT_PROP_CABLEPUZZLEBOARD_INITITEMS_OFFSET UNITYSDK_OFFSET(0xDC3BB80)
#define RPG_CLIENT_PROP_CABLEPUZZLEBOARD_INITPUZZLE_OFFSET UNITYSDK_OFFSET(0xDC3A290)
#define RPG_CLIENT_PROP_CABLEPUZZLEBOARD_ISPUZZLEFINISH_OFFSET UNITYSDK_OFFSET(0xDC3A5C0)
#define RPG_CLIENT_PROP_CABLEPUZZLEBOARD_JKOKINCDHGD_OFFSET UNITYSDK_OFFSET(0xDC3D1D0)
#define RPG_CLIENT_PROP_CABLEPUZZLEBOARD_LPJLOBMKIFA_OFFSET UNITYSDK_OFFSET(0xDC3D460)
#define RPG_CLIENT_PROP_CABLEPUZZLEBOARD_MJLMMLCKBKH_OFFSET UNITYSDK_OFFSET(0xDC3EB50)
#define RPG_CLIENT_PROP_CABLEPUZZLEBOARD_NKGKCNKEDEF_OFFSET UNITYSDK_OFFSET(0xDC3A040)
#define RPG_CLIENT_PROP_CABLEPUZZLEBOARD_OHHIIIANDDN_OFFSET UNITYSDK_OFFSET(0xDC3B7F0)
#define RPG_CLIENT_PROP_CABLEPUZZLEBOARD_OJLKCPMNMJC_OFFSET UNITYSDK_OFFSET(0xDC3C8B0)
#define RPG_CLIENT_PROP_CABLEPUZZLEBOARD_ONCONTROLLERJOYSTICKINPUT_OFFSET UNITYSDK_OFFSET(0xDC3AD40)
#define RPG_CLIENT_PROP_CABLEPUZZLEBOARD_ONCONTROLLERPRESSMENUCONFIRM_OFFSET UNITYSDK_OFFSET(0xDC3B290)
#define RPG_CLIENT_PROP_CABLEPUZZLEBOARD_ONFINISH_OFFSET UNITYSDK_OFFSET(0xDC3D280)
#define RPG_CLIENT_PROP_CABLEPUZZLEBOARD_ONNOTIFYCLICKEXIT_OFFSET UNITYSDK_OFFSET(0xDC3B300)
#define RPG_CLIENT_PROP_CABLEPUZZLEBOARD_ONNOTIFYCLICKRESET_OFFSET UNITYSDK_OFFSET(0xDC3B420)
#define RPG_CLIENT_PROP_CABLEPUZZLEBOARD_OPKMOKGFOAH_OFFSET UNITYSDK_OFFSET(0xDC3C9F0)
#define RPG_CLIENT_PROP_CABLEPUZZLEBOARD_REFRESHITEMSCONNECTIONRELATION_OFFSET UNITYSDK_OFFSET(0xDC3C570)
#define RPG_CLIENT_PROP_CABLEPUZZLEBOARD_REPORTSTEP_OFFSET UNITYSDK_OFFSET(0xDC3D520)
#define RPG_CLIENT_PROP_CABLEPUZZLEBOARD_START_OFFSET UNITYSDK_OFFSET(0xDC3D9B0)
#define RPG_CLIENT_PROP_CABLEPUZZLEBOARD_UPDATE_OFFSET UNITYSDK_OFFSET(0xDC39850)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int CablePuzzleBoard_TypeDefinitionIndex = 78602;

	class CablePuzzleBoard : public ::RPG::Client::Prop::BlockScreenHexPuzzle
	{
	public:
		::System::Single RotateSpeed; // 0xF0
		::System::Byte _padding0[0x4];
		::System::String* ResetTriggerCustomString; // 0xF8
		::UnityEngine::Vector2Int ControllerModeInitHighlightPos; // 0x100
		::System::Single DelayResetTime; // 0x108
		::System::Byte _padding1[0x4];
		::UnityEngine::AnimationCurve* RotationSpeedCurve; // 0x110
		::UnityEngine::AnimationCurve* InitAnimationCurve; // 0x118
		::UnityEngine::Vector2Int CenterCoord; // 0x120
		::System::Single InitAnimationDuration; // 0x128
		::System::Single CenterItemInitAnimationHeight; // 0x12C
		::System::Single CenterLightDelay; // 0x130
		::System::Single LightDelay; // 0x134
		::System::String* RotateSoundEvent; // 0x138
		::System::String* ConnectSoundEvent; // 0x140
		::System::String* FinishSoundEvent; // 0x148
		::System::Int32 StartTime; // 0x150
		::System::Boolean PIPLLENMLIM; // 0x154
		::System::Byte _padding2[0x3];
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* GIOGDLNKNLM; // 0x158
		::System::Int32 KBDCCKCPCHH; // 0x160
		::System::Byte _padding3[0x4];
		::System::Collections::Generic::List_1<::RPG::Client::Prop::CablePuzzleItem*>* GCIKKMGIPIO; // 0x168
		::System::Collections::Generic::List_1<::RPG::Client::Prop::CablePuzzleItem*>* NKAKNMGMFGA; // 0x170
		::System::Collections::Generic::List_1<::RPG::Client::Prop::CablePuzzleItem*>* CIKDOOGLNDF; // 0x178
		::System::Collections::Generic::List_1<::RPG::Client::Prop::CablePuzzleItem*>* OINCGJJMAEF; // 0x180
		::System::Collections::Generic::List_1<::RPG::Client::Prop::CablePuzzleItem*>* KPDILHMLDBH; // 0x188
		::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::RPG::Client::Prop::CablePuzzleItem*>*>* BPBJMKENIJH; // 0x190
		::System::Collections::Generic::List_1<::RPG::Client::Prop::CablePuzzleItem*>* HPFCNGBDEGD; // 0x198
		::System::Collections::Generic::List_1<::RPG::Client::Prop::CablePuzzleItem*>* NEOLGHBOLKB; // 0x1A0
		::System::Collections::Generic::List_1<::RPG::Client::Prop::CablePuzzleItem*>* BHKLPKOPFAE; // 0x1A8
		::System::Boolean GBAHDJFPPBC; // 0x1B0
		::System::Boolean PMMNGNJMOJP; // 0x1B1
		::System::Byte _padding4[0x6];
		::RPG::Client::Prop::CablePuzzleItem* HOIMBOJIOPB; // 0x1B8
		static ::System::String** StaticGet_GameKey()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client.Prop", "CablePuzzleBoard")->GetStaticField(0x490F0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CABLEPUZZLEBOARD_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CABLEPUZZLEBOARD_CCTOR_OFFSET))();
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CABLEPUZZLEBOARD_UPDATE_OFFSET))(this);
		}

		::System::Void InitPuzzle(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TaskContext* a2, ::RPG::GameCore::PropInitPuzzle* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropInitPuzzle*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CABLEPUZZLEBOARD_INITPUZZLE_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean IsPuzzleFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CABLEPUZZLEBOARD_ISPUZZLEFINISH_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CABLEPUZZLEBOARD_DISPOSE_OFFSET))(this);
		}

		::System::Void OnControllerJoystickInput(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CABLEPUZZLEBOARD_ONCONTROLLERJOYSTICKINPUT_OFFSET))(this, a1, a2);
		}

		::System::Void OnControllerPressMenuConfirm()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CABLEPUZZLEBOARD_ONCONTROLLERPRESSMENUCONFIRM_OFFSET))(this);
		}

		::System::Void InitControllerMode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CABLEPUZZLEBOARD_INITCONTROLLERMODE_OFFSET))(this);
		}

		::System::Void OnNotifyClickExit(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CABLEPUZZLEBOARD_ONNOTIFYCLICKEXIT_OFFSET))(this, a1);
		}

		::System::Void OnNotifyClickReset(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CABLEPUZZLEBOARD_ONNOTIFYCLICKRESET_OFFSET))(this, a1);
		}

		::System::Collections::IEnumerator* OHHIIIANDDN()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CABLEPUZZLEBOARD_OHHIIIANDDN_OFFSET))(this);
		}

		::System::Void CHNOGGODOIG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CABLEPUZZLEBOARD_CHNOGGODOIG_OFFSET))(this);
		}

		::System::Void InitItems()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CABLEPUZZLEBOARD_INITITEMS_OFFSET))(this);
		}

		::System::Void InitItemsPosition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CABLEPUZZLEBOARD_INITITEMSPOSITION_OFFSET))(this);
		}

		::System::UInt32 GetUniqueID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CABLEPUZZLEBOARD_GETUNIQUEID_OFFSET))(this);
		}

		::System::Void RefreshItemsConnectionRelation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CABLEPUZZLEBOARD_REFRESHITEMSCONNECTIONRELATION_OFFSET))(this);
		}

		::System::Void ReportStep(::RPG::Client::Prop::CablePuzzleItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::CablePuzzleItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CABLEPUZZLEBOARD_REPORTSTEP_OFFSET))(this, a1);
		}

		::System::Void OnFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CABLEPUZZLEBOARD_ONFINISH_OFFSET))(this);
		}

		::System::Void NKGKCNKEDEF(::RPG::Client::Prop::CablePuzzleItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::CablePuzzleItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CABLEPUZZLEBOARD_NKGKCNKEDEF_OFFSET))(this, a1);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CABLEPUZZLEBOARD_START_OFFSET))(this);
		}

		::System::Collections::IEnumerator* EKFPAHCFBIN()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CABLEPUZZLEBOARD_EKFPAHCFBIN_OFFSET))(this);
		}

		::System::Void BDADKCDPPHH(::RPG::Client::Prop::CablePuzzleItem* a1, ::System::Collections::Generic::List_1<::RPG::Client::Prop::CablePuzzleItem*>* a2, ::System::Collections::Generic::List_1<::RPG::Client::Prop::CablePuzzleItem*>* a3, ::System::Collections::Generic::List_1<::RPG::Client::Prop::CablePuzzleItem*>* a4, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::RPG::Client::Prop::CablePuzzleItem*>*>* a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::CablePuzzleItem*, ::System::Collections::Generic::List_1<::RPG::Client::Prop::CablePuzzleItem*>*, ::System::Collections::Generic::List_1<::RPG::Client::Prop::CablePuzzleItem*>*, ::System::Collections::Generic::List_1<::RPG::Client::Prop::CablePuzzleItem*>*, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::RPG::Client::Prop::CablePuzzleItem*>*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CABLEPUZZLEBOARD_BDADKCDPPHH_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void OJLKCPMNMJC(::RPG::Client::Prop::CablePuzzleItem* a1, ::System::Collections::Generic::List_1<::RPG::Client::Prop::CablePuzzleItem*>* a2, ::System::Collections::Generic::List_1<::RPG::Client::Prop::CablePuzzleItem*>* a3, ::System::Collections::Generic::List_1<::RPG::Client::Prop::CablePuzzleItem*>* a4, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::RPG::Client::Prop::CablePuzzleItem*>*>* a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::CablePuzzleItem*, ::System::Collections::Generic::List_1<::RPG::Client::Prop::CablePuzzleItem*>*, ::System::Collections::Generic::List_1<::RPG::Client::Prop::CablePuzzleItem*>*, ::System::Collections::Generic::List_1<::RPG::Client::Prop::CablePuzzleItem*>*, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::RPG::Client::Prop::CablePuzzleItem*>*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CABLEPUZZLEBOARD_OJLKCPMNMJC_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Boolean OPKMOKGFOAH(::RPG::Client::Prop::CablePuzzleItem* a1, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::RPG::Client::Prop::CablePuzzleItem*>*>* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::Prop::CablePuzzleItem*, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::RPG::Client::Prop::CablePuzzleItem*>*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CABLEPUZZLEBOARD_OPKMOKGFOAH_OFFSET))(this, a1, a2);
		}

		::System::Void LPJLOBMKIFA(::System::Collections::Generic::List_1<::RPG::Client::Prop::CablePuzzleItem*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::Prop::CablePuzzleItem*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CABLEPUZZLEBOARD_LPJLOBMKIFA_OFFSET))(this, a1);
		}

		::System::Void JKOKINCDHGD(::System::Collections::Generic::List_1<::RPG::Client::Prop::CablePuzzleItem*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::Prop::CablePuzzleItem*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CABLEPUZZLEBOARD_JKOKINCDHGD_OFFSET))(this, a1);
		}

		::System::Void AOBNMJOFAOA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CABLEPUZZLEBOARD_AOBNMJOFAOA_OFFSET))(this);
		}

		::System::Collections::IEnumerator* MJLMMLCKBKH()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CABLEPUZZLEBOARD_MJLMMLCKBKH_OFFSET))(this);
		}

		::System::Boolean get_IsFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CABLEPUZZLEBOARD_GET_ISFINISH_OFFSET))(this);
		}

	};
}
