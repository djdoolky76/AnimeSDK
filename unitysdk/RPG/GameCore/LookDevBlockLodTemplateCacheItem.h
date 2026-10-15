#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LookDevBlockLodTemplateCacheItem; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_LOOKDEVBLOCKLODTEMPLATECACHEITEM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7F4600)
#define RPG_GAMECORE_LOOKDEVBLOCKLODTEMPLATECACHEITEM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7F4510)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LookDevBlockLodTemplateCacheItem_TypeDefinitionIndex = 19208;

	class LookDevBlockLodTemplateCacheItem : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* LodMap; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOKDEVBLOCKLODTEMPLATECACHEITEM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LookDevBlockLodTemplateCacheItem* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LookDevBlockLodTemplateCacheItem*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOKDEVBLOCKLODTEMPLATECACHEITEM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
