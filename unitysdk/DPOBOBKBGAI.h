#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PPLENNIOBDI.h"

#define DPOBOBKBGAI_GEFNCCFJNIM_OFFSET UNITYSDK_OFFSET(0x169860C0)
#define DPOBOBKBGAI_HJCOEIDNFOB_OFFSET UNITYSDK_OFFSET(0x16985F70)
#define DPOBOBKBGAI_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x16985EC0)
#define DPOBOBKBGAI__CTOR_OFFSET UNITYSDK_OFFSET(0x16986060)

inline static constexpr unsigned int DPOBOBKBGAI_TypeDefinitionIndex = 80280;

class DPOBOBKBGAI : public ::PPLENNIOBDI
{
public:
	::System::Int32 CFKNBLMJKAP; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPOBOBKBGAI__CTOR_OFFSET))(this);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPOBOBKBGAI_NPOLNFDBOOD_OFFSET))(this);
	}

	::System::Void HJCOEIDNFOB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPOBOBKBGAI_HJCOEIDNFOB_OFFSET))(this);
	}

	::System::Void GEFNCCFJNIM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPOBOBKBGAI_GEFNCCFJNIM_OFFSET))(this);
	}
};
