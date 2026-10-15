#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateParameterConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FateParamHouguCountConfig; }

#define RPG_GAMECORE_FATEPARAMHOUGUCOUNTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D69C370)
#define RPG_GAMECORE_FATEPARAMHOUGUCOUNTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D69C380)
#define RPG_GAMECORE_FATEPARAMHOUGUCOUNTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D69C2E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateParamHouguCountConfig_TypeDefinitionIndex = 16640;

	class FateParamHouguCountConfig : public ::RPG::GameCore::FateParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMHOUGUCOUNTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateParamHouguCountConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateParamHouguCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMHOUGUCOUNTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateParamHouguCountConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateParamHouguCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMHOUGUCOUNTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
