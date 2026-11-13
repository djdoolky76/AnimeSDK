#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LittleGameConstConfig; }

#define RPG_GAMECORE_LITTLEGAMECONSTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1F260490)
#define RPG_GAMECORE_LITTLEGAMECONSTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1F2604A0)
#define RPG_GAMECORE_LITTLEGAMECONSTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1F25FF20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameConstConfig_TypeDefinitionIndex = 19004;

	class LittleGameConstConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMECONSTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameConstConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameConstConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMECONSTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameConstConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameConstConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMECONSTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
