#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LGDIJBAAPKH.h"
#include "unitysdk/MoleMole/ConfigNewbie_HighLightPrefabData.h"
#include "unitysdk/MoleMole/ConfigNewbie_TargetPath_ExtraType.h"
#include "unitysdk/FlexBuffers/FlxMap.h"

namespace SimpleJSON { class JSONClass; }
namespace System { class String; }

#define MOLEMOLE_CONFIGNEWBIE_HIGHLIGHTDYNAMICDATA_GET_DATATYPE_OFFSET UNITYSDK_OFFSET(0x142CE180)
#define MOLEMOLE_CONFIGNEWBIE_HIGHLIGHTDYNAMICDATA_LOADFROMBYTES_OFFSET UNITYSDK_OFFSET(0x142CE190)
#define MOLEMOLE_CONFIGNEWBIE_HIGHLIGHTDYNAMICDATA_LOADFROMJSON_OFFSET UNITYSDK_OFFSET(0x142CE3E0)
#define MOLEMOLE_CONFIGNEWBIE_HIGHLIGHTDYNAMICDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x142CE670)
#define MOLEMOLE_CONFIGNEWBIE_HIGHLIGHTDYNAMICDATA___BASE_LOADFROMBYTES_OFFSET UNITYSDK_OFFSET(0x142CE6B0)
#define MOLEMOLE_CONFIGNEWBIE_HIGHLIGHTDYNAMICDATA___BASE_LOADFROMJSON_OFFSET UNITYSDK_OFFSET(0x142CE6E0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigNewbie_HighLightDynamicData_TypeDefinitionIndex = 55939;

	class ConfigNewbie_HighLightDynamicData : public ::MoleMole::ConfigNewbie_HighLightPrefabData
	{
	public:
		::LGDIJBAAPKH Type; // 0x20
		::System::Int32 param; // 0x24
		::System::String* param1String; // 0x28
		::System::String* param2String; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGNEWBIE_HIGHLIGHTDYNAMICDATA__CTOR_OFFSET))(this);
		}

		::MoleMole::ConfigNewbie_TargetPath_ExtraType get_DataType()
		{
			return ((::MoleMole::ConfigNewbie_TargetPath_ExtraType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGNEWBIE_HIGHLIGHTDYNAMICDATA_GET_DATATYPE_OFFSET))(this);
		}

		::System::Void LoadFromBytes(::FlexBuffers::FlxMap flexMap)
		{
			return ((::System::Void(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGNEWBIE_HIGHLIGHTDYNAMICDATA_LOADFROMBYTES_OFFSET))(this, flexMap);
		}

		::System::Void LoadFromJson(::SimpleJSON::JSONClass* jsonNode)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONClass*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGNEWBIE_HIGHLIGHTDYNAMICDATA_LOADFROMJSON_OFFSET))(this, jsonNode);
		}

		::System::Void __base_LoadFromBytes(::FlexBuffers::FlxMap P0)
		{
			return ((::System::Void(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGNEWBIE_HIGHLIGHTDYNAMICDATA___BASE_LOADFROMBYTES_OFFSET))(this, P0);
		}

		::System::Void __base_LoadFromJson(::SimpleJSON::JSONClass* P0)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONClass*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGNEWBIE_HIGHLIGHTDYNAMICDATA___BASE_LOADFROMJSON_OFFSET))(this, P0);
		}
	};
}
