#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class JIBGBCAHCKA;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class RtLifeBindingConfig; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TaskConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JIBGBCAHCKA_CTOR_OFFSET UNITYSDK_OFFSET(0x1D034140)
#define JIBGBCAHCKA_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D034150)
#define JIBGBCAHCKA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D034110)

	class JIBGBCAHCKA : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* CGNJAJMEKOI; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* ELGMGKGMCCM; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* AIBLKCJHCCC; // 0x28
		::RPG::GameCore::TargetEvaluator* BCJFPLDEDJE; // 0x30
		::RPG::GameCore::RtLifeBindingConfig* ECNHHNDAHKB; // 0x38
		::RPG::GameCore::TargetEvaluator* BBOFFGLPHCJ; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::DynamicFloat*>* FMCJJBALBEN; // 0x48
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::DynamicString*>* BGCBMIGIAMM; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIBGBCAHCKA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::JIBGBCAHCKA* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::JIBGBCAHCKA*))((::PBYTE)hIl2Cpp + JIBGBCAHCKA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::JIBGBCAHCKA* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::JIBGBCAHCKA*))((::PBYTE)hIl2Cpp + JIBGBCAHCKA_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
