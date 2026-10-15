#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PrefabCacheConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_PREFABCACHECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D93F470)
#define RPG_GAMECORE_PREFABCACHECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D93F390)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PrefabCacheConfig_TypeDefinitionIndex = 24413;

	class PrefabCacheConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* cache_config; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PREFABCACHECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PrefabCacheConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PrefabCacheConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PREFABCACHECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
