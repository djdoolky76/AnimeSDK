#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class CPKJPLGENJF;
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetEvaluator; }

#define CPKJPLGENJF_CTOR_OFFSET UNITYSDK_OFFSET(0x1DCC13F0)
#define CPKJPLGENJF_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DCC1400)
#define CPKJPLGENJF_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DCC13C0)

	class CPKJPLGENJF : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* EKNOCCGMJOF; // 0x18
		::System::Boolean EILNDPIIEJB; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPKJPLGENJF_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::CPKJPLGENJF* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::CPKJPLGENJF*))((::PBYTE)hIl2Cpp + CPKJPLGENJF_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::CPKJPLGENJF* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::CPKJPLGENJF*))((::PBYTE)hIl2Cpp + CPKJPLGENJF_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
