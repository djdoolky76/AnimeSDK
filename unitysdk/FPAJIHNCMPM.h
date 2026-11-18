#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

#define FPAJIHNCMPM_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x116C4930)
#define FPAJIHNCMPM_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x116C48A0)
#define FPAJIHNCMPM__CCTOR_OFFSET UNITYSDK_OFFSET(0x116C4820)
#define FPAJIHNCMPM__CTOR_OFFSET UNITYSDK_OFFSET(0x116C4890)

inline static constexpr unsigned int FPAJIHNCMPM_TypeDefinitionIndex = 70030;

class FPAJIHNCMPM : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0xB9; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FPAJIHNCMPM__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPAJIHNCMPM__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPAJIHNCMPM_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPAJIHNCMPM_FIGPAOKNJLN_OFFSET))(this);
	}
};
