#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WolfBroSetupCameraAxis; }

#define LMIDAEOHENM_CTOR_OFFSET UNITYSDK_OFFSET(0xB77E400)
#define LMIDAEOHENM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB77E430)

inline static constexpr unsigned int LMIDAEOHENM_TypeDefinitionIndex = 58964;

	class LMIDAEOHENM
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WolfBroSetupCameraAxis* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WolfBroSetupCameraAxis*))((::PBYTE)hIl2Cpp + LMIDAEOHENM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMIDAEOHENM_ONTASKBEGIN_OFFSET))(this);
		}

	};
