#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ELALAHMNKGK.h"
namespace RPG::Client { class CameraDataAndFlags; }
namespace RPG::Client { class CameraModuleConfigCollection; }
namespace RPG::Client { class PipelineCameraEngine; }
namespace RPG::Client { class PipelineCameraGlobalConfig; }

#define MEJAGBFOBCA_CTOR_OFFSET UNITYSDK_OFFSET(0xB8D90A0)

	class MEJAGBFOBCA : public ::ELALAHMNKGK
	{
	public:
		::System::Void _ctor(::RPG::Client::PipelineCameraEngine* a1, ::RPG::Client::PipelineCameraGlobalConfig* a2, ::RPG::Client::CameraModuleConfigCollection* a3, ::RPG::Client::CameraDataAndFlags* a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::Client::PipelineCameraGlobalConfig*, ::RPG::Client::CameraModuleConfigCollection*, ::RPG::Client::CameraDataAndFlags*))((::PBYTE)hIl2Cpp + MEJAGBFOBCA_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

	};
