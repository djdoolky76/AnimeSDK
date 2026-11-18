#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class LDGHPCBNKMP_GFFFJPGLBMP;

#define LDGHPCBNKMP_FPPGKFBIDCL_KIHJFAAEPEN_OFFSET UNITYSDK_OFFSET(0x126CD510)
#define LDGHPCBNKMP_FPPGKFBIDCL__CTOR_OFFSET UNITYSDK_OFFSET(0x126CD500)

inline static constexpr unsigned int LDGHPCBNKMP_FPPGKFBIDCL_TypeDefinitionIndex = 72765;

class LDGHPCBNKMP_FPPGKFBIDCL : public ::System::Object
{
public:
	::System::UInt32 KELINMHCDCB; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDGHPCBNKMP_FPPGKFBIDCL__CTOR_OFFSET))(this);
	}

	::System::Boolean KIHJFAAEPEN(::LDGHPCBNKMP_GFFFJPGLBMP* GNMPBKDGIDC)
	{
		return ((::System::Boolean(*)(::PVOID, ::LDGHPCBNKMP_GFFFJPGLBMP*))((::PBYTE)hIl2Cpp + LDGHPCBNKMP_FPPGKFBIDCL_KIHJFAAEPEN_OFFSET))(this, GNMPBKDGIDC);
	}
};
