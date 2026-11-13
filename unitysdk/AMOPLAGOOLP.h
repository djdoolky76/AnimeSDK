#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterMotionFlag.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"
class AMOPLAGOOLP;
class FCOEMCEDLNL;

#define AMOPLAGOOLP_CTOR_OFFSET UNITYSDK_OFFSET(0x1ECAEE30)
#define AMOPLAGOOLP_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1ECAEE70)
#define AMOPLAGOOLP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1ECAEDD0)

inline static constexpr unsigned int AMOPLAGOOLP_TypeDefinitionIndex = 20438;

	class AMOPLAGOOLP : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::System::Single EIHACODFCAF; // 0x18
		::System::Single JOAGCKLELBO; // 0x1C
		::System::Single CALJANHOCJI; // 0x20
		::System::UInt32 DKDCFFAEEJJ; // 0x24
		::System::UInt32 OLAELANDNCE; // 0x28
		::System::Single NGCEGPHFGCL; // 0x2C
		::System::Single NCGJNLDBCNJ; // 0x30
		::System::Single AAFGMLMPLBI; // 0x34
		::System::Boolean KCIGOHEMFII; // 0x38
		::System::Boolean GCANOIMDIKI; // 0x39
		::System::Byte _padding0[0x2];
		::System::Single NIMHEFPFMFB; // 0x3C
		::System::Single HFPPEDKNPIK; // 0x40
		::System::Int32 MBNLJEMMPNC; // 0x44
		::System::Boolean EGGFFAGKDGP; // 0x48
		::System::Boolean NPCBIMFJKJN; // 0x49
		::System::Boolean LPEKIEOGFKE; // 0x4A
		::System::Boolean NFGFKCOECEC; // 0x4B
		::RPG::GameCore::CharacterMotionFlag FPHBEHJJBIA; // 0x4C
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
