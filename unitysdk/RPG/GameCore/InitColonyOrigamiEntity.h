#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class InitColonyOrigamiEntity; }

#define RPG_GAMECORE_INITCOLONYORIGAMIENTITY_CTOR_OFFSET UNITYSDK_OFFSET(0x1D787BB0)
#define RPG_GAMECORE_INITCOLONYORIGAMIENTITY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D787BC0)
#define RPG_GAMECORE_INITCOLONYORIGAMIENTITY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D787B80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int InitColonyOrigamiEntity_TypeDefinitionIndex = 21173;

	class InitColonyOrigamiEntity : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* ColonyID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INITCOLONYORIGAMIENTITY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::InitColonyOrigamiEntity* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::InitColonyOrigamiEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INITCOLONYORIGAMIENTITY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::InitColonyOrigamiEntity* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::InitColonyOrigamiEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INITCOLONYORIGAMIENTITY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
