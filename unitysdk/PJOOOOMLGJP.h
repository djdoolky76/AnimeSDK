#pragma once
#include "unitysdk/unitysdk.h"
class EGIOICBKPIE;
namespace RPG::GameCore { class TaskContext; }

#define PJOOOOMLGJP_CTOR_OFFSET UNITYSDK_OFFSET(0xC29E3E0)
#define PJOOOOMLGJP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC29E410)

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
