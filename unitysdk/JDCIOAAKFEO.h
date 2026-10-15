#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class CaptureEntity; }
namespace RPG::GameCore { class TaskContext; }

#define JDCIOAAKFEO_CTOR_OFFSET UNITYSDK_OFFSET(0x165BF2E0)
#define JDCIOAAKFEO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x165BF310)

	class JDCIOAAKFEO
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CaptureEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CaptureEntity*))((::PBYTE)hIl2Cpp + JDCIOAAKFEO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDCIOAAKFEO_ONTASKBEGIN_OFFSET))(this);
		}

	};
