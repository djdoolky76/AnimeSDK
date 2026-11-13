#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/BoxmanCoord.h"
#include "unitysdk/RPG/Client/Prop/BoxmanDir.h"
#include "unitysdk/RPG/Client/Prop/BoxmanItemType.h"
#include "unitysdk/RPG/Client/Prop/ScenePuzzleItemBase.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Vector3.h"
class EKOJBGEHGDL;
namespace RPG::Client::Prop { class BoxmanPuzzleBoard; }
namespace RPG::Client::Prop { class BoxmanPuzzleItemBindProp; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }

#define RPG_CLIENT_PROP_BOXMANPUZZLEITEM_AAJGDIPMKKG_OFFSET UNITYSDK_OFFSET(0x1BFC48D0)
#define RPG_CLIENT_PROP_BOXMANPUZZLEITEM_AJGHKBPIEKC_OFFSET UNITYSDK_OFFSET(0x1BFC4970)
#define RPG_CLIENT_PROP_BOXMANPUZZLEITEM_AWAKE_OFFSET UNITYSDK_OFFSET(0x19C0BC90)
#define RPG_CLIENT_PROP_BOXMANPUZZLEITEM_CANBOXSELECT_OFFSET UNITYSDK_OFFSET(0x1BFC4730)
#define RPG_CLIENT_PROP_BOXMANPUZZLEITEM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BFC50B0)
#define RPG_CLIENT_PROP_BOXMANPUZZLEITEM_CTOR_OFFSET UNITYSDK_OFFSET(0x1BFC5020)
#define RPG_CLIENT_PROP_BOXMANPUZZLEITEM_DUMPPERSISTENTDATA_OFFSET UNITYSDK_OFFSET(0x1BFC4DD0)
#define RPG_CLIENT_PROP_BOXMANPUZZLEITEM_EBNOKKFPGMC_OFFSET UNITYSDK_OFFSET(0x19C0C3F0)
#define RPG_CLIENT_PROP_BOXMANPUZZLEITEM_FFGLFENEBPF_OFFSET UNITYSDK_OFFSET(0x1BFC4170)
#define RPG_CLIENT_PROP_BOXMANPUZZLEITEM_FKDPAGBEHFD_OFFSET UNITYSDK_OFFSET(0x1BFC4210)
#define RPG_CLIENT_PROP_BOXMANPUZZLEITEM_HLDMOMAHOIH_OFFSET UNITYSDK_OFFSET(0x1BFC4790)
#define RPG_CLIENT_PROP_BOXMANPUZZLEITEM_INIT_OFFSET UNITYSDK_OFFSET(0x19C0BD70)
#define RPG_CLIENT_PROP_BOXMANPUZZLEITEM_INTERACT_OFFSET UNITYSDK_OFFSET(0x19C0C320)
#define RPG_CLIENT_PROP_BOXMANPUZZLEITEM_ISNORMALBOX_OFFSET UNITYSDK_OFFSET(0x1BFC4FD0)
#define RPG_CLIENT_PROP_BOXMANPUZZLEITEM_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x19C0C2C0)
#define RPG_CLIENT_PROP_BOXMANPUZZLEITEM_LOADPERSISTENTDATA_OFFSET UNITYSDK_OFFSET(0x1BFC4C90)
#define RPG_CLIENT_PROP_BOXMANPUZZLEITEM_MOVE_OFFSET UNITYSDK_OFFSET(0x19C0AE00)
#define RPG_CLIENT_PROP_BOXMANPUZZLEITEM_NPBLGGGDOLB_OFFSET UNITYSDK_OFFSET(0x1BFC40B0)
#define RPG_CLIENT_PROP_BOXMANPUZZLEITEM_ONSELECT_OFFSET UNITYSDK_OFFSET(0x1BFC4570)
#define RPG_CLIENT_PROP_BOXMANPUZZLEITEM_REFERSHPOSITION_OFFSET UNITYSDK_OFFSET(0x1BFC4B40)
#define RPG_CLIENT_PROP_BOXMANPUZZLEITEM_RESET_OFFSET UNITYSDK_OFFSET(0x1BFC4A40)
#define RPG_CLIENT_PROP_BOXMANPUZZLEITEM_SETBOXSELECT_OFFSET UNITYSDK_OFFSET(0x1BFC4630)
#define RPG_CLIENT_PROP_BOXMANPUZZLEITEM_SETFINISHSTATE_OFFSET UNITYSDK_OFFSET(0x1BFC4E10)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int BoxmanPuzzleItem_TypeDefinitionIndex = 81619;

	class BoxmanPuzzleItem : public ::RPG::Client::Prop::ScenePuzzleItemBase
	{
	public:
		::RPG::Client::Prop::BoxmanPuzzleBoard* Board; // 0x20
		::RPG::GameCore::GameEntity* AttachEntity; // 0x28
		::RPG::Client::Prop::BoxmanCoord Coord; // 0x30
		::System::String* OptionTextmapID; // 0x38
		::RPG::Client::Prop::BoxmanItemType ItemType; // 0x40
		::System::Single YOffset; // 0x44
		::RPG::Client::Prop::BoxmanCoord ResetCoord; // 0x48
		::System::Int32 BoxIndex; // 0x50
		::System::Boolean TargetItemFinish; // 0x54
		::System::Byte _padding0[0x3];
		::UnityEngine::Vector3 OODFLGPMAKO; // 0x58
		::System::Nullable_1<::System::Boolean> PDAAPKHANNJ; // 0x64
		::System::Single Speed; // 0x68
		::System::UInt32 IdleMotionId; // 0x6C
		::System::UInt32 InteractMotionId; // 0x70
		::System::Single InteractMotionDuration; // 0x74
		::System::Single BlackScreenFadeinDuration; // 0x78
		::System::Single BlackScreenFadeoutDuration; // 0x7C
		::System::String* TargetStubPrefabPath; // 0x80
		::System::String* TargetStubConfigEntityPath; // 0x88
		::System::String* TargetStubJsonPath; // 0x90
		::System::String* FreeStyleCharacterID; // 0x98
		::System::Boolean InteractOnLeft; // 0xA0
		::System::Boolean InteractOnRight; // 0xA1
		::System::Boolean InteractOnUp; // 0xA2
		::System::Boolean InteractOnBottom; // 0xA3
		::System::Byte _padding1[0x4];
		::RPG::Client::Prop::BoxmanPuzzleItemBindProp* BindProp; // 0xA8
		::System::String* BoxStartMoveOverrideSound; // 0xB0
		::System::String* BoxArriveTargetOverrideSound; // 0xB8
		static ::System::Int32* StaticGet_NMGIHKOHOAI()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.Prop", "BoxmanPuzzleItem")->GetStaticField(0x12090);
		}

		static ::System::Int32* StaticGet_EPLIAANMJLL()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.Prop", "BoxmanPuzzleItem")->GetStaticField(0x12094);
		}

		static ::System::Int32* StaticGet_JLGAGGNJAHI()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.Prop", "BoxmanPuzzleItem")->GetStaticField(0x12098);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEITEM_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEITEM_CCTOR_OFFSET))();
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEITEM_AWAKE_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEITEM_INIT_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEITEM_LATEUPDATE_OFFSET))(this);
		}

		::System::Void Move(::RPG::Client::Prop::BoxmanDir a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::BoxmanDir))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEITEM_MOVE_OFFSET))(this, a1);
		}

		::System::Void Interact()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEITEM_INTERACT_OFFSET))(this);
		}

		::System::Collections::IEnumerator* EBNOKKFPGMC(::System::Single a1)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEITEM_EBNOKKFPGMC_OFFSET))(this, a1);
		}

		::System::Void NPBLGGGDOLB(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEITEM_NPBLGGGDOLB_OFFSET))(this, a1);
		}

		::System::Collections::IEnumerator* FFGLFENEBPF(::System::Single a1)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEITEM_FFGLFENEBPF_OFFSET))(this, a1);
		}

		::System::Void FKDPAGBEHFD(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEITEM_FKDPAGBEHFD_OFFSET))(this, a1);
		}

		::System::Void OnSelect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEITEM_ONSELECT_OFFSET))(this);
		}

		::System::Void SetBoxSelect(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEITEM_SETBOXSELECT_OFFSET))(this, a1);
		}

		::System::Boolean CanBoxSelect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEITEM_CANBOXSELECT_OFFSET))(this);
		}

		::System::Boolean HLDMOMAHOIH(::RPG::Client::Prop::BoxmanDir a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::Prop::BoxmanDir))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEITEM_HLDMOMAHOIH_OFFSET))(this, a1);
		}

		::System::Collections::IEnumerator* AAJGDIPMKKG(::RPG::Client::Prop::BoxmanDir a1)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::RPG::Client::Prop::BoxmanDir))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEITEM_AAJGDIPMKKG_OFFSET))(this, a1);
		}

		::System::Void AJGHKBPIEKC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEITEM_AJGHKBPIEKC_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEITEM_RESET_OFFSET))(this);
		}

		::System::Void LoadPersistentData(::EKOJBGEHGDL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKOJBGEHGDL*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEITEM_LOADPERSISTENTDATA_OFFSET))(this, a1);
		}

		::System::Void DumpPersistentData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEITEM_DUMPPERSISTENTDATA_OFFSET))(this);
		}

		::System::Void RefershPosition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEITEM_REFERSHPOSITION_OFFSET))(this);
		}

		::System::Void SetFinishState(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEITEM_SETFINISHSTATE_OFFSET))(this, a1);
		}

		::System::Boolean IsNormalBox()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEITEM_ISNORMALBOX_OFFSET))(this);
		}

	};
}
