#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class BPJEJGHJKMK;
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }

#define BPJEJGHJKMK_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9FA1F0)
#define BPJEJGHJKMK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9FA200)
#define BPJEJGHJKMK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9FA1C0)

	class BPJEJGHJKMK : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* KACNPCBMPEK; // 0x18
		::RPG::GameCore::TargetEvaluator* MCLLALGABAB; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPJEJGHJKMK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::BPJEJGHJKMK* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::BPJEJGHJKMK*))((::PBYTE)hIl2Cpp + BPJEJGHJKMK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::BPJEJGHJKMK* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::BPJEJGHJKMK*))((::PBYTE)hIl2Cpp + BPJEJGHJKMK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
