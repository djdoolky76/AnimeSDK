#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueAdvRoomCandyCrashConfig; }
namespace RPG::GameCore { class RogueAdvRoomCandyCrashGroup; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ROGUEADVROOMCANDYCRASHCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9A2F30)
#define RPG_GAMECORE_ROGUEADVROOMCANDYCRASHCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9A2E30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueAdvRoomCandyCrashConfig_TypeDefinitionIndex = 17890;

	class RogueAdvRoomCandyCrashConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::RogueAdvRoomCandyCrashGroup*>* GroupConfigs; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEADVROOMCANDYCRASHCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueAdvRoomCandyCrashConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueAdvRoomCandyCrashConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEADVROOMCANDYCRASHCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
