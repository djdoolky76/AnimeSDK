#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::Client { class CameraDataAndFlags; }
namespace RPG::Client { class PipelineCameraEngine; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class VCameraBlendConfig; }

#define IIOPPJBFFDG_CTOR_OFFSET UNITYSDK_OFFSET(0x16455400)
#define IIOPPJBFFDG_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16455410)
#define IIOPPJBFFDG_JLNPBOCIDBI_OFFSET UNITYSDK_OFFSET(0x164555C0)
#define IIOPPJBFFDG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16455450)
#define IIOPPJBFFDG_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x16455740)
#define IIOPPJBFFDG_TICK_OFFSET UNITYSDK_OFFSET(0x16455790)

inline static constexpr unsigned int IIOPPJBFFDG_TypeDefinitionIndex = 55796;

	class IIOPPJBFFDG : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::VCameraBlendConfig* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::VCameraBlendConfig* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::VCameraBlendConfig*))((::PBYTE)hIl2Cpp + IIOPPJBFFDG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIOPPJBFFDG_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIOPPJBFFDG_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIOPPJBFFDG_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IIOPPJBFFDG_TICK_OFFSET))(this, a1);
		}

		::System::Boolean JLNPBOCIDBI(::RPG::Client::PipelineCameraEngine* a1, ::RPG::Client::CameraDataAndFlags* a2, ::RPG::GameCore::VCameraBlendConfig* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::Client::CameraDataAndFlags*, ::RPG::GameCore::VCameraBlendConfig*))((::PBYTE)hIl2Cpp + IIOPPJBFFDG_JLNPBOCIDBI_OFFSET))(this, a1, a2, a3);
		}

	};
