#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
#include "unitysdk/System/ValueTuple_3.h"
namespace RPG::Client { class CameraDataAndFlags; }
namespace RPG::Client { class PipelineCameraEngine; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class VCameraConfig; }
namespace RPG::GameCore { class VCameraConfigChange; }
namespace RPG::GameCore { class VCameraDOFFocusEntity; }

#define FGAOFFOELCH_BEGHGAJMKDE_OFFSET UNITYSDK_OFFSET(0x18A77B70)
#define FGAOFFOELCH_CTOR_OFFSET UNITYSDK_OFFSET(0x18A773F0)
#define FGAOFFOELCH_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18A77700)
#define FGAOFFOELCH_EFOIJLNPCDF_OFFSET UNITYSDK_OFFSET(0x18A79BF0)
#define FGAOFFOELCH_GBIHGHIHHLP_OFFSET UNITYSDK_OFFSET(0x18A79680)
#define FGAOFFOELCH_JLNPBOCIDBI_OFFSET UNITYSDK_OFFSET(0x18A77E00)
#define FGAOFFOELCH_JPPGBEJAIDP_OFFSET UNITYSDK_OFFSET(0x18A796F0)
#define FGAOFFOELCH_KFMKNBHFGIK_OFFSET UNITYSDK_OFFSET(0x18A77410)
#define FGAOFFOELCH_LBOHJLJCKAM_OFFSET UNITYSDK_OFFSET(0x18A794A0)
#define FGAOFFOELCH_LDIAKCMPGAK_OFFSET UNITYSDK_OFFSET(0x18A79790)
#define FGAOFFOELCH_LIDGCICPLOJ_OFFSET UNITYSDK_OFFSET(0x18A79830)
#define FGAOFFOELCH_NDKFKJBICPA_OFFSET UNITYSDK_OFFSET(0x18A79910)
#define FGAOFFOELCH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18A77740)
#define FGAOFFOELCH_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x18A795D0)
#define FGAOFFOELCH_TICK_OFFSET UNITYSDK_OFFSET(0x18A79620)

inline static constexpr unsigned int FGAOFFOELCH_TypeDefinitionIndex = 57000;

	class FGAOFFOELCH : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::VCameraConfigChange* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::RPG::GameCore::VCameraConfig* GGBGBANPMFG; // 0x28
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

		::System::Void LBOHJLJCKAM(::RPG::Client::PipelineCameraEngine* a1, ::RPG::Client::CameraDataAndFlags* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::Client::CameraDataAndFlags*))((::PBYTE)hIl2Cpp + FGAOFFOELCH_LBOHJLJCKAM_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGAOFFOELCH_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FGAOFFOELCH_TICK_OFFSET))(this, a1);
		}

		::System::Void BEGHGAJMKDE(::RPG::Client::PipelineCameraEngine* a1, ::RPG::Client::CameraDataAndFlags* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::Client::CameraDataAndFlags*))((::PBYTE)hIl2Cpp + FGAOFFOELCH_BEGHGAJMKDE_OFFSET))(this, a1, a2);
		}

		::System::Boolean GBIHGHIHHLP(::RPG::GameCore::VCameraConfig* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::VCameraConfig*))((::PBYTE)hIl2Cpp + FGAOFFOELCH_GBIHGHIHHLP_OFFSET))(this, a1);
		}

		::System::Void KFMKNBHFGIK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGAOFFOELCH_KFMKNBHFGIK_OFFSET))(this);
		}

		::System::ValueTuple_3<::System::Boolean, ::System::Boolean, ::System::Boolean> JLNPBOCIDBI(::RPG::Client::PipelineCameraEngine* a1, ::RPG::Client::CameraDataAndFlags* a2, ::RPG::GameCore::VCameraConfig* a3)
		{
			return ((::System::ValueTuple_3<::System::Boolean, ::System::Boolean, ::System::Boolean>(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::Client::CameraDataAndFlags*, ::RPG::GameCore::VCameraConfig*))((::PBYTE)hIl2Cpp + FGAOFFOELCH_JLNPBOCIDBI_OFFSET))(this, a1, a2, a3);
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
