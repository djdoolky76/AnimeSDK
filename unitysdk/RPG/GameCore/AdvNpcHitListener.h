#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvNpcHitListener; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_ADVNPCHITLISTENER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D37A0E0)
#define RPG_GAMECORE_ADVNPCHITLISTENER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D37A110)
#define RPG_GAMECORE_ADVNPCHITLISTENER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D37A090)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvNpcHitListener_TypeDefinitionIndex = 22022;

	class AdvNpcHitListener : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnHit; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCHITLISTENER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvNpcHitListener* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvNpcHitListener*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCHITLISTENER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvNpcHitListener* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvNpcHitListener*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCHITLISTENER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
