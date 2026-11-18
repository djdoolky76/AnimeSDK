#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LHAAKCODJJI.h"
#include "unitysdk/System/Object.h"

#define PFBIICNDBJA_DEJKPODOPGA_OFFSET UNITYSDK_OFFSET(0x11B63F40)
#define PFBIICNDBJA_POGNKLOCJBL_OFFSET UNITYSDK_OFFSET(0x11B63F90)
#define PFBIICNDBJA__CTOR_OFFSET UNITYSDK_OFFSET(0x11B63F30)

inline static constexpr unsigned int PFBIICNDBJA_TypeDefinitionIndex = 49078;

class PFBIICNDBJA : public ::System::Object
{
public:
	::System::Int32 NEBBMADJIMI; // 0x10
	::LHAAKCODJJI LONINBMBKGB; // 0x14
	::LHAAKCODJJI BNPHBPDPAIJ; // 0x18

	::System::Void _ctor(::System::Int32 HFGNNDMENPE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PFBIICNDBJA__CTOR_OFFSET))(this, HFGNNDMENPE);
	}

	::System::Void DEJKPODOPGA(::LHAAKCODJJI OBNIAHNMHPF)
	{
		return ((::System::Void(*)(::PVOID, ::LHAAKCODJJI))((::PBYTE)hIl2Cpp + PFBIICNDBJA_DEJKPODOPGA_OFFSET))(this, OBNIAHNMHPF);
	}

	::System::Void POGNKLOCJBL(::LHAAKCODJJI OBNIAHNMHPF)
	{
		return ((::System::Void(*)(::PVOID, ::LHAAKCODJJI))((::PBYTE)hIl2Cpp + PFBIICNDBJA_POGNKLOCJBL_OFFSET))(this, OBNIAHNMHPF);
	}
};
