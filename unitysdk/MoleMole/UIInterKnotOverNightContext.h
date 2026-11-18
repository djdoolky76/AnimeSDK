#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class PHECEIPKGFA;
namespace MoleMole { class UIBaseController; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIINTERKNOTOVERNIGHTCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x17C4C5D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIInterKnotOverNightContext_TypeDefinitionIndex = 86258;

	class UIInterKnotOverNightContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action_1<::System::String*>* OnClose; // 0x28
		::PHECEIPKGFA* FirstPost; // 0x30
		::MoleMole::UIBaseController* FromController; // 0x38
		::System::Single FadeOut; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTOVERNIGHTCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
