#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CAIOJPGDPCE.h"
#include "unitysdk/ENGKPGFGGLM.h"

#define HOBLINGFDLP_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x140C6E00)
#define HOBLINGFDLP_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x140C6E70)
#define HOBLINGFDLP_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x140C6D70)
#define HOBLINGFDLP__CCTOR_OFFSET UNITYSDK_OFFSET(0x140C6CF0)
#define HOBLINGFDLP__CTOR_OFFSET UNITYSDK_OFFSET(0x140C6D60)

inline static constexpr unsigned int HOBLINGFDLP_TypeDefinitionIndex = 90940;

class HOBLINGFDLP : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x137; // 0x0
	::System::Single KAMAIIILMIJ; // 0x20
	::CAIOJPGDPCE GMOGHFDGEMM; // 0x24
	::System::Boolean OLKOLGOHGJH; // 0x28

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HOBLINGFDLP__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOBLINGFDLP__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOBLINGFDLP_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::CAIOJPGDPCE OBNIAHNMHPF, ::System::Single FCAKHDABGNK, ::System::Boolean KABLPNDEEPP)
	{
		return ((::System::Void(*)(::PVOID, ::CAIOJPGDPCE, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + HOBLINGFDLP_CNHBDOMKKDE_OFFSET))(this, OBNIAHNMHPF, FCAKHDABGNK, KABLPNDEEPP);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOBLINGFDLP_FIGPAOKNJLN_OFFSET))(this);
	}
};
