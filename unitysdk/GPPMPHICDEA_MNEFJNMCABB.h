#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define GPPMPHICDEA_MNEFJNMCABB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x771200)
#define GPPMPHICDEA_MNEFJNMCABB__CTOR_OFFSET UNITYSDK_OFFSET(0x7711F0)

inline static constexpr unsigned int GPPMPHICDEA_MNEFJNMCABB_TypeDefinitionIndex = 42664;

struct alignas(8) GPPMPHICDEA_MNEFJNMCABB
{
	::System::Text::StringBuilder* KEEJFMJEHBK; // 0x10

	::System::Void _ctor(::System::Text::StringBuilder* CKGGMNHMKDB, ::System::String* JBBFCGAMDHI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Text::StringBuilder*, ::System::String*))((::PBYTE)hIl2Cpp + GPPMPHICDEA_MNEFJNMCABB__CTOR_OFFSET))(this, CKGGMNHMKDB, JBBFCGAMDHI);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPPMPHICDEA_MNEFJNMCABB_DISPOSE_OFFSET))(this);
	}
};
