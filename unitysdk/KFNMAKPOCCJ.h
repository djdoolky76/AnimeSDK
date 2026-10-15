#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class KFNMAKPOCCJ;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define KFNMAKPOCCJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1D08D060)
#define KFNMAKPOCCJ_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D08D070)
#define KFNMAKPOCCJ_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D08D020)

	class KFNMAKPOCCJ : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* NMCLEENBEAL; // 0x18
		::RPG::GameCore::DynamicFloat* GBOEIMOIMJG; // 0x20
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x28
		::RPG::GameCore::DynamicFloat* BIFBJDKMKDL; // 0x30
		::System::Boolean GFDBIGKJAGK; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFNMAKPOCCJ_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::KFNMAKPOCCJ* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::KFNMAKPOCCJ*))((::PBYTE)hIl2Cpp + KFNMAKPOCCJ_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::KFNMAKPOCCJ* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::KFNMAKPOCCJ*))((::PBYTE)hIl2Cpp + KFNMAKPOCCJ_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
