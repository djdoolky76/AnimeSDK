#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarbleTaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MarbleSetDead; }

#define RPG_GAMECORE_MARBLESETDEAD_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB4EDA0)
#define RPG_GAMECORE_MARBLESETDEAD_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1EB4EDB0)
#define RPG_GAMECORE_MARBLESETDEAD_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EB4ED10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleSetDead_TypeDefinitionIndex = 17019;

	class MarbleSetDead : public ::RPG::GameCore::MarbleTaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLESETDEAD_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MarbleSetDead* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MarbleSetDead*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLESETDEAD_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::MarbleSetDead* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MarbleSetDead*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLESETDEAD_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
