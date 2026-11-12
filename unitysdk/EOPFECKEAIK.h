#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SkillSPProgressType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class EOPFECKEAIK;
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define EOPFECKEAIK_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF94340)
#define EOPFECKEAIK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DF94350)
#define EOPFECKEAIK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DF94310)

inline static constexpr unsigned int EOPFECKEAIK_TypeDefinitionIndex = 23265;

	class EOPFECKEAIK : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x18
		::System::String* CIDCEJCGOGB; // 0x20
		::System::Boolean NMMJBGFDNAI; // 0x28
		::System::Byte _padding0[0x3];
		::RPG::GameCore::SkillSPProgressType IGGMDBOEPCN; // 0x2C
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
