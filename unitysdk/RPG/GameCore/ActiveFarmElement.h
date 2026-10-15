#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActiveFarmElement; }

#define RPG_GAMECORE_ACTIVEFARMELEMENT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D31C320)
#define RPG_GAMECORE_ACTIVEFARMELEMENT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D31C330)
#define RPG_GAMECORE_ACTIVEFARMELEMENT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D31C260)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActiveFarmElement_TypeDefinitionIndex = 22086;

	class ActiveFarmElement : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVEFARMELEMENT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ActiveFarmElement* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ActiveFarmElement*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVEFARMELEMENT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ActiveFarmElement* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ActiveFarmElement*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVEFARMELEMENT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
