#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AIVariable.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AIVariable; }
namespace RPG::GameCore { class AIVariableBool; }
namespace System { class Object; }

#define RPG_GAMECORE_AIVARIABLEBOOL_CTOR_OFFSET UNITYSDK_OFFSET(0x1D33BD60)
#define RPG_GAMECORE_AIVARIABLEBOOL_DLDBLNNPHKE_OFFSET UNITYSDK_OFFSET(0x1D33D000)
#define RPG_GAMECORE_AIVARIABLEBOOL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1D33CCD0)
#define RPG_GAMECORE_AIVARIABLEBOOL_EQUALS_2_OFFSET UNITYSDK_OFFSET(0x1D33CC40)
#define RPG_GAMECORE_AIVARIABLEBOOL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1D33CB80)
#define RPG_GAMECORE_AIVARIABLEBOOL_FEIIDFFOICL_OFFSET UNITYSDK_OFFSET(0x1D33CEB0)
#define RPG_GAMECORE_AIVARIABLEBOOL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1D33CE00)
#define RPG_GAMECORE_AIVARIABLEBOOL_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D33BD70)
#define RPG_GAMECORE_AIVARIABLEBOOL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D33CB50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AIVariableBool_TypeDefinitionIndex = 15606;

	class AIVariableBool : public ::RPG::GameCore::AIVariable
	{
	public:
		::System::Boolean Value; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIVARIABLEBOOL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AIVariableBool* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AIVariableBool*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIVARIABLEBOOL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AIVariableBool* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AIVariableBool*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIVARIABLEBOOL_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIVARIABLEBOOL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::RPG::GameCore::AIVariable* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AIVariable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIVARIABLEBOOL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Boolean Equals_2(::RPG::GameCore::AIVariableBool* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AIVariableBool*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIVARIABLEBOOL_EQUALS_2_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIVARIABLEBOOL_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Boolean FEIIDFFOICL(::RPG::GameCore::AIVariableBool* a1, ::RPG::GameCore::AIVariableBool* a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::AIVariableBool*, ::RPG::GameCore::AIVariableBool*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIVARIABLEBOOL_FEIIDFFOICL_OFFSET))(a1, a2);
		}

		static ::System::Boolean DLDBLNNPHKE(::RPG::GameCore::AIVariableBool* a1, ::RPG::GameCore::AIVariableBool* a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::AIVariableBool*, ::RPG::GameCore::AIVariableBool*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIVARIABLEBOOL_DLDBLNNPHKE_OFFSET))(a1, a2);
		}

	};
}
