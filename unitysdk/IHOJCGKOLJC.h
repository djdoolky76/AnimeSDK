#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class RtByIsMoving; }
namespace RPG::GameCore { class TaskContext; }

#define IHOJCGKOLJC_CTOR_OFFSET UNITYSDK_OFFSET(0x164192F0)
#define IHOJCGKOLJC_EVALUATE_OFFSET UNITYSDK_OFFSET(0x16419320)

inline static constexpr unsigned int IHOJCGKOLJC_TypeDefinitionIndex = 54175;

	class IHOJCGKOLJC
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RtByIsMoving* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RtByIsMoving*))((::PBYTE)hIl2Cpp + IHOJCGKOLJC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IHOJCGKOLJC_EVALUATE_OFFSET))(this);
		}

	};
