#pragma once
#include "unitysdk/unitysdk.h"
class IIAMJNHDNBB;
namespace RPG::GameCore { class TaskContext; }

#define LKBJMMAIDHK_CTOR_OFFSET UNITYSDK_OFFSET(0xBFC5C30)
#define LKBJMMAIDHK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBFC5C60)

inline static constexpr unsigned int LKBJMMAIDHK_TypeDefinitionIndex = 56435;

	class LKBJMMAIDHK
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::IIAMJNHDNBB* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::IIAMJNHDNBB*))((::PBYTE)hIl2Cpp + LKBJMMAIDHK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKBJMMAIDHK_ONTASKBEGIN_OFFSET))(this);
		}

	};
