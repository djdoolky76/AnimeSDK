#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FDFGHNMHLFP.h"
#include "unitysdk/PLKGJLENECO.h"

class KGBFLHNJHHN;

#define DHPIDECJFIG_GPODGBEGJHK_OFFSET UNITYSDK_OFFSET(0x1950BAE0)
#define DHPIDECJFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x194EFCD0)

inline static constexpr unsigned int DHPIDECJFIG_TypeDefinitionIndex = 10220;

class DHPIDECJFIG : public ::FDFGHNMHLFP
{
public:
	::System::Int32 JCMGELCNJPP; // 0x108
	::System::Int32 NEKKHCDJNDN; // 0x10C
	::System::Boolean GHKELIOGACL; // 0x110

	::System::Void _ctor(::PLKGJLENECO LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::PLKGJLENECO, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + DHPIDECJFIG__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean GPODGBEGJHK()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DHPIDECJFIG_GPODGBEGJHK_OFFSET))(this);
	}
};
