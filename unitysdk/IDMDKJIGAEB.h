#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

namespace System { class String; }

#define IDMDKJIGAEB_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x1A399B50)
#define IDMDKJIGAEB_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x1A399AC0)
#define IDMDKJIGAEB_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x1A399A30)
#define IDMDKJIGAEB__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A3999B0)
#define IDMDKJIGAEB__CTOR_OFFSET UNITYSDK_OFFSET(0x1A399A20)

inline static constexpr unsigned int IDMDKJIGAEB_TypeDefinitionIndex = 67803;

class IDMDKJIGAEB : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x31; // 0x0
	::System::String* NNLGFAEODCK; // 0x20
	::System::String* EFDOKKEMLPK; // 0x28
	::System::UInt32 FFJGPKNMBBP; // 0x30
	::System::Int32 CBNBLGOJHCB; // 0x34
	::System::Boolean PCADOELJGFI; // 0x38
	::System::Boolean FFLPGIJDJBM; // 0x39
	::System::Boolean HPINBCPMHJE; // 0x3A
	::System::Boolean HBECJAPHONI; // 0x3B

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IDMDKJIGAEB__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDMDKJIGAEB__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDMDKJIGAEB_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDMDKJIGAEB_FIGPAOKNJLN_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::System::UInt32 JHGKGEGGGFF, ::System::UInt32 FFJGPKNMBBP, ::System::Boolean HPINBCPMHJE, ::System::Int32 CBNBLGOJHCB, ::System::Boolean PCADOELJGFI, ::System::Boolean HBECJAPHONI, ::System::String* EFDOKKEMLPK, ::System::String* NNLGFAEODCK, ::System::Boolean FFLPGIJDJBM)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Boolean, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + IDMDKJIGAEB_CNHBDOMKKDE_OFFSET))(this, JHGKGEGGGFF, FFJGPKNMBBP, HPINBCPMHJE, CBNBLGOJHCB, PCADOELJGFI, HBECJAPHONI, EFDOKKEMLPK, NNLGFAEODCK, FFLPGIJDJBM);
	}
};
