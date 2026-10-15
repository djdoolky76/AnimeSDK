#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LittleGameEntityMoveBakedConfig; }

#define RPG_GAMECORE_LITTLEGAMEENTITYMOVEBAKEDCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7B3D30)
#define RPG_GAMECORE_LITTLEGAMEENTITYMOVEBAKEDCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7B3D40)
#define RPG_GAMECORE_LITTLEGAMEENTITYMOVEBAKEDCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7B3B90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameEntityMoveBakedConfig_TypeDefinitionIndex = 18888;

	class LittleGameEntityMoveBakedConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEENTITYMOVEBAKEDCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameEntityMoveBakedConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameEntityMoveBakedConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEENTITYMOVEBAKEDCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameEntityMoveBakedConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameEntityMoveBakedConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEENTITYMOVEBAKEDCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
