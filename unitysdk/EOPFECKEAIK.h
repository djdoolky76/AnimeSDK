#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SkillSPProgressType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class EOPFECKEAIK;
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define EOPFECKEAIK_CTOR_OFFSET UNITYSDK_OFFSET(0x1CD8EB90)
#define EOPFECKEAIK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CD8EBA0)
#define EOPFECKEAIK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CD8EB60)

inline static constexpr unsigned int EOPFECKEAIK_TypeDefinitionIndex = 22840;

	class EOPFECKEAIK : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* CIDCEJCGOGB; // 0x18
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x20
		::RPG::GameCore::SkillSPProgressType IGGMDBOEPCN; // 0x28
		::System::Boolean NMMJBGFDNAI; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOPFECKEAIK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::EOPFECKEAIK* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::EOPFECKEAIK*))((::PBYTE)hIl2Cpp + EOPFECKEAIK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::EOPFECKEAIK* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::EOPFECKEAIK*))((::PBYTE)hIl2Cpp + EOPFECKEAIK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
