#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

namespace System { class String; }

#define AHLPICLOFDI_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x17DD8420)
#define AHLPICLOFDI_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x17DD8390)
#define AHLPICLOFDI__CCTOR_OFFSET UNITYSDK_OFFSET(0x17DD8310)
#define AHLPICLOFDI__CTOR_OFFSET UNITYSDK_OFFSET(0x17DD8380)

inline static constexpr unsigned int AHLPICLOFDI_TypeDefinitionIndex = 44057;

class AHLPICLOFDI : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x57; // 0x0
	::System::String* KIHGNGKBADE; // 0x20

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AHLPICLOFDI__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHLPICLOFDI__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHLPICLOFDI_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHLPICLOFDI_FIGPAOKNJLN_OFFSET))(this);
	}
};
