#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterMotionFlag.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class IPPBBDNNICM;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define IPPBBDNNICM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E11A3A0)
#define IPPBBDNNICM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E11A3B0)
#define IPPBBDNNICM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E11A370)

inline static constexpr unsigned int IPPBBDNNICM_TypeDefinitionIndex = 20855;

	class IPPBBDNNICM : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x18
		::RPG::GameCore::DynamicFloat* FNJJEECAJAI; // 0x20
		::RPG::GameCore::CharacterMotionFlag GBAOAMCCBIG; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPPBBDNNICM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::IPPBBDNNICM* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::IPPBBDNNICM*))((::PBYTE)hIl2Cpp + IPPBBDNNICM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::IPPBBDNNICM* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::IPPBBDNNICM*))((::PBYTE)hIl2Cpp + IPPBBDNNICM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
