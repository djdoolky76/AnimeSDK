#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AIVariable.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AIVariable; }
namespace RPG::GameCore { class AIVariableFloat; }
namespace System { class Object; }

#define RPG_GAMECORE_AIVARIABLEFLOAT_CTOR_OFFSET UNITYSDK_OFFSET(0x1E54B710)
#define RPG_GAMECORE_AIVARIABLEFLOAT_DLDBLNNPHKE_OFFSET UNITYSDK_OFFSET(0x1E54D160)
#define RPG_GAMECORE_AIVARIABLEFLOAT_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E54CDF0)
#define RPG_GAMECORE_AIVARIABLEFLOAT_EQUALS_2_OFFSET UNITYSDK_OFFSET(0x1E54CD50)
#define RPG_GAMECORE_AIVARIABLEFLOAT_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E54CC80)
#define RPG_GAMECORE_AIVARIABLEFLOAT_FEIIDFFOICL_OFFSET UNITYSDK_OFFSET(0x1E54D010)
#define RPG_GAMECORE_AIVARIABLEFLOAT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E54CF40)
#define RPG_GAMECORE_AIVARIABLEFLOAT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E54B720)
#define RPG_GAMECORE_AIVARIABLEFLOAT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E54CC50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AIVariableFloat_TypeDefinitionIndex = 15766;

	class AIVariableFloat : public ::RPG::GameCore::AIVariable
	{
	public:
		::System::Single Value; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIVARIABLEFLOAT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AIVariableFloat* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AIVariableFloat*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIVARIABLEFLOAT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AIVariableFloat* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AIVariableFloat*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIVARIABLEFLOAT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIVARIABLEFLOAT_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::RPG::GameCore::AIVariable* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AIVariable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIVARIABLEFLOAT_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Boolean Equals_2(::RPG::GameCore::AIVariableFloat* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AIVariableFloat*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIVARIABLEFLOAT_EQUALS_2_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIVARIABLEFLOAT_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Boolean FEIIDFFOICL(::RPG::GameCore::AIVariableFloat* a1, ::RPG::GameCore::AIVariableFloat* a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::AIVariableFloat*, ::RPG::GameCore::AIVariableFloat*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIVARIABLEFLOAT_FEIIDFFOICL_OFFSET))(a1, a2);
		}

		static ::System::Boolean DLDBLNNPHKE(::RPG::GameCore::AIVariableFloat* a1, ::RPG::GameCore::AIVariableFloat* a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::AIVariableFloat*, ::RPG::GameCore::AIVariableFloat*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIVARIABLEFLOAT_DLDBLNNPHKE_OFFSET))(a1, a2);
		}

	};
}
