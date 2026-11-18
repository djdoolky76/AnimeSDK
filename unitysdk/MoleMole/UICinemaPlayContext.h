#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class IKPCCMOBEOP;

#define MOLEMOLE_UICINEMAPLAYCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x16659CD0)

namespace MoleMole
{
	inline static constexpr unsigned int UICinemaPlayContext_TypeDefinitionIndex = 69161;

	class UICinemaPlayContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::IKPCCMOBEOP* playController; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAYCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
