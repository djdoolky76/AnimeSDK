#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

namespace System { class String; }

#define INPKNPODEPG_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x13AB0F00)
#define INPKNPODEPG_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x13AB0E70)
#define INPKNPODEPG_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x13AB0DE0)
#define INPKNPODEPG__CCTOR_OFFSET UNITYSDK_OFFSET(0x13AB0D50)
#define INPKNPODEPG__CTOR_OFFSET UNITYSDK_OFFSET(0x13AB0DC0)

inline static constexpr unsigned int INPKNPODEPG_TypeDefinitionIndex = 43354;

class INPKNPODEPG : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0xE0; // 0x0
	::System::String* BKCLCIKOMEL; // 0x20
	::System::Boolean FJPPPMOFFNG; // 0x28

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + INPKNPODEPG__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INPKNPODEPG__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INPKNPODEPG_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INPKNPODEPG_FIGPAOKNJLN_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC(::System::String* MCOHLHMKLIP, ::System::Boolean JHCPLMPDLMM)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + INPKNPODEPG_BBOMJDBNHIC_OFFSET))(this, MCOHLHMKLIP, JHCPLMPDLMM);
	}
};
