#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CharacterEyeBloomConfig; }
namespace RPG::GameCore { class CharacterEyeBloomMappingConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_CHARACTEREYEBLOOMMAPPINGCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D570640)
#define RPG_GAMECORE_CHARACTEREYEBLOOMMAPPINGCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D570560)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterEyeBloomMappingConfig_TypeDefinitionIndex = 17453;

	class CharacterEyeBloomMappingConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::CharacterEyeBloomConfig*>* SetConfig; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEREYEBLOOMMAPPINGCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CharacterEyeBloomMappingConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CharacterEyeBloomMappingConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEREYEBLOOMMAPPINGCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
