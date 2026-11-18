#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define MOLEMOLE_BATTLE_FIELDINFO_EVENTINFO_K_COUNT_EQUALS_OFFSET UNITYSDK_OFFSET(0x7D8C80)
#define MOLEMOLE_BATTLE_FIELDINFO_EVENTINFO_K_COUNT_JGBGPJACDOG_OFFSET UNITYSDK_OFFSET(0x7D8C90)

namespace MoleMole::Battle
{
	inline static constexpr unsigned int FieldInfo_EventInfo_K_Count_TypeDefinitionIndex = 47247;

	struct alignas(8) FieldInfo_EventInfo_K_Count
	{
		::System::String* kEvent; // 0x10
		::System::Int32 kCount; // 0x18
		::System::Single time; // 0x1C

		::System::Boolean Equals(::System::Object* EIFONLCJOPG)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_FIELDINFO_EVENTINFO_K_COUNT_EQUALS_OFFSET))(this, EIFONLCJOPG);
		}

		::System::Boolean JGBGPJACDOG(::System::Object* MIALFKCCCPI)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_FIELDINFO_EVENTINFO_K_COUNT_JGBGPJACDOG_OFFSET))(this, MIALFKCCCPI);
		}
	};
}
