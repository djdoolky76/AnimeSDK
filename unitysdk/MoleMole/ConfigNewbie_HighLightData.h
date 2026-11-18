#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HDDJDIGKCMD.h"
#include "unitysdk/MoleMole/ConfigNewbie_TargetPath.h"
#include "unitysdk/FlexBuffers/FlxMap.h"

namespace SimpleJSON { class JSONClass; }
namespace System { class String; }

#define MOLEMOLE_CONFIGNEWBIE_HIGHLIGHTDATA_LOADFROMBYTES_OFFSET UNITYSDK_OFFSET(0x142CD8F0)
#define MOLEMOLE_CONFIGNEWBIE_HIGHLIGHTDATA_LOADFROMJSON_OFFSET UNITYSDK_OFFSET(0x142CDC70)
#define MOLEMOLE_CONFIGNEWBIE_HIGHLIGHTDATA__CTOR_1_OFFSET UNITYSDK_OFFSET(0x142CD8E0)
#define MOLEMOLE_CONFIGNEWBIE_HIGHLIGHTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x142CD8A0)
#define MOLEMOLE_CONFIGNEWBIE_HIGHLIGHTDATA___BASE_LOADFROMBYTES_OFFSET UNITYSDK_OFFSET(0x142CE140)
#define MOLEMOLE_CONFIGNEWBIE_HIGHLIGHTDATA___BASE_LOADFROMJSON_OFFSET UNITYSDK_OFFSET(0x142CE170)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigNewbie_HighLightData_TypeDefinitionIndex = 55940;

	class ConfigNewbie_HighLightData : public ::MoleMole::ConfigNewbie_TargetPath
	{
	public:
		::System::String* comment; // 0x28
		::System::Boolean disableClick; // 0x30
		::System::Boolean muteClickNextCB; // 0x31
		::System::Boolean AddSortingOrder; // 0x32
		::System::Boolean SkipConsole; // 0x33
		::HDDJDIGKCMD LightLoopIgnorePlatform; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGNEWBIE_HIGHLIGHTDATA__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* path)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGNEWBIE_HIGHLIGHTDATA__CTOR_1_OFFSET))(this, path);
		}

		::System::Void LoadFromBytes(::FlexBuffers::FlxMap flexMap)
		{
			return ((::System::Void(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGNEWBIE_HIGHLIGHTDATA_LOADFROMBYTES_OFFSET))(this, flexMap);
		}

		::System::Void LoadFromJson(::SimpleJSON::JSONClass* jsonNode)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONClass*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGNEWBIE_HIGHLIGHTDATA_LOADFROMJSON_OFFSET))(this, jsonNode);
		}

		::System::Void __base_LoadFromBytes(::FlexBuffers::FlxMap P0)
		{
			return ((::System::Void(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGNEWBIE_HIGHLIGHTDATA___BASE_LOADFROMBYTES_OFFSET))(this, P0);
		}

		::System::Void __base_LoadFromJson(::SimpleJSON::JSONClass* P0)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONClass*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGNEWBIE_HIGHLIGHTDATA___BASE_LOADFROMJSON_OFFSET))(this, P0);
		}
	};
}
