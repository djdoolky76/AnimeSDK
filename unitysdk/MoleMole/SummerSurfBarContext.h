#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_SUMMERSURFBARCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x18966900)

namespace MoleMole
{
	inline static constexpr unsigned int SummerSurfBarContext_TypeDefinitionIndex = 51478;

	class SummerSurfBarContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::UInt32 Entity; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERSURFBARCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
