#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/FlexBuffers/FlxMap.h"

namespace SimpleJSON { class JSONClass; }
namespace System { class String; }

#define MOLEMOLE_CONFIGNEWBIE_NEWBIEFAIRY_LOADFROMBYTES_OFFSET UNITYSDK_OFFSET(0x85EAC0)
#define MOLEMOLE_CONFIGNEWBIE_NEWBIEFAIRY_LOADFROMJSON_OFFSET UNITYSDK_OFFSET(0x85EAF0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigNewbie_NewbieFairy_TypeDefinitionIndex = 55941;

	struct alignas(8) ConfigNewbie_NewbieFairy
	{
		::System::Int32 FairyId; // 0x10
		::System::Int32 FairyDelay; // 0x14
		::System::String* FairyWidgetPrefab; // 0x18
		::System::String* NextKey; // 0x20

		::System::Void LoadFromBytes(::FlexBuffers::FlxMap flexMap)
		{
			return ((::System::Void(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGNEWBIE_NEWBIEFAIRY_LOADFROMBYTES_OFFSET))(this, flexMap);
		}

		::System::Void LoadFromJson(::SimpleJSON::JSONClass* jsonNode)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONClass*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGNEWBIE_NEWBIEFAIRY_LOADFROMJSON_OFFSET))(this, jsonNode);
		}
	};
}
