#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class StoryStateConfig; }
namespace System { class String; }

#define RPG_GAMECORE_STORYSTATECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB29190)
#define RPG_GAMECORE_STORYSTATECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB28FF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StoryStateConfig_TypeDefinitionIndex = 16384;

	class StoryStateConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* StoryStateGroup; // 0x10
		::System::String* StoryState_C; // 0x18
		::System::String* StoryState_A; // 0x20
		::System::String* StoryState_D; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STORYSTATECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::StoryStateConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StoryStateConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STORYSTATECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
