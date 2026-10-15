#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByRandom; }

#define RPG_GAMECORE_BYRANDOM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D532E90)
#define RPG_GAMECORE_BYRANDOM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D532EA0)
#define RPG_GAMECORE_BYRANDOM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D532E60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByRandom_TypeDefinitionIndex = 21048;

	class ByRandom : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYRANDOM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByRandom* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByRandom*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYRANDOM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByRandom* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByRandom*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYRANDOM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
