#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"
#include "unitysdk/RPG/MColor.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimRIStateEmissionAction; }

#define RPG_GAMECORE_FIVEDIMRISTATEEMISSIONACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6A8E40)
#define RPG_GAMECORE_FIVEDIMRISTATEEMISSIONACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6A8E50)
#define RPG_GAMECORE_FIVEDIMRISTATEEMISSIONACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6A8E10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimRIStateEmissionAction_TypeDefinitionIndex = 18695;

	class FiveDimRIStateEmissionAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Boolean Enable; // 0x10
		::System::Byte _padding0[0x3];
		::RPG::MColor EmissionColor; // 0x14
		::System::Single IntensityFrom; // 0x24
		::System::Single IntensityTo; // 0x28
		::System::Single Interval; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMRISTATEEMISSIONACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimRIStateEmissionAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimRIStateEmissionAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMRISTATEEMISSIONACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimRIStateEmissionAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimRIStateEmissionAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMRISTATEEMISSIONACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
