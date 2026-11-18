#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DIHOKPBADBI.h"

#define IGBKBEFEGJM_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0xF86CA90)
#define IGBKBEFEGJM_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0xF86CA00)
#define IGBKBEFEGJM__CCTOR_OFFSET UNITYSDK_OFFSET(0xF86C930)
#define IGBKBEFEGJM__CTOR_OFFSET UNITYSDK_OFFSET(0xF86C9A0)

inline static constexpr unsigned int IGBKBEFEGJM_TypeDefinitionIndex = 38940;

class IGBKBEFEGJM : public ::DIHOKPBADBI
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0xB4; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IGBKBEFEGJM__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGBKBEFEGJM__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGBKBEFEGJM_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGBKBEFEGJM_FIGPAOKNJLN_OFFSET))(this);
	}
};
