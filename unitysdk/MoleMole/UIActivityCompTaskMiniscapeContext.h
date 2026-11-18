#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class CJIEIHEDMME;

#define MOLEMOLE_UIACTIVITYCOMPTASKMINISCAPECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x19F8A6F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityCompTaskMiniscapeContext_TypeDefinitionIndex = 90020;

	class UIActivityCompTaskMiniscapeContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::CJIEIHEDMME* activityData; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCOMPTASKMINISCAPECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
