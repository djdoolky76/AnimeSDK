#pragma once
#include "unitysdk/unitysdk.h"
class EGIOICBKPIE;
namespace RPG::GameCore { class TaskContext; }

#define PJOOOOMLGJP_CTOR_OFFSET UNITYSDK_OFFSET(0xC2969D0)
#define PJOOOOMLGJP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC296A00)

inline static constexpr unsigned int PJOOOOMLGJP_TypeDefinitionIndex = 52811;

	class PJOOOOMLGJP
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::EGIOICBKPIE* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::EGIOICBKPIE*))((::PBYTE)hIl2Cpp + PJOOOOMLGJP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJOOOOMLGJP_ONTASKBEGIN_OFFSET))(this);
		}

	};
