#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BIHNGLPOMOG.h"
namespace RPG::GameCore { class ByCompareTargetCountClientOnly; }
namespace RPG::GameCore { class TaskContext; }

#define MOFFLBMJLEL_CTOR_OFFSET UNITYSDK_OFFSET(0xBA245C0)

inline static constexpr unsigned int MOFFLBMJLEL_TypeDefinitionIndex = 54580;

	class MOFFLBMJLEL : public ::BIHNGLPOMOG
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareTargetCountClientOnly* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareTargetCountClientOnly*))((::PBYTE)hIl2Cpp + MOFFLBMJLEL_CTOR_OFFSET))(this, a1, a2);
		}

	};
