#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"
#include "unitysdk/MALJNJOKGEG_DJPFDBNNHKF.h"

namespace System { class String; }

#define ICMOLHECINL_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x1A454F10)
#define ICMOLHECINL_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x1A454E80)
#define ICMOLHECINL__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A454E00)
#define ICMOLHECINL__CTOR_OFFSET UNITYSDK_OFFSET(0x1A454E70)

inline static constexpr unsigned int ICMOLHECINL_TypeDefinitionIndex = 45386;

class ICMOLHECINL : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0xFF; // 0x0
	::System::String* CFCPKIOIPBK; // 0x20
	::MALJNJOKGEG_DJPFDBNNHKF DFGACHPGDLN; // 0x28

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ICMOLHECINL__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICMOLHECINL__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICMOLHECINL_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICMOLHECINL_FIGPAOKNJLN_OFFSET))(this);
	}
};
