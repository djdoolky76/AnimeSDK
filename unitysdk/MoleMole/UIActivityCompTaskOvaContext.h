#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class CJIEIHEDMME;
class OJDJMBBAIKJ;

#define MOLEMOLE_UIACTIVITYCOMPTASKOVACONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A75AAF0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityCompTaskOvaContext_TypeDefinitionIndex = 61609;

	class UIActivityCompTaskOvaContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::OJDJMBBAIKJ* ovaTaskHandler; // 0x28
		::CJIEIHEDMME* activityData; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCOMPTASKOVACONTEXT__CTOR_OFFSET))(this);
		}
	};
}
