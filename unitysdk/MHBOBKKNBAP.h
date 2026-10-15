#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class MHBOBKKNBAP;
namespace RPG::GameCore { class TargetEvaluator; }

#define MHBOBKKNBAP_CTOR_OFFSET UNITYSDK_OFFSET(0x1D1AA7A0)
#define MHBOBKKNBAP_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D1AA7B0)
#define MHBOBKKNBAP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D1AA770)

	class MHBOBKKNBAP : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x18
		::RPG::Client::TextID LILJIHBAPII; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHBOBKKNBAP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::MHBOBKKNBAP* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::MHBOBKKNBAP*))((::PBYTE)hIl2Cpp + MHBOBKKNBAP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::MHBOBKKNBAP* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::MHBOBKKNBAP*))((::PBYTE)hIl2Cpp + MHBOBKKNBAP_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
