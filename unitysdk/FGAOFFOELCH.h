#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
#include "unitysdk/System/ValueTuple_2.h"
namespace RPG::Client { class CameraDataAndFlags; }
namespace RPG::Client { class PipelineCameraEngine; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class VCameraConfig; }
namespace RPG::GameCore { class VCameraConfigChange; }
namespace RPG::GameCore { class VCameraDOFFocusEntity; }

#define FGAOFFOELCH_CTOR_OFFSET UNITYSDK_OFFSET(0x1574F0E0)
#define FGAOFFOELCH_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1574F3F0)
#define FGAOFFOELCH_EFOIJLNPCDF_OFFSET UNITYSDK_OFFSET(0x157514B0)
#define FGAOFFOELCH_JLNPBOCIDBI_OFFSET UNITYSDK_OFFSET(0x1574F850)
#define FGAOFFOELCH_JPPGBEJAIDP_OFFSET UNITYSDK_OFFSET(0x15750FA0)
#define FGAOFFOELCH_KFMKNBHFGIK_OFFSET UNITYSDK_OFFSET(0x1574F100)
#define FGAOFFOELCH_LDIAKCMPGAK_OFFSET UNITYSDK_OFFSET(0x15751040)
#define FGAOFFOELCH_LIDGCICPLOJ_OFFSET UNITYSDK_OFFSET(0x157510E0)
#define FGAOFFOELCH_NDKFKJBICPA_OFFSET UNITYSDK_OFFSET(0x157511C0)
#define FGAOFFOELCH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1574F430)
#define FGAOFFOELCH_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15750EF0)
#define FGAOFFOELCH_TICK_OFFSET UNITYSDK_OFFSET(0x15750F40)

inline static constexpr unsigned int FGAOFFOELCH_TypeDefinitionIndex = 55797;

	class FGAOFFOELCH : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::VCameraConfig* GGBGBANPMFG; // 0x20
		::RPG::GameCore::VCameraConfigChange* OFKGLJOAMLD; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::VCameraConfigChange* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::VCameraConfigChange*))((::PBYTE)hIl2Cpp + FGAOFFOELCH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGAOFFOELCH_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGAOFFOELCH_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGAOFFOELCH_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FGAOFFOELCH_TICK_OFFSET))(this, a1);
		}

		::System::Void KFMKNBHFGIK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGAOFFOELCH_KFMKNBHFGIK_OFFSET))(this);
		}

		::System::ValueTuple_2<::System::Boolean, ::System::Boolean> JLNPBOCIDBI(::RPG::Client::PipelineCameraEngine* a1, ::RPG::Client::CameraDataAndFlags* a2, ::RPG::GameCore::VCameraConfig* a3)
		{
			return ((::System::ValueTuple_2<::System::Boolean, ::System::Boolean>(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::Client::CameraDataAndFlags*, ::RPG::GameCore::VCameraConfig*))((::PBYTE)hIl2Cpp + FGAOFFOELCH_JLNPBOCIDBI_OFFSET))(this, a1, a2, a3);
		}

		::System::Void JPPGBEJAIDP(::RPG::Client::CameraDataAndFlags* a1, ::RPG::GameCore::VCameraConfig* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CameraDataAndFlags*, ::RPG::GameCore::VCameraConfig*))((::PBYTE)hIl2Cpp + FGAOFFOELCH_JPPGBEJAIDP_OFFSET))(this, a1, a2);
		}

		::System::Void NDKFKJBICPA(::RPG::Client::CameraDataAndFlags* a1, ::RPG::GameCore::VCameraConfig* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CameraDataAndFlags*, ::RPG::GameCore::VCameraConfig*))((::PBYTE)hIl2Cpp + FGAOFFOELCH_NDKFKJBICPA_OFFSET))(this, a1, a2);
		}

		::System::Void LDIAKCMPGAK(::RPG::Client::CameraDataAndFlags* a1, ::RPG::GameCore::VCameraConfig* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CameraDataAndFlags*, ::RPG::GameCore::VCameraConfig*))((::PBYTE)hIl2Cpp + FGAOFFOELCH_LDIAKCMPGAK_OFFSET))(this, a1, a2);
		}

		::System::Void LIDGCICPLOJ(::RPG::Client::CameraDataAndFlags* a1, ::RPG::GameCore::VCameraDOFFocusEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CameraDataAndFlags*, ::RPG::GameCore::VCameraDOFFocusEntity*))((::PBYTE)hIl2Cpp + FGAOFFOELCH_LIDGCICPLOJ_OFFSET))(this, a1, a2);
		}

		::System::Void EFOIJLNPCDF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGAOFFOELCH_EFOIJLNPCDF_OFFSET))(this);
		}

	};
