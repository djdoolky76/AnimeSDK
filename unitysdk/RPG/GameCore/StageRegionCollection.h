#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/StageRegionVisualState.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class StageRegionCollection; }
namespace RPG::GameCore { class StageRegionConfig; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_STAGEREGIONCOLLECTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB13480)
#define RPG_GAMECORE_STAGEREGIONCOLLECTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB13330)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StageRegionCollection_TypeDefinitionIndex = 19196;

	class StageRegionCollection : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::GameCore::StageRegionVisualState>* NearBlockDistMappingVisualState; // 0x10
		::Il2CppArray<::RPG::GameCore::StageRegionConfig*>* RegionList; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEREGIONCOLLECTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::StageRegionCollection* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StageRegionCollection*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEREGIONCOLLECTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
