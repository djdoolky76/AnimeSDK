#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ModifierOverrideOnHitEffect; }
namespace RPG::GameCore { class TaskContext; }

#define JBCBEMMLJEN_CTOR_OFFSET UNITYSDK_OFFSET(0x16558920)
#define JBCBEMMLJEN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16558950)
#define JBCBEMMLJEN_PJGPJKEPIBG_OFFSET UNITYSDK_OFFSET(0x16558BD0)

inline static constexpr unsigned int JBCBEMMLJEN_TypeDefinitionIndex = 55182;

	class JBCBEMMLJEN
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ModifierOverrideOnHitEffect* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ModifierOverrideOnHitEffect*))((::PBYTE)hIl2Cpp + JBCBEMMLJEN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBCBEMMLJEN_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Int32 PJGPJKEPIBG()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JBCBEMMLJEN_PJGPJKEPIBG_OFFSET))(this);
		}

	};
