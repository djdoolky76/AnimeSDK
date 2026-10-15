#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AIVariable.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AIVariable; }
namespace RPG::GameCore { class AIVariableString; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_AIVARIABLESTRING_CTOR_OFFSET UNITYSDK_OFFSET(0x1D30EA50)
#define RPG_GAMECORE_AIVARIABLESTRING_DLDBLNNPHKE_OFFSET UNITYSDK_OFFSET(0x1D310D70)
#define RPG_GAMECORE_AIVARIABLESTRING_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1D310A10)
#define RPG_GAMECORE_AIVARIABLESTRING_EQUALS_2_OFFSET UNITYSDK_OFFSET(0x1D310960)
#define RPG_GAMECORE_AIVARIABLESTRING_EQUALS_OFFSET UNITYSDK_OFFSET(0x1D310910)
#define RPG_GAMECORE_AIVARIABLESTRING_FEIIDFFOICL_OFFSET UNITYSDK_OFFSET(0x1D310C20)
#define RPG_GAMECORE_AIVARIABLESTRING_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1D310AD0)
#define RPG_GAMECORE_AIVARIABLESTRING_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D30EA60)
#define RPG_GAMECORE_AIVARIABLESTRING_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3108E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AIVariableString_TypeDefinitionIndex = 15610;

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
