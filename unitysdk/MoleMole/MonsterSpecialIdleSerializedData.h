#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class MonsterSpecialIdleEntry; }

#define MOLEMOLE_MONSTERSPECIALIDLESERIALIZEDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x14B0F4B0)

namespace MoleMole
{
	inline static constexpr unsigned int MonsterSpecialIdleSerializedData_TypeDefinitionIndex = 48388;

	class MonsterSpecialIdleSerializedData : public ::System::Object
	{
	public:
		::System::Int32 MonsterID; // 0x10
		::System::Byte _padding0[0x4];
		::MoleMole::MonsterSpecialIdleEntry* Entry; // 0x18

		::System::Void _ctor(::System::Int32 MEHIKNLAGJF, ::MoleMole::MonsterSpecialIdleEntry* AAIJGGIEOGK)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::MoleMole::MonsterSpecialIdleEntry*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONSTERSPECIALIDLESERIALIZEDDATA__CTOR_OFFSET))(this, MEHIKNLAGJF, AAIJGGIEOGK);
		}
	};
}
