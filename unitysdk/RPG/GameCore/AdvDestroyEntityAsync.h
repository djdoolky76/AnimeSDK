#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvDestroyEntityAsync; }
namespace RPG::GameCore { class GroupEntityDestroyConfig; }

#define RPG_GAMECORE_ADVDESTROYENTITYASYNC_CTOR_OFFSET UNITYSDK_OFFSET(0x1D39AEA0)
#define RPG_GAMECORE_ADVDESTROYENTITYASYNC_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D39AEB0)
#define RPG_GAMECORE_ADVDESTROYENTITYASYNC_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D39AE70)

namespace RPG::GameCore
{
	class AdvDestroyEntityAsync : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean NeedDisappear; // 0x18
		::System::Byte _padding0[0x7];
		::Il2CppArray<::System::UInt32>* InstanceIDList; // 0x20
		::Il2CppArray<::RPG::GameCore::GroupEntityDestroyConfig*>* AdvancedSpawnList; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVDESTROYENTITYASYNC_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvDestroyEntityAsync* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvDestroyEntityAsync*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVDESTROYENTITYASYNC_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvDestroyEntityAsync* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvDestroyEntityAsync*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVDESTROYENTITYASYNC_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
