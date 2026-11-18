#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

#define ONGJEGLDHBP_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0xFB9B470)
#define ONGJEGLDHBP_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0xFB9B3E0)
#define ONGJEGLDHBP_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0xFB9B350)
#define ONGJEGLDHBP__CCTOR_OFFSET UNITYSDK_OFFSET(0xFB9B2D0)
#define ONGJEGLDHBP__CTOR_OFFSET UNITYSDK_OFFSET(0xFB9B340)

inline static constexpr unsigned int ONGJEGLDHBP_TypeDefinitionIndex = 85151;

class ONGJEGLDHBP : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0xED; // 0x0
	::System::Double GEDDPMNHIAF; // 0x20
	::System::UInt32 ECPKFEBFELJ; // 0x28

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ONGJEGLDHBP__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONGJEGLDHBP__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONGJEGLDHBP_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONGJEGLDHBP_FIGPAOKNJLN_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::System::UInt32 JOPKCFMMFBL, ::System::Double PFJKAJBBBOP)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Double))((::PBYTE)hIl2Cpp + ONGJEGLDHBP_CNHBDOMKKDE_OFFSET))(this, JOPKCFMMFBL, PFJKAJBBBOP);
	}
};
