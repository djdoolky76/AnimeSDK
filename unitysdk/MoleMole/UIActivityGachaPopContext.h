#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class CJIEIHEDMME;
class FPBOLBNCDIP;
class HOKMBPMEAIN;

#define MOLEMOLE_UIACTIVITYGACHAPOPCONTEXT_INITPOPCONTEXT_OFFSET UNITYSDK_OFFSET(0x17E986F0)
#define MOLEMOLE_UIACTIVITYGACHAPOPCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x17E98820)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityGachaPopContext_TypeDefinitionIndex = 58690;

	class UIActivityGachaPopContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::CJIEIHEDMME* relateActivity; // 0x28
		::FPBOLBNCDIP* popData; // 0x30
		::HOKMBPMEAIN* template_; // 0x38
		::System::Int32 popID; // 0x40
		::System::Boolean isLoginMessage; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYGACHAPOPCONTEXT__CTOR_OFFSET))(this);
		}

		::System::Void InitPopContext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYGACHAPOPCONTEXT_INITPOPCONTEXT_OFFSET))(this);
		}
	};
}
