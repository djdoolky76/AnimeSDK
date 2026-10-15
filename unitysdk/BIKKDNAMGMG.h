#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ModifierBehaviorFlag.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class BIKKDNAMGMG;
class FCOEMCEDLNL;
class JKMJGCFCMMC;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class JsonEnum; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TurnInsertActionUIConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BIKKDNAMGMG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D808110)
#define BIKKDNAMGMG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D8081D0)
#define BIKKDNAMGMG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8080D0)

inline static constexpr unsigned int BIKKDNAMGMG_TypeDefinitionIndex = 22611;

	class BIKKDNAMGMG : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OMFLDIGGPHC; // 0x18
		::JKMJGCFCMMC* IHHIHDEHBIJ; // 0x20
		::RPG::GameCore::TurnInsertActionUIConfig* OLOKHEMMGOH; // 0x28
		::RPG::GameCore::TargetEvaluator* MAGHKLPOJJJ; // 0x30
		::RPG::GameCore::DynamicFloat* CKLLHFKPACB; // 0x38
		::Il2CppArray<::RPG::GameCore::ModifierBehaviorFlag>* HMOBDKGBECE; // 0x40
		::Il2CppArray<::RPG::GameCore::DynamicString*>* PJGLPMGOLPK; // 0x48
		::System::String* MAGLCBLICBG; // 0x50
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::DynamicFloat*>* FMCJJBALBEN; // 0x60
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::DynamicString*>* BGCBMIGIAMM; // 0x68
		::RPG::GameCore::JsonEnum* AGOHEFBOPNO; // 0x70
		::System::Boolean LENIKLCJOHE; // 0x78
		::System::Boolean LGKDFBLIOBP; // 0x79
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIKKDNAMGMG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::BIKKDNAMGMG* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::BIKKDNAMGMG*))((::PBYTE)hIl2Cpp + BIKKDNAMGMG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::BIKKDNAMGMG* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::BIKKDNAMGMG*))((::PBYTE)hIl2Cpp + BIKKDNAMGMG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
