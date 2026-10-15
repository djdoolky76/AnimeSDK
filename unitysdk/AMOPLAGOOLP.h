#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterMotionFlag.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"
class AMOPLAGOOLP;
class FCOEMCEDLNL;

#define AMOPLAGOOLP_CTOR_OFFSET UNITYSDK_OFFSET(0x1CCE1510)
#define AMOPLAGOOLP_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CCE1550)
#define AMOPLAGOOLP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CCE14B0)

inline static constexpr unsigned int AMOPLAGOOLP_TypeDefinitionIndex = 20104;

	class AMOPLAGOOLP : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::System::Single NCGJNLDBCNJ; // 0x18
		::System::Single CALJANHOCJI; // 0x1C
		::System::Single AAFGMLMPLBI; // 0x20
		::System::UInt32 OLAELANDNCE; // 0x24
		::RPG::GameCore::CharacterMotionFlag FPHBEHJJBIA; // 0x28
		::System::Boolean NFGFKCOECEC; // 0x2C
		::System::Boolean LPEKIEOGFKE; // 0x2D
		::System::Boolean KCIGOHEMFII; // 0x2E
		::System::Boolean EGGFFAGKDGP; // 0x2F
		::System::Single NGCEGPHFGCL; // 0x30
		::System::Single JOAGCKLELBO; // 0x34
		::System::Int32 MBNLJEMMPNC; // 0x38
		::System::Single NIMHEFPFMFB; // 0x3C
		::System::Single HFPPEDKNPIK; // 0x40
		::System::UInt32 DKDCFFAEEJJ; // 0x44
		::System::Single EIHACODFCAF; // 0x48
		::System::Boolean GCANOIMDIKI; // 0x4C
		::System::Boolean NPCBIMFJKJN; // 0x4D
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMOPLAGOOLP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::AMOPLAGOOLP* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::AMOPLAGOOLP*))((::PBYTE)hIl2Cpp + AMOPLAGOOLP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::AMOPLAGOOLP* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::AMOPLAGOOLP*))((::PBYTE)hIl2Cpp + AMOPLAGOOLP_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
