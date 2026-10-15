#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class PropUnloadHitBoxGroup; }
namespace RPG::GameCore { class TaskContext; }

#define GFPBBPEIGIC_CTOR_OFFSET UNITYSDK_OFFSET(0x159F4710)
#define GFPBBPEIGIC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x159F4740)

inline static constexpr unsigned int GFPBBPEIGIC_TypeDefinitionIndex = 58364;

	class GFPBBPEIGIC
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PropUnloadHitBoxGroup* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropUnloadHitBoxGroup*))((::PBYTE)hIl2Cpp + GFPBBPEIGIC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFPBBPEIGIC_ONTASKBEGIN_OFFSET))(this);
		}

	};
