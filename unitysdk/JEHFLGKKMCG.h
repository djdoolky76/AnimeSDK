#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightRoleSkillTag.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class JEHFLGKKMCG;

#define JEHFLGKKMCG_CTOR_OFFSET UNITYSDK_OFFSET(0x1CFF0550)
#define JEHFLGKKMCG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CFF02E0)

inline static constexpr unsigned int JEHFLGKKMCG_TypeDefinitionIndex = 13522;

	class JEHFLGKKMCG : public ::System::Object
	{
	public:
		::RPG::GameCore::GridFightRoleSkillTag BFHMAFAGGFM; // 0x10
		::System::UInt32 NALMBOOCCIN; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEHFLGKKMCG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::JEHFLGKKMCG* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::JEHFLGKKMCG*))((::PBYTE)hIl2Cpp + JEHFLGKKMCG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
