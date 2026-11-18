#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class FBHPDPBIGPK;

#define MOLEMOLE_UISOCIALCIRCLEINVITECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x15D63F70)

namespace MoleMole
{
	inline static constexpr unsigned int UISocialCircleInviteContext_TypeDefinitionIndex = 65201;

	class UISocialCircleInviteContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::FBHPDPBIGPK* Info; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISOCIALCIRCLEINVITECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
