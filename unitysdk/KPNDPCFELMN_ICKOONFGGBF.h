#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define KPNDPCFELMN_ICKOONFGGBF_CTOR_OFFSET UNITYSDK_OFFSET(0x1912F490)

inline static constexpr unsigned int KPNDPCFELMN_ICKOONFGGBF_TypeDefinitionIndex = 71442;

	class KPNDPCFELMN_ICKOONFGGBF : public ::System::Object
	{
	public:
		::System::String* CEFDDDAIMMD; // 0x10
		::System::Text::StringBuilder* CAJPAGKBBML; // 0x18
		::System::String* APMACEACOJP; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPNDPCFELMN_ICKOONFGGBF_CTOR_OFFSET))(this);
		}

	};
