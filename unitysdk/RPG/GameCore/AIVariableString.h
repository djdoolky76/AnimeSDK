#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AIVariable.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AIVariable; }
namespace RPG::GameCore { class AIVariableString; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_AIVARIABLESTRING_CTOR_OFFSET UNITYSDK_OFFSET(0x1D33C520)
#define RPG_GAMECORE_AIVARIABLESTRING_DLDBLNNPHKE_OFFSET UNITYSDK_OFFSET(0x1D33E840)
#define RPG_GAMECORE_AIVARIABLESTRING_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1D33E4E0)
#define RPG_GAMECORE_AIVARIABLESTRING_EQUALS_2_OFFSET UNITYSDK_OFFSET(0x1D33E430)
#define RPG_GAMECORE_AIVARIABLESTRING_EQUALS_OFFSET UNITYSDK_OFFSET(0x1D33E3E0)
#define RPG_GAMECORE_AIVARIABLESTRING_FEIIDFFOICL_OFFSET UNITYSDK_OFFSET(0x1D33E6F0)
#define RPG_GAMECORE_AIVARIABLESTRING_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1D33E5A0)
#define RPG_GAMECORE_AIVARIABLESTRING_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D33C530)
#define RPG_GAMECORE_AIVARIABLESTRING_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D33E3B0)

namespace RPG::GameCore
{
	class AIVariableString : public ::RPG::GameCore::AIVariable
	{
	public:
		::System::String* Value; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIVARIABLESTRING_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AIVariableString* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AIVariableString*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIVARIABLESTRING_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AIVariableString* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AIVariableString*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIVARIABLESTRING_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIVARIABLESTRING_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::RPG::GameCore::AIVariable* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AIVariable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIVARIABLESTRING_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Boolean Equals_2(::RPG::GameCore::AIVariableString* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AIVariableString*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIVARIABLESTRING_EQUALS_2_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIVARIABLESTRING_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Boolean FEIIDFFOICL(::RPG::GameCore::AIVariableString* a1, ::RPG::GameCore::AIVariableString* a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::AIVariableString*, ::RPG::GameCore::AIVariableString*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIVARIABLESTRING_FEIIDFFOICL_OFFSET))(a1, a2);
		}

		static ::System::Boolean DLDBLNNPHKE(::RPG::GameCore::AIVariableString* a1, ::RPG::GameCore::AIVariableString* a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::AIVariableString*, ::RPG::GameCore::AIVariableString*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIVARIABLESTRING_DLDBLNNPHKE_OFFSET))(a1, a2);
		}

	};
}
