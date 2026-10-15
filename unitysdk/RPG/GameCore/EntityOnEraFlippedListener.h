#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class EntityOnEraFlippedListener; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_ENTITYONERAFLIPPEDLISTENER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D64B950)
#define RPG_GAMECORE_ENTITYONERAFLIPPEDLISTENER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D64B960)
#define RPG_GAMECORE_ENTITYONERAFLIPPEDLISTENER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D64B910)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EntityOnEraFlippedListener_TypeDefinitionIndex = 22348;

	class EntityOnEraFlippedListener : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnSelfSwitchToState1; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnSelfSwitchToState2; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnSelfDitherIn; // 0x28
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnSelfDitherOut; // 0x30
		::System::Boolean ListenCallbackLoop; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYONERAFLIPPEDLISTENER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::EntityOnEraFlippedListener* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::EntityOnEraFlippedListener*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYONERAFLIPPEDLISTENER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::EntityOnEraFlippedListener* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::EntityOnEraFlippedListener*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYONERAFLIPPEDLISTENER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
