#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PlayerParameterConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FateParameterConfigBase; }

#define RPG_GAMECORE_FATEPARAMETERCONFIGBASE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8A85B0)
#define RPG_GAMECORE_FATEPARAMETERCONFIGBASE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E8A9A40)
#define RPG_GAMECORE_FATEPARAMETERCONFIGBASE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E8A9330)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateParameterConfigBase_TypeDefinitionIndex = 16789;

	class FateParameterConfigBase : public ::RPG::GameCore::PlayerParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMETERCONFIGBASE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateParameterConfigBase* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateParameterConfigBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMETERCONFIGBASE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateParameterConfigBase* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateParameterConfigBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMETERCONFIGBASE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
