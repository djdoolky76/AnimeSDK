#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class JCKHHCLBAOA;

#define MOLEMOLE_UICINEMAREPORTPAGECONTEXT_INITREPORTCONTEXT_OFFSET UNITYSDK_OFFSET(0x19FB30C0)
#define MOLEMOLE_UICINEMAREPORTPAGECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x19FB31F0)

namespace MoleMole
{
	inline static constexpr unsigned int UICinemaReportPageContext_TypeDefinitionIndex = 56895;

	class UICinemaReportPageContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::JCKHHCLBAOA* reportData; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAREPORTPAGECONTEXT__CTOR_OFFSET))(this);
		}

		::System::Void InitReportContext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAREPORTPAGECONTEXT_INITREPORTCONTEXT_OFFSET))(this);
		}
	};
}
