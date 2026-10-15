#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CharacterAtlasFaceMappingConfig; }
namespace RPG::GameCore { class CharacterAtlasFaceSet; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_CHARACTERATLASFACEMAPPINGCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D53BB70)
#define RPG_GAMECORE_CHARACTERATLASFACEMAPPINGCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D53BA90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterAtlasFaceMappingConfig_TypeDefinitionIndex = 17457;

	class CharacterAtlasFaceMappingConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::CharacterAtlasFaceSet*>* SetConfig; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERATLASFACEMAPPINGCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CharacterAtlasFaceMappingConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CharacterAtlasFaceMappingConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERATLASFACEMAPPINGCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
