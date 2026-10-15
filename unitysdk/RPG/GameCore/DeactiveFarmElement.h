#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DeactiveFarmElement; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_DEACTIVEFARMELEMENT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5C77F0)
#define RPG_GAMECORE_DEACTIVEFARMELEMENT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5C7800)
#define RPG_GAMECORE_DEACTIVEFARMELEMENT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5C77C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DeactiveFarmElement_TypeDefinitionIndex = 22087;

	class DeactiveFarmElement : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEACTIVEFARMELEMENT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DeactiveFarmElement* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DeactiveFarmElement*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEACTIVEFARMELEMENT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::DeactiveFarmElement* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DeactiveFarmElement*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEACTIVEFARMELEMENT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
