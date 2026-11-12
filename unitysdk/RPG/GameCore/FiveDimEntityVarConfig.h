#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameEntityVarConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimEntityVarConfig; }

#define RPG_GAMECORE_FIVEDIMENTITYVARCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8C85F0)
#define RPG_GAMECORE_FIVEDIMENTITYVARCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E8C8600)
#define RPG_GAMECORE_FIVEDIMENTITYVARCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E8C85C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimEntityVarConfig_TypeDefinitionIndex = 18792;

	class FiveDimEntityVarConfig : public ::RPG::GameCore::LittleGameEntityVarConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMENTITYVARCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimEntityVarConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimEntityVarConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMENTITYVARCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimEntityVarConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimEntityVarConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMENTITYVARCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
