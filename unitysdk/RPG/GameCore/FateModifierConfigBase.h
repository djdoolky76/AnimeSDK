#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FateModifierConfigBase; }

#define RPG_GAMECORE_FATEMODIFIERCONFIGBASE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D66D5E0)
#define RPG_GAMECORE_FATEMODIFIERCONFIGBASE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D66D8F0)
#define RPG_GAMECORE_FATEMODIFIERCONFIGBASE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D66D890)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateModifierConfigBase_TypeDefinitionIndex = 19256;

	class FateModifierConfigBase : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERCONFIGBASE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateModifierConfigBase* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateModifierConfigBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERCONFIGBASE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateModifierConfigBase* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateModifierConfigBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERCONFIGBASE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
