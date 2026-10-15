#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SerialBellsConfig; }
namespace RPG::GameCore { class SerialBellsNoteConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_SERIALBELLSCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA8CDA0)
#define RPG_GAMECORE_SERIALBELLSCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA8CBD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SerialBellsConfig_TypeDefinitionIndex = 16381;

	class SerialBellsConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::SerialBellsNoteConfig*>* NoteMap; // 0x10
		::System::String* EndCue; // 0x18
		::System::String* EffectFrontPath; // 0x20
		::System::String* EffectSidePath; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERIALBELLSCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SerialBellsConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SerialBellsConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERIALBELLSCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
