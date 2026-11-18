#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PPLENNIOBDI.h"

#define GBKEDJEEAJM_GEFNCCFJNIM_OFFSET UNITYSDK_OFFSET(0x11D99A20)
#define GBKEDJEEAJM_HJCOEIDNFOB_OFFSET UNITYSDK_OFFSET(0x11D998E0)
#define GBKEDJEEAJM_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x11D99830)
#define GBKEDJEEAJM__CTOR_OFFSET UNITYSDK_OFFSET(0x11D999C0)

inline static constexpr unsigned int GBKEDJEEAJM_TypeDefinitionIndex = 40384;

class GBKEDJEEAJM : public ::PPLENNIOBDI
{
public:
	::System::Int32 CFKNBLMJKAP; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBKEDJEEAJM__CTOR_OFFSET))(this);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBKEDJEEAJM_NPOLNFDBOOD_OFFSET))(this);
	}

	::System::Void HJCOEIDNFOB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBKEDJEEAJM_HJCOEIDNFOB_OFFSET))(this);
	}

	::System::Void GEFNCCFJNIM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBKEDJEEAJM_GEFNCCFJNIM_OFFSET))(this);
	}
};
