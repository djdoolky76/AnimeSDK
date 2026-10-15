#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class PlayerSelectMotionMode; }
namespace RPG::GameCore { class TaskContext; }

#define ODKJHABCAIF_CTOR_OFFSET UNITYSDK_OFFSET(0xBD91540)
#define ODKJHABCAIF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBD91570)

inline static constexpr unsigned int ODKJHABCAIF_TypeDefinitionIndex = 58294;

	class ODKJHABCAIF
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PlayerSelectMotionMode* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PlayerSelectMotionMode*))((::PBYTE)hIl2Cpp + ODKJHABCAIF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODKJHABCAIF_ONTASKBEGIN_OFFSET))(this);
		}

	};
