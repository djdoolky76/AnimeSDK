#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class PropInitFarmElement; }
namespace System { class String; }

#define RPG_GAMECORE_PROPINITFARMELEMENT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D920100)
#define RPG_GAMECORE_PROPINITFARMELEMENT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D920110)
#define RPG_GAMECORE_PROPINITFARMELEMENT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9200D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropInitFarmElement_TypeDefinitionIndex = 22090;

	class PropInitFarmElement : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* AssistantEffectPath; // 0x18
		::RPG::GameCore::DynamicString* DetectPlayerTriggerName; // 0x20
		::RPG::GameCore::DynamicString* ActiveFarmElementGroundBurstAnimTriggerName; // 0x28
		::RPG::GameCore::DynamicString* ActiveFarmElementMonsterAnimName; // 0x30
		::Il2CppArray<::System::String*>* FarmElementPropColliders; // 0x38
		::RPG::Client::TextID AssistantLeaveTextID; // 0x40
		::RPG::GameCore::DynamicString* MonsterDieAndDissolveEffectPath; // 0x50
		::RPG::GameCore::DynamicString* InactiveFarmElementRestartAnimTriggerName; // 0x58
		::Il2CppArray<::RPG::GameCore::DynamicString*>* InactiveFarmElementFadeOutEffectName; // 0x60
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPINITFARMELEMENT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropInitFarmElement* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropInitFarmElement*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPINITFARMELEMENT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropInitFarmElement* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropInitFarmElement*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPINITFARMELEMENT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
