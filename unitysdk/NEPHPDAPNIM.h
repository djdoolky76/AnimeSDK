#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RtSkillPropertyType.h"
#include "unitysdk/RPG/GameCore/SkillType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class NEPHPDAPNIM;
namespace RPG::GameCore { class JsonEnum; }
namespace RPG::GameCore { class ValueEvaluatorConfig; }
namespace System { class String; }

#define NEPHPDAPNIM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D1FE640)
#define NEPHPDAPNIM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D1FE650)
#define NEPHPDAPNIM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D1FE610)

inline static constexpr unsigned int NEPHPDAPNIM_TypeDefinitionIndex = 24223;

	class NEPHPDAPNIM : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::System::String*>* COIKNMHIEPK; // 0x18
		::Il2CppArray<::RPG::GameCore::SkillType>* OOOPJAECBIN; // 0x20
		::Il2CppArray<::RPG::GameCore::JsonEnum*>* KGIDDABCHON; // 0x28
		::RPG::GameCore::ValueEvaluatorConfig* MNDFOPKBHKP; // 0x30
		::RPG::GameCore::RtSkillPropertyType ACHILGIPGKL; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEPHPDAPNIM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::NEPHPDAPNIM* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::NEPHPDAPNIM*))((::PBYTE)hIl2Cpp + NEPHPDAPNIM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::NEPHPDAPNIM* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::NEPHPDAPNIM*))((::PBYTE)hIl2Cpp + NEPHPDAPNIM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
