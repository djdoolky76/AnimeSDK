#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace ZenFulcrum::EmbeddedBrowser { class Browser; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_A997CB459EDFB11E_FECB1E64FFBABEDB_OFFSET UNITYSDK_OFFSET(0x43FDC10)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_A997CB459EDFB11E__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int Browser_A997CB459EDFB11E_TypeDefinitionIndex = 19373;

	class Browser_A997CB459EDFB11E : public ::System::Object
	{
	public:
		::ZenFulcrum::EmbeddedBrowser::Browser* A544919C800E2923; // 0x10
		::System::String* BB38682D81BC7A95; // 0x18
		::System::String* B960AC235824C6C8; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_A997CB459EDFB11E__CTOR_OFFSET))(this);
		}

		::System::Void FECB1E64FFBABEDB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_A997CB459EDFB11E_FECB1E64FFBABEDB_OFFSET))(this);
		}
	};
}
