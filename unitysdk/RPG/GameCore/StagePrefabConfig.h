#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class StagePrefabConfig; }
namespace RPG::GameCore { class StageTypePrefabs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_STAGEPREFABCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB13100)
#define RPG_GAMECORE_STAGEPREFABCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB13000)

namespace RPG::GameCore
{
	class StagePrefabConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::StageTypePrefabs*>* StagePrefabMap; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEPREFABCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::StagePrefabConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StagePrefabConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEPREFABCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
