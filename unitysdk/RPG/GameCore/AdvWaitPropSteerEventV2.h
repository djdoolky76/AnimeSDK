#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvWaitPropSteerEventV2; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_ADVWAITPROPSTEEREVENTV2_CTOR_OFFSET UNITYSDK_OFFSET(0x1D386E20)
#define RPG_GAMECORE_ADVWAITPROPSTEEREVENTV2_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D386E30)
#define RPG_GAMECORE_ADVWAITPROPSTEEREVENTV2_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D386DF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvWaitPropSteerEventV2_TypeDefinitionIndex = 22053;

	class AdvWaitPropSteerEventV2 : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnFollowStart; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnFollowStop; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVWAITPROPSTEEREVENTV2_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvWaitPropSteerEventV2* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvWaitPropSteerEventV2*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVWAITPROPSTEEREVENTV2_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvWaitPropSteerEventV2* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvWaitPropSteerEventV2*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVWAITPROPSTEEREVENTV2_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
