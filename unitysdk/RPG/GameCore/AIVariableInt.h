#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AIVariable.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AIVariable; }
namespace RPG::GameCore { class AIVariableInt; }
namespace System { class Object; }

#define RPG_GAMECORE_AIVARIABLEINT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D33C390)
#define RPG_GAMECORE_AIVARIABLEINT_DLDBLNNPHKE_OFFSET UNITYSDK_OFFSET(0x1D33E260)
#define RPG_GAMECORE_AIVARIABLEINT_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1D33DF30)
#define RPG_GAMECORE_AIVARIABLEINT_EQUALS_2_OFFSET UNITYSDK_OFFSET(0x1D33DEA0)
#define RPG_GAMECORE_AIVARIABLEINT_EQUALS_OFFSET UNITYSDK_OFFSET(0x1D33DDF0)
#define RPG_GAMECORE_AIVARIABLEINT_FEIIDFFOICL_OFFSET UNITYSDK_OFFSET(0x1D33E110)
#define RPG_GAMECORE_AIVARIABLEINT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1D33E060)
#define RPG_GAMECORE_AIVARIABLEINT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D33C3A0)
#define RPG_GAMECORE_AIVARIABLEINT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D33DDC0)

namespace RPG::GameCore
{
	class AIVariableInt : public ::RPG::GameCore::AIVariable
	{
	public:
		::System::Int32 Value; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIVARIABLEINT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AIVariableInt* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AIVariableInt*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIVARIABLEINT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AIVariableInt* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AIVariableInt*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIVARIABLEINT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIVARIABLEINT_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::RPG::GameCore::AIVariable* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AIVariable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIVARIABLEINT_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Boolean Equals_2(::RPG::GameCore::AIVariableInt* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AIVariableInt*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIVARIABLEINT_EQUALS_2_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIVARIABLEINT_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Boolean FEIIDFFOICL(::RPG::GameCore::AIVariableInt* a1, ::RPG::GameCore::AIVariableInt* a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::AIVariableInt*, ::RPG::GameCore::AIVariableInt*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIVARIABLEINT_FEIIDFFOICL_OFFSET))(a1, a2);
		}

		static ::System::Boolean DLDBLNNPHKE(::RPG::GameCore::AIVariableInt* a1, ::RPG::GameCore::AIVariableInt* a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::AIVariableInt*, ::RPG::GameCore::AIVariableInt*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIVARIABLEINT_DLDBLNNPHKE_OFFSET))(a1, a2);
		}

	};
}
