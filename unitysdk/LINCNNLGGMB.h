#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PropertyModifyFunction.h"
#include "unitysdk/RPG/GameCore/RtSkillPropertyType.h"
#include "unitysdk/RPG/GameCore/SkillType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class LINCNNLGGMB;
namespace RPG::GameCore { class JsonEnum; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class ValueEvaluatorConfig; }
namespace System { class String; }

#define LINCNNLGGMB_CTOR_OFFSET UNITYSDK_OFFSET(0x1D0CF430)
#define LINCNNLGGMB_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D0CF470)
#define LINCNNLGGMB_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D0CF3C0)

inline static constexpr unsigned int LINCNNLGGMB_TypeDefinitionIndex = 24221;

	class LINCNNLGGMB : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x18
		::Il2CppArray<::System::String*>* COIKNMHIEPK; // 0x20
		::Il2CppArray<::RPG::GameCore::JsonEnum*>* KGIDDABCHON; // 0x28
		::RPG::GameCore::ValueEvaluatorConfig* MNDFOPKBHKP; // 0x30
		::Il2CppArray<::RPG::GameCore::SkillType>* OOOPJAECBIN; // 0x38
		::RPG::GameCore::RtSkillPropertyType ACHILGIPGKL; // 0x40
		::RPG::GameCore::PropertyModifyFunction KFAPHPGFEMK; // 0x44
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LINCNNLGGMB_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::LINCNNLGGMB* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::LINCNNLGGMB*))((::PBYTE)hIl2Cpp + LINCNNLGGMB_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::LINCNNLGGMB* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::LINCNNLGGMB*))((::PBYTE)hIl2Cpp + LINCNNLGGMB_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
