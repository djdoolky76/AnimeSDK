#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicLoadBlockDataList; }
namespace RPG::GameCore { class OptionalLoadBlocksConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_OPTIONALLOADBLOCKSCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8B7E90)
#define RPG_GAMECORE_OPTIONALLOADBLOCKSCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8B7D90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int OptionalLoadBlocksConfig_TypeDefinitionIndex = 19162;

	class OptionalLoadBlocksConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::DynamicLoadBlockDataList*>* BlocksConfig; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPTIONALLOADBLOCKSCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::OptionalLoadBlocksConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::OptionalLoadBlocksConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPTIONALLOADBLOCKSCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
