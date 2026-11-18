#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/LDLevelEndNode_LevelEndPerformType.h"

#define DFAAIPELNOH_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x149A1760)
#define DFAAIPELNOH_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x149A16D0)
#define DFAAIPELNOH_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x149A1640)
#define DFAAIPELNOH__CCTOR_OFFSET UNITYSDK_OFFSET(0x149A15B0)
#define DFAAIPELNOH__CTOR_OFFSET UNITYSDK_OFFSET(0x149A1620)

inline static constexpr unsigned int DFAAIPELNOH_TypeDefinitionIndex = 61805;

class DFAAIPELNOH : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x94; // 0x0
	::MoleMole::FlowCanvas::Nodes::LDLevelEndNode_LevelEndPerformType KCAFAKFMFLD; // 0x20
	::System::Boolean LBHPNKFODLM; // 0x24
	::System::Byte _padding0[0x3];
	::System::Int32 CCFMPCLLAIO; // 0x28

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DFAAIPELNOH__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFAAIPELNOH__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFAAIPELNOH_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFAAIPELNOH_FIGPAOKNJLN_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::System::Int32 OLPCINDPMBK, ::System::Boolean LBHPNKFODLM, ::MoleMole::FlowCanvas::Nodes::LDLevelEndNode_LevelEndPerformType EJLPKHKOFAF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::MoleMole::FlowCanvas::Nodes::LDLevelEndNode_LevelEndPerformType))((::PBYTE)hIl2Cpp + DFAAIPELNOH_CNHBDOMKKDE_OFFSET))(this, OLPCINDPMBK, LBHPNKFODLM, EJLPKHKOFAF);
	}
};
