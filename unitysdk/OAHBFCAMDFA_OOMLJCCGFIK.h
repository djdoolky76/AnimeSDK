#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HLCKDBBPGDA;
class NOAHNKGLKKG;

#define OAHBFCAMDFA_OOMLJCCGFIK_MDFNALCLHPB_OFFSET UNITYSDK_OFFSET(0x13A427B0)
#define OAHBFCAMDFA_OOMLJCCGFIK__CTOR_OFFSET UNITYSDK_OFFSET(0x13A427A0)

inline static constexpr unsigned int OAHBFCAMDFA_OOMLJCCGFIK_TypeDefinitionIndex = 81970;

class OAHBFCAMDFA_OOMLJCCGFIK : public ::System::Object
{
public:
	::HLCKDBBPGDA* LLNFLIDCAEH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAHBFCAMDFA_OOMLJCCGFIK__CTOR_OFFSET))(this);
	}

	::System::Boolean MDFNALCLHPB(::NOAHNKGLKKG* GNHOCNHLCCA)
	{
		return ((::System::Boolean(*)(::PVOID, ::NOAHNKGLKKG*))((::PBYTE)hIl2Cpp + OAHBFCAMDFA_OOMLJCCGFIK_MDFNALCLHPB_OFFSET))(this, GNHOCNHLCCA);
	}
};
