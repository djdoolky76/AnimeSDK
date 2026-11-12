#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterMotionFlag.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"
class AMOPLAGOOLP;
class FCOEMCEDLNL;

#define AMOPLAGOOLP_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE8B000)
#define AMOPLAGOOLP_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DE8B040)
#define AMOPLAGOOLP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DE8AFA0)

inline static constexpr unsigned int AMOPLAGOOLP_TypeDefinitionIndex = 20438;

	class AMOPLAGOOLP : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::System::Single HFPPEDKNPIK; // 0x18
		::System::Boolean EGGFFAGKDGP; // 0x1C
		::System::Boolean NPCBIMFJKJN; // 0x1D
		::System::Byte _padding0[0x2];
		::System::Single JOAGCKLELBO; // 0x20
		::System::UInt32 OLAELANDNCE; // 0x24
		::System::Single CALJANHOCJI; // 0x28
		::System::Single NIMHEFPFMFB; // 0x2C
		::System::Single AAFGMLMPLBI; // 0x30
		::RPG::GameCore::CharacterMotionFlag FPHBEHJJBIA; // 0x34
		::System::UInt32 DKDCFFAEEJJ; // 0x38
		::System::Single NCGJNLDBCNJ; // 0x3C
		::System::Single NGCEGPHFGCL; // 0x40
		::System::Boolean LPEKIEOGFKE; // 0x44
		::System::Boolean GCANOIMDIKI; // 0x45
		::System::Boolean NFGFKCOECEC; // 0x46
		::System::Boolean KCIGOHEMFII; // 0x47
		::System::Int32 MBNLJEMMPNC; // 0x48
		::System::Single EIHACODFCAF; // 0x4C
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
