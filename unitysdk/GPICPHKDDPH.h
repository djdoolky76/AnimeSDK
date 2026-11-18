#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/EDoorOperation.h"

#define GPICPHKDDPH_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x17ADD340)
#define GPICPHKDDPH_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x17ADD390)
#define GPICPHKDDPH_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x17ADD2B0)
#define GPICPHKDDPH__CCTOR_OFFSET UNITYSDK_OFFSET(0x17ADD230)
#define GPICPHKDDPH__CTOR_OFFSET UNITYSDK_OFFSET(0x17ADD2A0)

inline static constexpr unsigned int GPICPHKDDPH_TypeDefinitionIndex = 48131;

class GPICPHKDDPH : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x13D; // 0x0
	::MoleMole::FlowCanvas::Nodes::EDoorOperation FEOKCKPMGAJ; // 0x20

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GPICPHKDDPH__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPICPHKDDPH__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPICPHKDDPH_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::MoleMole::FlowCanvas::Nodes::EDoorOperation CBBCJFPGBOK)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::FlowCanvas::Nodes::EDoorOperation))((::PBYTE)hIl2Cpp + GPICPHKDDPH_CNHBDOMKKDE_OFFSET))(this, CBBCJFPGBOK);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPICPHKDDPH_FIGPAOKNJLN_OFFSET))(this);
	}
};
