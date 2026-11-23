#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace ZenFulcrum::EmbeddedBrowser { class Browser; }

#define F1D4BEAD7ED87D3B_B55FABE030CC9877_OFFSET UNITYSDK_OFFSET(0x43F35E0)
#define F1D4BEAD7ED87D3B__CTOR_OFFSET UNITYSDK_OFFSET(0x1778980)

inline static constexpr unsigned int F1D4BEAD7ED87D3B_TypeDefinitionIndex = 19404;

class F1D4BEAD7ED87D3B : public ::System::Object
{
public:
	::ZenFulcrum::EmbeddedBrowser::Browser* F4DFD92A32442E67; // 0x10

	::System::Void B55FABE030CC9877()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F1D4BEAD7ED87D3B_B55FABE030CC9877_OFFSET))(this);
	}

	::System::Void _ctor(::ZenFulcrum::EmbeddedBrowser::Browser* F4DFD92A32442E67)
	{
		return ((::System::Void(*)(::PVOID, ::ZenFulcrum::EmbeddedBrowser::Browser*))((::PBYTE)hIl2Cpp + F1D4BEAD7ED87D3B__CTOR_OFFSET))(this, F4DFD92A32442E67);
	}
};
