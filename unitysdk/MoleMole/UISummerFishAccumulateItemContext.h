#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class FANBKJPNEDB;

#define MOLEMOLE_UISUMMERFISHACCUMULATEITEMCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x13B18E90)

namespace MoleMole
{
	inline static constexpr unsigned int UISummerFishAccumulateItemContext_TypeDefinitionIndex = 89085;

	class UISummerFishAccumulateItemContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::FANBKJPNEDB* Fish; // 0x28
		::System::Int32 Count; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHACCUMULATEITEMCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
