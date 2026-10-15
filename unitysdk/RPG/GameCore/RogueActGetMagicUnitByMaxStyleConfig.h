#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueActGetMagicUnitByMaxStyleConfig; }

#define RPG_GAMECORE_ROGUEACTGETMAGICUNITBYMAXSTYLECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D99DD90)
#define RPG_GAMECORE_ROGUEACTGETMAGICUNITBYMAXSTYLECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D99DDA0)
#define RPG_GAMECORE_ROGUEACTGETMAGICUNITBYMAXSTYLECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D99DD50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActGetMagicUnitByMaxStyleConfig_TypeDefinitionIndex = 19694;

	class RogueActGetMagicUnitByMaxStyleConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETMAGICUNITBYMAXSTYLECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActGetMagicUnitByMaxStyleConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActGetMagicUnitByMaxStyleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETMAGICUNITBYMAXSTYLECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActGetMagicUnitByMaxStyleConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActGetMagicUnitByMaxStyleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETMAGICUNITBYMAXSTYLECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
