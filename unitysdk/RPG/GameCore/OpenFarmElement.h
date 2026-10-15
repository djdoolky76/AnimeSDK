#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class OpenFarmElement; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_OPENFARMELEMENT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8E1130)
#define RPG_GAMECORE_OPENFARMELEMENT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D8E1140)
#define RPG_GAMECORE_OPENFARMELEMENT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8E1100)

namespace RPG::GameCore
{
	inline static constexpr unsigned int OpenFarmElement_TypeDefinitionIndex = 22085;

	class OpenFarmElement : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnCancel; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnUIEnter; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPENFARMELEMENT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::OpenFarmElement* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::OpenFarmElement*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPENFARMELEMENT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::OpenFarmElement* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::OpenFarmElement*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPENFARMELEMENT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
