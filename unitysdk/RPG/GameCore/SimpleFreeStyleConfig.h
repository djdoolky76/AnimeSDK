#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SimpleFreeStyleConfig; }
namespace System { class String; }

#define RPG_GAMECORE_SIMPLEFREESTYLECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAE9AC0)
#define RPG_GAMECORE_SIMPLEFREESTYLECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAE98F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SimpleFreeStyleConfig_TypeDefinitionIndex = 21623;

	class SimpleFreeStyleConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* CharacterUniqueName; // 0x10
		::System::Boolean LocalPlayer; // 0x18
		::System::Byte _padding0[0x7];
		::System::String* StoryAvatarID; // 0x20
		::System::UInt32 StoryMotionID; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SIMPLEFREESTYLECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SimpleFreeStyleConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SimpleFreeStyleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SIMPLEFREESTYLECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
