#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class ALODAJDBHPE;

#define MOLEMOLE_UIACTIVITYCOMPTASKHIACONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x198FFB40)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityCompTaskHIAContext_TypeDefinitionIndex = 76839;

	class UIActivityCompTaskHIAContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::ALODAJDBHPE* hiaTaskhandler; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCOMPTASKHIACONTEXT__CTOR_OFFSET))(this);
		}
	};
}
