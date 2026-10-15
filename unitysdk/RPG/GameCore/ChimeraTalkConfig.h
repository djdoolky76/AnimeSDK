#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimeraTalk; }
namespace RPG::GameCore { class ChimeraTalkConfig; }

#define RPG_GAMECORE_CHIMERATALKCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5AF080)
#define RPG_GAMECORE_CHIMERATALKCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5AEF90)

namespace RPG::GameCore
{
	class ChimeraTalkConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::ChimeraTalk*>* TalkConfigs; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERATALKCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraTalkConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraTalkConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERATALKCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
