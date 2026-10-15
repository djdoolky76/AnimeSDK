#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LevelNPCStillConfig; }
namespace RPG::GameCore { class LevelNPCStillConfigData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_LEVELNPCSTILLCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D78B130)
#define RPG_GAMECORE_LEVELNPCSTILLCONFIG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D78B050)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelNPCStillConfig_TypeDefinitionIndex = 17268;

	class LevelNPCStillConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::LevelNPCStillConfigData*>* StillConfig; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNPCSTILLCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelNPCStillConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelNPCStillConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNPCSTILLCONFIG_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
