#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/BoxmanCoord.h"
#include "unitysdk/RPG/Client/Prop/BoxmanDir.h"
#include "unitysdk/RPG/Client/Prop/BoxmanItemType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client::Prop { class WaterLevelBoxman; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }

#define RPG_CLIENT_PROP_WATERLEVELBOXITEM_AAJGDIPMKKG_OFFSET UNITYSDK_OFFSET(0xDDD02F0)
#define RPG_CLIENT_PROP_WATERLEVELBOXITEM_AJGHKBPIEKC_OFFSET UNITYSDK_OFFSET(0xDDD05D0)
#define RPG_CLIENT_PROP_WATERLEVELBOXITEM_CCTOR_OFFSET UNITYSDK_OFFSET(0xDDD0860)
#define RPG_CLIENT_PROP_WATERLEVELBOXITEM_CTOR_OFFSET UNITYSDK_OFFSET(0xDDD0850)
#define RPG_CLIENT_PROP_WATERLEVELBOXITEM_HLDMOMAHOIH_OFFSET UNITYSDK_OFFSET(0xDDD0480)
#define RPG_CLIENT_PROP_WATERLEVELBOXITEM_MOVE_OFFSET UNITYSDK_OFFSET(0xDDCFFF0)
#define RPG_CLIENT_PROP_WATERLEVELBOXITEM_REFERSHPOSITION_OFFSET UNITYSDK_OFFSET(0xDDD0700)
#define RPG_CLIENT_PROP_WATERLEVELBOXITEM_RESET_OFFSET UNITYSDK_OFFSET(0xDDD06B0)
#define RPG_CLIENT_PROP_WATERLEVELBOXITEM_SETBOXSELECT_OFFSET UNITYSDK_OFFSET(0xDDD0380)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int WaterLevelBoxItem_TypeDefinitionIndex = 78912;

	class WaterLevelBoxItem : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::Prop::WaterLevelBoxman* Board; // 0x18
		::RPG::Client::Prop::BoxmanCoord Coord; // 0x20
		::System::String* OptionTextmapID; // 0x28
		::RPG::Client::Prop::BoxmanItemType ItemType; // 0x30
		::System::Single YOffset; // 0x34
		::RPG::Client::Prop::BoxmanCoord ResetCoord; // 0x38
		::System::Boolean IsInActiveWaterLevelState; // 0x40
		::System::Byte _padding0[0x3];
		::UnityEngine::Vector3 OODFLGPMAKO; // 0x44
		::System::Single Speed; // 0x50
		static ::System::Int32* StaticGet_EPLIAANMJLL()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.Prop", "WaterLevelBoxItem")->GetStaticField(0x14500);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WATERLEVELBOXITEM_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WATERLEVELBOXITEM_CCTOR_OFFSET))();
		}

		::System::Void Move(::RPG::Client::Prop::BoxmanDir a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::BoxmanDir))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WATERLEVELBOXITEM_MOVE_OFFSET))(this, a1);
		}

		::System::Void SetBoxSelect(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WATERLEVELBOXITEM_SETBOXSELECT_OFFSET))(this, a1);
		}

		::System::Boolean HLDMOMAHOIH(::RPG::Client::Prop::BoxmanDir a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::Prop::BoxmanDir))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WATERLEVELBOXITEM_HLDMOMAHOIH_OFFSET))(this, a1);
		}

		::System::Collections::IEnumerator* AAJGDIPMKKG(::RPG::Client::Prop::BoxmanDir a1)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::RPG::Client::Prop::BoxmanDir))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WATERLEVELBOXITEM_AAJGDIPMKKG_OFFSET))(this, a1);
		}

		::System::Void AJGHKBPIEKC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WATERLEVELBOXITEM_AJGHKBPIEKC_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WATERLEVELBOXITEM_RESET_OFFSET))(this);
		}

		::System::Void RefershPosition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WATERLEVELBOXITEM_REFERSHPOSITION_OFFSET))(this);
		}

	};
}
