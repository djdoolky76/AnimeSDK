#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define DDFFEFBKMNI_BIPDOPJEJDA_HIBPOHKHGKD_OFFSET UNITYSDK_OFFSET(0x15A2FA60)
#define DDFFEFBKMNI_BIPDOPJEJDA__CTOR_OFFSET UNITYSDK_OFFSET(0x15A2FA50)

inline static constexpr unsigned int DDFFEFBKMNI_BIPDOPJEJDA_TypeDefinitionIndex = 66048;

class DDFFEFBKMNI_BIPDOPJEJDA : public ::System::Object
{
public:
	::System::String* KBJILBFOOCC; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDFFEFBKMNI_BIPDOPJEJDA__CTOR_OFFSET))(this);
	}

	::System::Void HIBPOHKHGKD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDFFEFBKMNI_BIPDOPJEJDA_HIBPOHKHGKD_OFFSET))(this);
	}
};
