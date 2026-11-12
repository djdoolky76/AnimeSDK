#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CharacterCustomPreloadConfigBase; }

#define RPG_GAMECORE_CHARACTERCUSTOMPRELOADCONFIGBASE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7810A0)
#define RPG_GAMECORE_CHARACTERCUSTOMPRELOADCONFIGBASE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E7810B0)
#define RPG_GAMECORE_CHARACTERCUSTOMPRELOADCONFIGBASE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E780F30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterCustomPreloadConfigBase_TypeDefinitionIndex = 16508;

	class CharacterCustomPreloadConfigBase : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERCUSTOMPRELOADCONFIGBASE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CharacterCustomPreloadConfigBase* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CharacterCustomPreloadConfigBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERCUSTOMPRELOADCONFIGBASE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CharacterCustomPreloadConfigBase* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CharacterCustomPreloadConfigBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERCUSTOMPRELOADCONFIGBASE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
