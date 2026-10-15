#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class DCMCOOMJFNC;
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define DCMCOOMJFNC_CTOR_OFFSET UNITYSDK_OFFSET(0x1DCDB2F0)
#define DCMCOOMJFNC_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DCDB360)
#define DCMCOOMJFNC_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DCDB260)

	class DCMCOOMJFNC : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* JFEANHJCLAA; // 0x18
		::RPG::GameCore::DynamicFloat* AOCLMBIAPOB; // 0x20
		::RPG::GameCore::TargetEvaluator* IKGBDDDDADI; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCMCOOMJFNC_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::DCMCOOMJFNC* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::DCMCOOMJFNC*))((::PBYTE)hIl2Cpp + DCMCOOMJFNC_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::DCMCOOMJFNC* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::DCMCOOMJFNC*))((::PBYTE)hIl2Cpp + DCMCOOMJFNC_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
