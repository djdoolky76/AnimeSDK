#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class BBLBOEGCHOK;
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetEvaluator; }

#define BBLBOEGCHOK_CTOR_OFFSET UNITYSDK_OFFSET(0x1CCC8D90)
#define BBLBOEGCHOK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CCC8DD0)
#define BBLBOEGCHOK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CCC8D30)

inline static constexpr unsigned int BBLBOEGCHOK_TypeDefinitionIndex = 24158;

	class BBLBOEGCHOK : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x18
		::RPG::GameCore::TargetEvaluator* GAKEPLNFPGP; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBLBOEGCHOK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::BBLBOEGCHOK* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::BBLBOEGCHOK*))((::PBYTE)hIl2Cpp + BBLBOEGCHOK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::BBLBOEGCHOK* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::BBLBOEGCHOK*))((::PBYTE)hIl2Cpp + BBLBOEGCHOK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
