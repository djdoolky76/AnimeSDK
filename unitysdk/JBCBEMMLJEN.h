#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ModifierOverrideOnHitEffect; }
namespace RPG::GameCore { class TaskContext; }

#define JBCBEMMLJEN_CTOR_OFFSET UNITYSDK_OFFSET(0xB89F100)
#define JBCBEMMLJEN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB89F130)
#define JBCBEMMLJEN_PJGPJKEPIBG_OFFSET UNITYSDK_OFFSET(0xB89F3A0)

inline static constexpr unsigned int JBCBEMMLJEN_TypeDefinitionIndex = 56363;

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
