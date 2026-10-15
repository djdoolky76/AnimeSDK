#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class EntityRuntimeReplaceArtPrefab; }
namespace RPG::GameCore { class EntityRuntimeReplaceArtPrefabConfig; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ENTITYRUNTIMEREPLACEARTPREFABCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D679C00)
#define RPG_GAMECORE_ENTITYRUNTIMEREPLACEARTPREFABCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D679B20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EntityRuntimeReplaceArtPrefabConfig_TypeDefinitionIndex = 19104;

	class EntityRuntimeReplaceArtPrefabConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::GameCore::EntityRuntimeReplaceArtPrefab*>* Config; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYRUNTIMEREPLACEARTPREFABCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::EntityRuntimeReplaceArtPrefabConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::EntityRuntimeReplaceArtPrefabConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYRUNTIMEREPLACEARTPREFABCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
