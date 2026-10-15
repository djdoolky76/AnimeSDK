#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PuManMoveNotifyConfig; }
namespace System { class String; }

#define RPG_GAMECORE_PUMANMOVENOTIFYCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D92F7C0)
#define RPG_GAMECORE_PUMANMOVENOTIFYCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D92F640)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PuManMoveNotifyConfig_TypeDefinitionIndex = 16964;

	class PuManMoveNotifyConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* StartPoint; // 0x10
		::System::String* MidPoint; // 0x18
		::System::Single MoveBeat; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PUMANMOVENOTIFYCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PuManMoveNotifyConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PuManMoveNotifyConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PUMANMOVENOTIFYCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
