#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ClockParkTakePhotoReport; }
namespace RPG::GameCore { class TaskContext; }

#define KABCDOBJOMN_CTOR_OFFSET UNITYSDK_OFFSET(0xB2CA160)
#define KABCDOBJOMN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB2CA190)

inline static constexpr unsigned int KABCDOBJOMN_TypeDefinitionIndex = 52696;

	class KABCDOBJOMN
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ClockParkTakePhotoReport* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ClockParkTakePhotoReport*))((::PBYTE)hIl2Cpp + KABCDOBJOMN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KABCDOBJOMN_ONTASKBEGIN_OFFSET))(this);
		}

	};
