#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GamePlayLockTarget.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::Client { class LockTargetConfigList; }

#define RPG_CLIENT_LOCKTARGETCONFIGLIST_CTOR_OFFSET UNITYSDK_OFFSET(0x1D2FADF0)
#define RPG_CLIENT_LOCKTARGETCONFIGLIST_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D2FAD30)

namespace RPG::Client
{
	inline static constexpr unsigned int LockTargetConfigList_TypeDefinitionIndex = 10183;

	class LockTargetConfigList : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::Client::GamePlayLockTarget>* LockTargetList; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCKTARGETCONFIGLIST_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::Client::LockTargetConfigList* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Client::LockTargetConfigList*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCKTARGETCONFIGLIST_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
