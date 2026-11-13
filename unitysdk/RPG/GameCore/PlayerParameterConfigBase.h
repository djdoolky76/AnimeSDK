#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MiParameterConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PlayerParameterConfigBase; }

#define RPG_GAMECORE_PLAYERPARAMETERCONFIGBASE_CTOR_OFFSET UNITYSDK_OFFSET(0x1EF732E0)
#define RPG_GAMECORE_PLAYERPARAMETERCONFIGBASE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1EF73410)
#define RPG_GAMECORE_PLAYERPARAMETERCONFIGBASE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EF733B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayerParameterConfigBase_TypeDefinitionIndex = 19899;

	class PlayerParameterConfigBase : public ::RPG::GameCore::MiParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERPARAMETERCONFIGBASE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlayerParameterConfigBase* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlayerParameterConfigBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERPARAMETERCONFIGBASE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlayerParameterConfigBase* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlayerParameterConfigBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERPARAMETERCONFIGBASE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
