#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LittleGameEntityMoveConfig; }

#define RPG_GAMECORE_LITTLEGAMEENTITYMOVECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7E1AA0)
#define RPG_GAMECORE_LITTLEGAMEENTITYMOVECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7E1AB0)
#define RPG_GAMECORE_LITTLEGAMEENTITYMOVECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7E1820)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameEntityMoveConfig_TypeDefinitionIndex = 18887;

	class LittleGameEntityMoveConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEENTITYMOVECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameEntityMoveConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameEntityMoveConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEENTITYMOVECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameEntityMoveConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameEntityMoveConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEENTITYMOVECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
