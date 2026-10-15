#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class JukeBoxMusicTimesConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_JUKEBOXMUSICTIMESCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7A2FF0)
#define RPG_GAMECORE_JUKEBOXMUSICTIMESCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7A2F10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int JukeBoxMusicTimesConfig_TypeDefinitionIndex = 16401;

	class JukeBoxMusicTimesConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* MusicTimes; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_JUKEBOXMUSICTIMESCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::JukeBoxMusicTimesConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::JukeBoxMusicTimesConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_JUKEBOXMUSICTIMESCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
