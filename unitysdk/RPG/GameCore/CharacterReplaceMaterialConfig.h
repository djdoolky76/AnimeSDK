#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CharacterReplaceMaterialConfig; }
namespace RPG::GameCore { class CharacterReplaceMaterialOriginProperty; }
namespace RPG::GameCore { class CharacterReplaceMaterialRenderList; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_CHARACTERREPLACEMATERIALCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D578090)
#define RPG_GAMECORE_CHARACTERREPLACEMATERIALCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D577F40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterReplaceMaterialConfig_TypeDefinitionIndex = 17442;

	class CharacterReplaceMaterialConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::CharacterReplaceMaterialRenderList*>* ReplaceConfig; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::CharacterReplaceMaterialOriginProperty*>* OriginProperty; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERREPLACEMATERIALCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CharacterReplaceMaterialConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CharacterReplaceMaterialConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERREPLACEMATERIALCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
