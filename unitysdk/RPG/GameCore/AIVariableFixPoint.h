#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AIVariable.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AIVariable; }
namespace RPG::GameCore { class AIVariableFixPoint; }
namespace System { class Object; }

#define RPG_GAMECORE_AIVARIABLEFIXPOINT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D30E5A0)
#define RPG_GAMECORE_AIVARIABLEFIXPOINT_DLDBLNNPHKE_OFFSET UNITYSDK_OFFSET(0x1D30FB40)
#define RPG_GAMECORE_AIVARIABLEFIXPOINT_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1D30F840)
#define RPG_GAMECORE_AIVARIABLEFIXPOINT_EQUALS_2_OFFSET UNITYSDK_OFFSET(0x1D30F730)
#define RPG_GAMECORE_AIVARIABLEFIXPOINT_EQUALS_OFFSET UNITYSDK_OFFSET(0x1D30F6E0)
#define RPG_GAMECORE_AIVARIABLEFIXPOINT_FEIIDFFOICL_OFFSET UNITYSDK_OFFSET(0x1D30F9F0)
#define RPG_GAMECORE_AIVARIABLEFIXPOINT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1D30F900)
#define RPG_GAMECORE_AIVARIABLEFIXPOINT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D30E5B0)
#define RPG_GAMECORE_AIVARIABLEFIXPOINT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D30F6B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AIVariableFixPoint_TypeDefinitionIndex = 15609;

	class AIVariableFixPoint : public ::RPG::GameCore::AIVariable
	{
	public:
		::RPG::GameCore::FixPoint Value; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIVARIABLEFIXPOINT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AIVariableFixPoint* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AIVariableFixPoint*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIVARIABLEFIXPOINT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AIVariableFixPoint* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AIVariableFixPoint*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIVARIABLEFIXPOINT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIVARIABLEFIXPOINT_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::RPG::GameCore::AIVariable* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AIVariable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIVARIABLEFIXPOINT_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Boolean Equals_2(::RPG::GameCore::AIVariableFixPoint* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AIVariableFixPoint*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIVARIABLEFIXPOINT_EQUALS_2_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIVARIABLEFIXPOINT_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Boolean FEIIDFFOICL(::RPG::GameCore::AIVariableFixPoint* a1, ::RPG::GameCore::AIVariableFixPoint* a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::AIVariableFixPoint*, ::RPG::GameCore::AIVariableFixPoint*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIVARIABLEFIXPOINT_FEIIDFFOICL_OFFSET))(a1, a2);
		}

		static ::System::Boolean DLDBLNNPHKE(::RPG::GameCore::AIVariableFixPoint* a1, ::RPG::GameCore::AIVariableFixPoint* a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::AIVariableFixPoint*, ::RPG::GameCore::AIVariableFixPoint*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIVARIABLEFIXPOINT_DLDBLNNPHKE_OFFSET))(a1, a2);
		}

	};
}
