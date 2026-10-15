#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class ENEIHJJPNPI;
class FCOEMCEDLNL;
namespace RPG::GameCore { class AIGlobalVarsConfig; }
namespace RPG::GameCore { class AIVariable; }
namespace System { class String; }

#define RPG_GAMECORE_AIGLOBALVARSCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D339FC0)
#define RPG_GAMECORE_AIGLOBALVARSCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D339E50)

namespace RPG::GameCore
{
	class AIGlobalVarsConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::AIVariable*>* GlobalVars; // 0x10
		::ENEIHJJPNPI* BasicAITagList; // 0x18
		::System::String* DefaultComplexAI; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIGLOBALVARSCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AIGlobalVarsConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AIGlobalVarsConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIGLOBALVARSCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
