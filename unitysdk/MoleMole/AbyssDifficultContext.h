#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LENFNPPJAHE.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_ABYSSDIFFICULTCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x130409B0)

namespace MoleMole
{
	inline static constexpr unsigned int AbyssDifficultContext_TypeDefinitionIndex = 50088;

	class AbyssDifficultContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::LENFNPPJAHE AutoEntranceType; // 0x28
		::System::Int32 EntranceId; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ABYSSDIFFICULTCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
