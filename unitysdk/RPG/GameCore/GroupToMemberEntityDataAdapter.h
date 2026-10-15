#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GroupToMemberEntityDataAdapter; }
namespace RPG::GameCore { class GroupToMemberEntityDataConfig; }

#define RPG_GAMECORE_GROUPTOMEMBERENTITYDATAADAPTER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D74CBA0)
#define RPG_GAMECORE_GROUPTOMEMBERENTITYDATAADAPTER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D74CBB0)
#define RPG_GAMECORE_GROUPTOMEMBERENTITYDATAADAPTER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D74CB70)

namespace RPG::GameCore
{
	class GroupToMemberEntityDataAdapter : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::GroupToMemberEntityDataConfig*>* AdaptDataList; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GROUPTOMEMBERENTITYDATAADAPTER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GroupToMemberEntityDataAdapter* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GroupToMemberEntityDataAdapter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GROUPTOMEMBERENTITYDATAADAPTER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GroupToMemberEntityDataAdapter* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GroupToMemberEntityDataAdapter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GROUPTOMEMBERENTITYDATAADAPTER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
