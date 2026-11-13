#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class ToggleUITop; }

#define HBKMMPBNGAG_CTOR_OFFSET UNITYSDK_OFFSET(0x1B7A1A60)
#define HBKMMPBNGAG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1B7A1A90)

inline static constexpr unsigned int HBKMMPBNGAG_TypeDefinitionIndex = 48652;

	class HBKMMPBNGAG
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ToggleUITop* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ToggleUITop*))((::PBYTE)hIl2Cpp + HBKMMPBNGAG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBKMMPBNGAG_ONTASKBEGIN_OFFSET))(this);
		}

	};
