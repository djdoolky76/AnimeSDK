#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class QteCatchGhostRewindListener; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_QTECATCHGHOSTREWINDLISTENER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D931480)
#define RPG_GAMECORE_QTECATCHGHOSTREWINDLISTENER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D931490)
#define RPG_GAMECORE_QTECATCHGHOSTREWINDLISTENER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D931450)

namespace RPG::GameCore
{
	inline static constexpr unsigned int QteCatchGhostRewindListener_TypeDefinitionIndex = 22047;

	class QteCatchGhostRewindListener : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnStartDrag; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnEnterInterval; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnReleaseInInterval; // 0x28
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnPressInInterval; // 0x30
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnFailInInterval; // 0x38
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnFailOutInterval; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_QTECATCHGHOSTREWINDLISTENER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::QteCatchGhostRewindListener* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::QteCatchGhostRewindListener*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_QTECATCHGHOSTREWINDLISTENER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::QteCatchGhostRewindListener* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::QteCatchGhostRewindListener*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_QTECATCHGHOSTREWINDLISTENER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
