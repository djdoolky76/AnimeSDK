#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SwitchRefBase; }

#define RPG_GAMECORE_SWITCHREFBASE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E688950)
#define RPG_GAMECORE_SWITCHREFBASE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E6888F0)
#define RPG_GAMECORE_SWITCHREFBASE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E6877F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwitchRefBase_TypeDefinitionIndex = 24224;

	class SwitchRefBase : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHREFBASE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SwitchRefBase* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SwitchRefBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHREFBASE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SwitchRefBase* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SwitchRefBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHREFBASE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
