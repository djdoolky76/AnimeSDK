#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PAEHHFFGHEA.h"

namespace System { class String; }

#define EHAPPCADLAH_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x11A727D0)
#define EHAPPCADLAH_ENAGJFPCHOD_OFFSET UNITYSDK_OFFSET(0x11A72050)
#define EHAPPCADLAH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x11A72110)
#define EHAPPCADLAH__CTOR_OFFSET UNITYSDK_OFFSET(0x11A72740)

inline static constexpr unsigned int EHAPPCADLAH_TypeDefinitionIndex = 38565;

class EHAPPCADLAH : public ::PAEHHFFGHEA
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHAPPCADLAH__CTOR_OFFSET))(this);
	}

	::System::Void ENAGJFPCHOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHAPPCADLAH_ENAGJFPCHOD_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EHAPPCADLAH_TOSTRING_OFFSET))(this);
	}

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EHAPPCADLAH_DPIHOJBBGLA_OFFSET))(this);
	}
};
