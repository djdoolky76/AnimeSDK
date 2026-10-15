#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CharacterHeadAddLookAtCurve; }
namespace RPG::GameCore { class LookAtAdditiveCurveConstraint; }
namespace System { class String; }

#define RPG_GAMECORE_CHARACTERHEADADDLOOKATCURVE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D543D60)
#define RPG_GAMECORE_CHARACTERHEADADDLOOKATCURVE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D543DD0)
#define RPG_GAMECORE_CHARACTERHEADADDLOOKATCURVE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D543CD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterHeadAddLookAtCurve_TypeDefinitionIndex = 21914;

	class CharacterHeadAddLookAtCurve : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* CharacterUniqueName; // 0x18
		::System::String* CurveName; // 0x20
		::RPG::GameCore::LookAtAdditiveCurveConstraint* Constraint; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERHEADADDLOOKATCURVE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CharacterHeadAddLookAtCurve* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CharacterHeadAddLookAtCurve*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERHEADADDLOOKATCURVE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CharacterHeadAddLookAtCurve* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CharacterHeadAddLookAtCurve*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERHEADADDLOOKATCURVE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
