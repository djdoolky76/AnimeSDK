#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MemberToMemberEntityDataAdapter; }
namespace RPG::GameCore { class MemberToMemberEntityDataConfig; }

#define RPG_GAMECORE_MEMBERTOMEMBERENTITYDATAADAPTER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D871F00)
#define RPG_GAMECORE_MEMBERTOMEMBERENTITYDATAADAPTER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D871F10)
#define RPG_GAMECORE_MEMBERTOMEMBERENTITYDATAADAPTER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D871ED0)

namespace RPG::GameCore
{
	class MemberToMemberEntityDataAdapter : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::MemberToMemberEntityDataConfig*>* AdaptDataList; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MEMBERTOMEMBERENTITYDATAADAPTER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MemberToMemberEntityDataAdapter* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MemberToMemberEntityDataAdapter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MEMBERTOMEMBERENTITYDATAADAPTER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::MemberToMemberEntityDataAdapter* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MemberToMemberEntityDataAdapter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MEMBERTOMEMBERENTITYDATAADAPTER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
