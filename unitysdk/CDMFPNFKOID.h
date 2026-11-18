#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/LDLevelEndNode_LevelEndPerformType.h"

#define CDMFPNFKOID_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x199FAF50)
#define CDMFPNFKOID_DIKCPFKPJBJ_OFFSET UNITYSDK_OFFSET(0x199FB040)
#define CDMFPNFKOID_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x199FAFB0)
#define CDMFPNFKOID_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x199FAE90)
#define CDMFPNFKOID_HEKCKEABNIH_OFFSET UNITYSDK_OFFSET(0x199FAF40)
#define CDMFPNFKOID_LFHLJNIFPAN_OFFSET UNITYSDK_OFFSET(0x199FAF20)
#define CDMFPNFKOID_OPJELHCPGBP_OFFSET UNITYSDK_OFFSET(0x199FAF30)
#define CDMFPNFKOID__CCTOR_OFFSET UNITYSDK_OFFSET(0x199FAE10)
#define CDMFPNFKOID__CTOR_OFFSET UNITYSDK_OFFSET(0x199FAE80)

inline static constexpr unsigned int CDMFPNFKOID_TypeDefinitionIndex = 69430;

class CDMFPNFKOID : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x141; // 0x0
	::System::Boolean _EILINLDAIPI_k__BackingField; // 0x20
	::System::Byte _padding0[0x3];
	::MoleMole::FlowCanvas::Nodes::LDLevelEndNode_LevelEndPerformType _COCBPLEJAOC_k__BackingField; // 0x24

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CDMFPNFKOID__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDMFPNFKOID__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDMFPNFKOID_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void LFHLJNIFPAN(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CDMFPNFKOID_LFHLJNIFPAN_OFFSET))(this, EGEGIMGMJHN);
	}

	::MoleMole::FlowCanvas::Nodes::LDLevelEndNode_LevelEndPerformType OPJELHCPGBP()
	{
		return ((::MoleMole::FlowCanvas::Nodes::LDLevelEndNode_LevelEndPerformType(*)(::PVOID))((::PBYTE)hIl2Cpp + CDMFPNFKOID_OPJELHCPGBP_OFFSET))(this);
	}

	::System::Boolean HEKCKEABNIH()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CDMFPNFKOID_HEKCKEABNIH_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::System::UInt32 JHGKGEGGGFF, ::System::Boolean DOFCLPCLHOJ, ::MoleMole::FlowCanvas::Nodes::LDLevelEndNode_LevelEndPerformType PMNOPEKCLJG)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::MoleMole::FlowCanvas::Nodes::LDLevelEndNode_LevelEndPerformType))((::PBYTE)hIl2Cpp + CDMFPNFKOID_CNHBDOMKKDE_OFFSET))(this, JHGKGEGGGFF, DOFCLPCLHOJ, PMNOPEKCLJG);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDMFPNFKOID_FIGPAOKNJLN_OFFSET))(this);
	}

	::System::Void DIKCPFKPJBJ(::MoleMole::FlowCanvas::Nodes::LDLevelEndNode_LevelEndPerformType EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::FlowCanvas::Nodes::LDLevelEndNode_LevelEndPerformType))((::PBYTE)hIl2Cpp + CDMFPNFKOID_DIKCPFKPJBJ_OFFSET))(this, EGEGIMGMJHN);
	}
};
