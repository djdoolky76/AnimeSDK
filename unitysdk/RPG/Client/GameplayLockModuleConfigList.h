#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GamePlayLockTarget.h"
#include "unitysdk/RPG/Client/LockFlagType.h"
#include "unitysdk/RPG/Client/LockSource.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::Client { class GameplayLockModuleConfigList; }
namespace RPG::Client { class LockTargetConfigList; }
namespace RPG::Client { class LockTargetParam; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_GAMEPLAYLOCKMODULECONFIGLIST_CTOR_OFFSET UNITYSDK_OFFSET(0x1D31FC20)
#define RPG_CLIENT_GAMEPLAYLOCKMODULECONFIGLIST_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D31FA60)

namespace RPG::Client
{
	class GameplayLockModuleConfigList : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::Client::LockSource, ::RPG::Client::LockFlagType>* LockSourceFlagConfig; // 0x10
		::System::Collections::Generic::Dictionary_2<::RPG::Client::LockSource, ::RPG::Client::LockTargetConfigList*>* LockSourceTargetMapping; // 0x18
		::System::Collections::Generic::Dictionary_2<::RPG::Client::GamePlayLockTarget, ::RPG::Client::LockTargetParam*>* LockTargetParamList; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEPLAYLOCKMODULECONFIGLIST_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::Client::GameplayLockModuleConfigList* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Client::GameplayLockModuleConfigList*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEPLAYLOCKMODULECONFIGLIST_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
