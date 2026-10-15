#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MarbleNpcListener; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_MARBLENPCLISTENER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D842850)
#define RPG_GAMECORE_MARBLENPCLISTENER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D842860)
#define RPG_GAMECORE_MARBLENPCLISTENER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D842820)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleNpcListener_TypeDefinitionIndex = 22043;

	class MarbleNpcListener : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnSpecialKillA; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnNormalKillA; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnMassDamageA; // 0x28
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnSpecialKillB; // 0x30
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnNormalKillB; // 0x38
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnMassDamageB; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLENPCLISTENER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MarbleNpcListener* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MarbleNpcListener*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLENPCLISTENER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::MarbleNpcListener* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MarbleNpcListener*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLENPCLISTENER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
