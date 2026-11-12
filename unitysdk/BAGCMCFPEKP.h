#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class BAGCMCFPEKP;
class FCOEMCEDLNL;
namespace RPG::GameCore { class RollerCoasterCameraAnchorConfig; }
namespace RPG::GameCore { class RollerCoasterSectionConfig; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define BAGCMCFPEKP_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE9B550)
#define BAGCMCFPEKP_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DE9B580)
#define BAGCMCFPEKP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DE9B500)

inline static constexpr unsigned int BAGCMCFPEKP_TypeDefinitionIndex = 22401;

	class BAGCMCFPEKP : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::System::String*>* OLDLJFFBPNF; // 0x18
		::RPG::GameCore::RollerCoasterCameraAnchorConfig* MFHHCDBPFOI; // 0x20
		::RPG::GameCore::TargetEvaluator* MPMCGKIDAFF; // 0x28
		::RPG::GameCore::RollerCoasterCameraAnchorConfig* HFLOKHHPBNI; // 0x30
		::RPG::GameCore::TargetEvaluator* FDJMDCEAJAI; // 0x38
		::RPG::GameCore::TargetEvaluator* EGBKPHCCJBL; // 0x40
		::Il2CppArray<::RPG::GameCore::RollerCoasterSectionConfig*>* ONKAMPHIMKH; // 0x48
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x50
		::System::Boolean LNPKDGDOIEJ; // 0x58
		::System::Boolean OGFGJAFDMIM; // 0x59
		::System::Boolean GAEPIHDDAOF; // 0x5A
		::System::Boolean PFLMLDENHFK; // 0x5B
		::System::Single JNEEIHGEOBN; // 0x5C
		::System::Single GNDIMAEIGLD; // 0x60
		::System::Single BCIDHOFAHLH; // 0x64
		::System::UInt32 EKPHDHMJKPO; // 0x68
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAGCMCFPEKP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::BAGCMCFPEKP* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::BAGCMCFPEKP*))((::PBYTE)hIl2Cpp + BAGCMCFPEKP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::BAGCMCFPEKP* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::BAGCMCFPEKP*))((::PBYTE)hIl2Cpp + BAGCMCFPEKP_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
