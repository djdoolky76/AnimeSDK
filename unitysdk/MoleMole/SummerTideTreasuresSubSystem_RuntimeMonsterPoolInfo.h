#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_RUNTIMEMONSTERPOOLINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x14B36EA0)

namespace MoleMole
{
	inline static constexpr unsigned int SummerTideTreasuresSubSystem_RuntimeMonsterPoolInfo_TypeDefinitionIndex = 69672;

	class SummerTideTreasuresSubSystem_RuntimeMonsterPoolInfo : public ::System::Object
	{
	public:
		::System::Int32 curNum; // 0x10
		::System::Int32 curWeight; // 0x14
		::System::Int32 monsterID; // 0x18
		::System::Int32 maxNum; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_RUNTIMEMONSTERPOOLINFO__CTOR_OFFSET))(this);
		}
	};
}
