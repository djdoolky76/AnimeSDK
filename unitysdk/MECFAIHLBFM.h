#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class MECFAIHLBFM;
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TaskConfig; }
namespace System { class String; }

#define MECFAIHLBFM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D1200C0)
#define MECFAIHLBFM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D1200D0)
#define MECFAIHLBFM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D120090)

inline static constexpr unsigned int MECFAIHLBFM_TypeDefinitionIndex = 22104;

	class MECFAIHLBFM : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* CAJPPBDLFEF; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* EOPBPNBAHLD; // 0x20
		::System::String* BGGCOJBIMKH; // 0x28
		::System::String* CNGCNFCJEKL; // 0x30
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* LAEOOOLKFEF; // 0x38
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* BFNDNNPKHHE; // 0x40
		::System::String* PCNMDMDIFKF; // 0x48
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MECFAIHLBFM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::MECFAIHLBFM* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::MECFAIHLBFM*))((::PBYTE)hIl2Cpp + MECFAIHLBFM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::MECFAIHLBFM* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::MECFAIHLBFM*))((::PBYTE)hIl2Cpp + MECFAIHLBFM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
