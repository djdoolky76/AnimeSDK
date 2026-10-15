#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AIVariable; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_AIVARIABLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D33BC30)
#define RPG_GAMECORE_AIVARIABLE_DLDBLNNPHKE_OFFSET UNITYSDK_OFFSET(0x1D33CA00)
#define RPG_GAMECORE_AIVARIABLE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1D33C780)
#define RPG_GAMECORE_AIVARIABLE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1D33C690)
#define RPG_GAMECORE_AIVARIABLE_FEIIDFFOICL_OFFSET UNITYSDK_OFFSET(0x1D33C8B0)
#define RPG_GAMECORE_AIVARIABLE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1D33C800)
#define RPG_GAMECORE_AIVARIABLE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D33BC40)
#define RPG_GAMECORE_AIVARIABLE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D33B930)

namespace RPG::GameCore
{
	class AIVariable : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Name; // 0x10
		::System::Boolean IsPrivate; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIVARIABLE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AIVariable* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AIVariable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIVARIABLE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AIVariable* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AIVariable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIVARIABLE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIVARIABLE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::RPG::GameCore::AIVariable* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AIVariable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIVARIABLE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIVARIABLE_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Boolean FEIIDFFOICL(::RPG::GameCore::AIVariable* a1, ::RPG::GameCore::AIVariable* a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::AIVariable*, ::RPG::GameCore::AIVariable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIVARIABLE_FEIIDFFOICL_OFFSET))(a1, a2);
		}

		static ::System::Boolean DLDBLNNPHKE(::RPG::GameCore::AIVariable* a1, ::RPG::GameCore::AIVariable* a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::AIVariable*, ::RPG::GameCore::AIVariable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIVARIABLE_DLDBLNNPHKE_OFFSET))(a1, a2);
		}

	};
}
