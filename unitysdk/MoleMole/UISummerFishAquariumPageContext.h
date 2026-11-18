#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UISUMMERFISHAQUARIUMPAGECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x16914CB0)

namespace MoleMole
{
	inline static constexpr unsigned int UISummerFishAquariumPageContext_TypeDefinitionIndex = 47704;

	class UISummerFishAquariumPageContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Boolean IsLeftCamera; // 0x28
		::System::Boolean IsFromNpc; // 0x29

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHAQUARIUMPAGECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
