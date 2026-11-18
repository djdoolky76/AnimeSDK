#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/LDLevelEndNode_LevelEndPerformType.h"

#define CCLBHPFHKCL_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x16940300)
#define CCLBHPFHKCL_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x16940360)
#define CCLBHPFHKCL_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x16940270)
#define CCLBHPFHKCL__CCTOR_OFFSET UNITYSDK_OFFSET(0x169401E0)
#define CCLBHPFHKCL__CTOR_OFFSET UNITYSDK_OFFSET(0x16940250)

inline static constexpr unsigned int CCLBHPFHKCL_TypeDefinitionIndex = 58025;

class CCLBHPFHKCL : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x13F; // 0x0
	::MoleMole::FlowCanvas::Nodes::LDLevelEndNode_LevelEndPerformType HNCANBIGBPH; // 0x20
	::System::Boolean DOFCLPCLHOJ; // 0x24

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CCLBHPFHKCL__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCLBHPFHKCL__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCLBHPFHKCL_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::System::Boolean DOFCLPCLHOJ, ::MoleMole::FlowCanvas::Nodes::LDLevelEndNode_LevelEndPerformType DALJDJDLHEA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::MoleMole::FlowCanvas::Nodes::LDLevelEndNode_LevelEndPerformType))((::PBYTE)hIl2Cpp + CCLBHPFHKCL_CNHBDOMKKDE_OFFSET))(this, DOFCLPCLHOJ, DALJDJDLHEA);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCLBHPFHKCL_FIGPAOKNJLN_OFFSET))(this);
	}
};
