#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarbleTarget.h"
#include "unitysdk/RPG/GameCore/MarbleTaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MarbleSwallow; }

#define RPG_GAMECORE_MARBLESWALLOW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D849240)
#define RPG_GAMECORE_MARBLESWALLOW_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D849250)
#define RPG_GAMECORE_MARBLESWALLOW_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8491F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleSwallow_TypeDefinitionIndex = 16858;

	class MarbleSwallow : public ::RPG::GameCore::MarbleTaskConfig
	{
	public:
		::RPG::GameCore::MarbleTarget TargetType; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLESWALLOW_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MarbleSwallow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MarbleSwallow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLESWALLOW_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::MarbleSwallow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MarbleSwallow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLESWALLOW_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
