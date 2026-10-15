#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BubbleNotifyConfig; }
namespace System { class String; }

#define RPG_GAMECORE_BUBBLENOTIFYCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D452360)
#define RPG_GAMECORE_BUBBLENOTIFYCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4521A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BubbleNotifyConfig_TypeDefinitionIndex = 16958;

	class BubbleNotifyConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single Duration; // 0x10
		::System::UInt32 BubbleId; // 0x14
		::System::String* PeppyText; // 0x18
		::System::Single Offset; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BUBBLENOTIFYCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::BubbleNotifyConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BubbleNotifyConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BUBBLENOTIFYCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
