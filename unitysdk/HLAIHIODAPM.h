#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class JKKJPALGFBK;

#define HLAIHIODAPM_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x12E64A20)
#define HLAIHIODAPM__CTOR_OFFSET UNITYSDK_OFFSET(0x12E64950)

inline static constexpr unsigned int HLAIHIODAPM_TypeDefinitionIndex = 48467;

class HLAIHIODAPM : public ::System::Object
{
public:
	::JKKJPALGFBK* KDHHNLAPEBG; // 0x10
	::System::Int32 _HHNNKGPFJNO_k__BackingField; // 0x18

	::System::Void _ctor(::System::Int32 AEIAFDJOACK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HLAIHIODAPM__CTOR_OFFSET))(this, AEIAFDJOACK);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HLAIHIODAPM_PPIFNHNGCGO_OFFSET))(this);
	}
};
