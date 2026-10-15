#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SwitchRefBase; }

#define RPG_GAMECORE_SWITCHREFBASE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB46760)
#define RPG_GAMECORE_SWITCHREFBASE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB46700)
#define RPG_GAMECORE_SWITCHREFBASE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB45600)

namespace RPG::GameCore
{
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
