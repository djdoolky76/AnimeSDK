#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/APPJJNBEEJK.h"
#include "unitysdk/System/Object.h"

class NHGLFPOBCEA;

#define HMENNFHKEOE_JGPMPHEOJHB_KLLBIAKILOA_OFFSET UNITYSDK_OFFSET(0x15BDED70)
#define HMENNFHKEOE_JGPMPHEOJHB__CTOR_OFFSET UNITYSDK_OFFSET(0x15BDED60)

inline static constexpr unsigned int HMENNFHKEOE_JGPMPHEOJHB_TypeDefinitionIndex = 53309;

class HMENNFHKEOE_JGPMPHEOJHB : public ::System::Object
{
public:
	::APPJJNBEEJK OBNIAHNMHPF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMENNFHKEOE_JGPMPHEOJHB__CTOR_OFFSET))(this);
	}

	::System::Boolean KLLBIAKILOA(::NHGLFPOBCEA* IMLLDOHDCNC)
	{
		return ((::System::Boolean(*)(::PVOID, ::NHGLFPOBCEA*))((::PBYTE)hIl2Cpp + HMENNFHKEOE_JGPMPHEOJHB_KLLBIAKILOA_OFFSET))(this, IMLLDOHDCNC);
	}
};
