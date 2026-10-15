#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CharacterEyeCtrlConfig; }
namespace RPG::GameCore { class CharacterEyeCtrlMappingConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_CHARACTEREYECTRLMAPPINGCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D571050)
#define RPG_GAMECORE_CHARACTEREYECTRLMAPPINGCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D570F70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterEyeCtrlMappingConfig_TypeDefinitionIndex = 17449;

	class CharacterEyeCtrlMappingConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::CharacterEyeCtrlConfig*>* SetConfig; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEREYECTRLMAPPINGCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CharacterEyeCtrlMappingConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CharacterEyeCtrlMappingConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEREYECTRLMAPPINGCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
