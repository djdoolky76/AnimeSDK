#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CharacterReplaceMaterialVariant; }
namespace RPG::GameCore { class CharacterReplaceMaterialVariantConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_CHARACTERREPLACEMATERIALVARIANTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D54B1C0)
#define RPG_GAMECORE_CHARACTERREPLACEMATERIALVARIANTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D54B0E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterReplaceMaterialVariantConfig_TypeDefinitionIndex = 17444;

	class CharacterReplaceMaterialVariantConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::CharacterReplaceMaterialVariant*>* PropertyConfig; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERREPLACEMATERIALVARIANTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CharacterReplaceMaterialVariantConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CharacterReplaceMaterialVariantConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERREPLACEMATERIALVARIANTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
