#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class BCOAEFIKBAO;
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class TargetEvaluator; }

#define BCOAEFIKBAO_CTOR_OFFSET UNITYSDK_OFFSET(0x1CCFAC00)
#define BCOAEFIKBAO_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CCFAC10)
#define BCOAEFIKBAO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CCFABD0)

	class BCOAEFIKBAO : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* OJGEEODEMMO; // 0x18
		::RPG::GameCore::PredicateConfig* GODIODIIBNC; // 0x20
		::RPG::GameCore::DynamicFloat* MCNPMDPMCKM; // 0x28
		::RPG::GameCore::TargetEvaluator* MFIEDDGBIPH; // 0x30
		::System::Boolean BDLAKIDPLHB; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCOAEFIKBAO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::BCOAEFIKBAO* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::BCOAEFIKBAO*))((::PBYTE)hIl2Cpp + BCOAEFIKBAO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::BCOAEFIKBAO* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::BCOAEFIKBAO*))((::PBYTE)hIl2Cpp + BCOAEFIKBAO_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
