#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PAFHPDMDDJD.h"

#define GELMAFLOPKJ_FLHPKLIICIL_OFFSET UNITYSDK_OFFSET(0x10FD1C20)
#define GELMAFLOPKJ_HKOGIEJNJOA_OFFSET UNITYSDK_OFFSET(0x10FD1790)
#define GELMAFLOPKJ_JDKLBOEEPPH_OFFSET UNITYSDK_OFFSET(0x10FD1C70)
#define GELMAFLOPKJ_PGPDEDIBOLL_OFFSET UNITYSDK_OFFSET(0x10FD1B50)
#define GELMAFLOPKJ__CTOR_OFFSET UNITYSDK_OFFSET(0x10FD1B40)

inline static constexpr unsigned int GELMAFLOPKJ_TypeDefinitionIndex = 92161;

class GELMAFLOPKJ : public ::PAFHPDMDDJD
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GELMAFLOPKJ__CTOR_OFFSET))(this);
	}

	::System::Void HKOGIEJNJOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GELMAFLOPKJ_HKOGIEJNJOA_OFFSET))(this);
	}

	::System::Void PGPDEDIBOLL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GELMAFLOPKJ_PGPDEDIBOLL_OFFSET))(this);
	}

	::System::Void FLHPKLIICIL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GELMAFLOPKJ_FLHPKLIICIL_OFFSET))(this);
	}

	::System::Void JDKLBOEEPPH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GELMAFLOPKJ_JDKLBOEEPPH_OFFSET))(this);
	}
};
