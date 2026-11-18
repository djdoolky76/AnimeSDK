#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/MonsterFunctionType.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/MoleMole/EntityHandle.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_BATTLE_FIELDINFO_MONSTERINFO_EDOBGOPDBIG_OFFSET UNITYSDK_OFFSET(0x847AF0)
#define MOLEMOLE_BATTLE_FIELDINFO_MONSTERINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x8479A0)

namespace MoleMole::Battle
{
	inline static constexpr unsigned int FieldInfo_MonsterInfo_TypeDefinitionIndex = 64068;

	struct alignas(8) FieldInfo_MonsterInfo
	{
		::System::Int32 totalCount; // 0x10
		::System::Byte _padding0[0x4];
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* monsterCountByID; // 0x18
		::System::Collections::Generic::Dictionary_2<::MoleMole::Config::MonsterFunctionType, ::System::Int32>* monsterCountByFunctionID; // 0x20

		::System::Void _ctor(::System::Int32 ALGNHGBCMGF)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_FIELDINFO_MONSTERINFO__CTOR_OFFSET))(this, ALGNHGBCMGF);
		}

		::System::Void EDOBGOPDBIG(::MoleMole::EntityHandle NFFNEFLKPDG)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_FIELDINFO_MONSTERINFO_EDOBGOPDBIG_OFFSET))(this, NFFNEFLKPDG);
		}
	};
}
