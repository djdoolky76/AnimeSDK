#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GlobalMarbleAIConfig; }
namespace RPG::GameCore { class MarbleLaunchAIConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_GLOBALMARBLEAICONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6F1190)
#define RPG_GAMECORE_GLOBALMARBLEAICONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6F1040)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GlobalMarbleAIConfig_TypeDefinitionIndex = 16914;

	class GlobalMarbleAIConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single PositiveScoreRate; // 0x10
		::System::Byte _padding0[0x4];
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::MarbleLaunchAIConfig*>* LaunchAIDict; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GLOBALMARBLEAICONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GlobalMarbleAIConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GlobalMarbleAIConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GLOBALMARBLEAICONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
