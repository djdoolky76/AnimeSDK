#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/B5C2F18B73337FC8_E65975501D3ABB7A.h"

namespace System { class Object; }

#define B5C2F18B73337FC8_ED769ED30E4E0CC7_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CF4AC0)
#define B5C2F18B73337FC8_ED769ED30E4E0CC7__CTOR_OFFSET UNITYSDK_OFFSET(0x2A95CF0)

inline static constexpr unsigned int B5C2F18B73337FC8_ED769ED30E4E0CC7_TypeDefinitionIndex = 19112;

class B5C2F18B73337FC8_ED769ED30E4E0CC7 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + B5C2F18B73337FC8_ED769ED30E4E0CC7__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Void Invoke(::B5C2F18B73337FC8_E65975501D3ABB7A& B29880F033C1F232)
	{
		return ((::System::Void(*)(::PVOID, ::B5C2F18B73337FC8_E65975501D3ABB7A&))((::PBYTE)hIl2Cpp + B5C2F18B73337FC8_ED769ED30E4E0CC7_INVOKE_OFFSET))(this, B29880F033C1F232);
	}
};
