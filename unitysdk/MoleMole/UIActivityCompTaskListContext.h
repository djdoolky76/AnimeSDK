#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class CJIEIHEDMME;

#define MOLEMOLE_UIACTIVITYCOMPTASKLISTCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A75AAA0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityCompTaskListContext_TypeDefinitionIndex = 62157;

	class UIActivityCompTaskListContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::CJIEIHEDMME* activityData; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCOMPTASKLISTCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
