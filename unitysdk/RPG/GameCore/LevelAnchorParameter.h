#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LevelAnchorParameter; }

#define RPG_GAMECORE_LEVELANCHORPARAMETER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7772F0)
#define RPG_GAMECORE_LEVELANCHORPARAMETER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7779C0)
#define RPG_GAMECORE_LEVELANCHORPARAMETER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7777F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelAnchorParameter_TypeDefinitionIndex = 17243;

	class LevelAnchorParameter : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELANCHORPARAMETER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelAnchorParameter* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelAnchorParameter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELANCHORPARAMETER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelAnchorParameter* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelAnchorParameter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELANCHORPARAMETER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
