#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ELALAHMNKGK.h"
namespace RPG::Client { class CameraDataAndFlags; }
namespace RPG::Client { class CameraModuleConfigCollection; }
namespace RPG::Client { class PipelineCameraEngine; }
namespace RPG::Client { class PipelineCameraGlobalConfig; }

#define EFMIDMBKAJJ_CTOR_OFFSET UNITYSDK_OFFSET(0x13A5DC30)

inline static constexpr unsigned int EFMIDMBKAJJ_TypeDefinitionIndex = 69743;

	class EFMIDMBKAJJ : public ::ELALAHMNKGK
	{
	public:
		::System::Void _ctor(::RPG::Client::PipelineCameraEngine* a1, ::RPG::Client::PipelineCameraGlobalConfig* a2, ::RPG::Client::CameraModuleConfigCollection* a3, ::RPG::Client::CameraDataAndFlags* a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::Client::PipelineCameraGlobalConfig*, ::RPG::Client::CameraModuleConfigCollection*, ::RPG::Client::CameraDataAndFlags*))((::PBYTE)hIl2Cpp + EFMIDMBKAJJ_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

	};
