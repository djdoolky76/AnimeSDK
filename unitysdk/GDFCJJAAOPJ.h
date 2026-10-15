#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ComplexSkillAIFactorGroup; }
namespace System { class String; }

#define GDFCJJAAOPJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1599B6B0)
#define GDFCJJAAOPJ_CTOR_2_OFFSET UNITYSDK_OFFSET(0x1599B710)
#define GDFCJJAAOPJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1599B660)
#define GDFCJJAAOPJ_UNRESOLVE_OFFSET UNITYSDK_OFFSET(0x1599B850)
#define GDFCJJAAOPJ__RESOLVE_OFFSET UNITYSDK_OFFSET(0x1599B730)

inline static constexpr unsigned int GDFCJJAAOPJ_TypeDefinitionIndex = 56526;

	class GDFCJJAAOPJ
	{
	public:
		::System::Void _ctor(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + GDFCJJAAOPJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GDFCJJAAOPJ_CTOR_1_OFFSET))(this, a1);
		}

		::System::Void _ctor_2(::RPG::GameCore::ComplexSkillAIFactorGroup* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ComplexSkillAIFactorGroup*))((::PBYTE)hIl2Cpp + GDFCJJAAOPJ_CTOR_2_OFFSET))(this, a1);
		}

		::RPG::GameCore::ComplexSkillAIFactorGroup* _Resolve()
		{
			return ((::RPG::GameCore::ComplexSkillAIFactorGroup*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDFCJJAAOPJ__RESOLVE_OFFSET))(this);
		}

		::System::Void UnResolve()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDFCJJAAOPJ_UNRESOLVE_OFFSET))(this);
		}

	};
