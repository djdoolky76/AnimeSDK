#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CinemachineBlendDefinition_Style.h"
#include "unitysdk/MDILEMALGNC.h"
#include "unitysdk/RPG/Client/CameraModuleType.h"
#include "unitysdk/RPG/GameCore/VCameraState.h"
class MGIJBEAPGFA;
namespace RPG::Client { class CameraDataAndFlags; }
namespace RPG::Client { class CameraFightStateCommonConfig; }
namespace RPG::Client { class CameraModuleConfigCollection; }
namespace RPG::Client { class CameraNormalConfigData; }
namespace RPG::Client { class ICameraFightState; }
namespace RPG::Client { class PipelineCameraEngine; }
namespace RPG::Client { class PipelineCameraGlobalConfig; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ACBFNEKJDNP_APNNEEJJPHA_OFFSET UNITYSDK_OFFSET(0xB1116C0)
#define ACBFNEKJDNP_CTOR_1_OFFSET UNITYSDK_OFFSET(0xB111460)
#define ACBFNEKJDNP_CTOR_OFFSET UNITYSDK_OFFSET(0xB111440)
#define ACBFNEKJDNP_FOGKIMNNLLG_OFFSET UNITYSDK_OFFSET(0xB1137D0)
#define ACBFNEKJDNP_KDKNJIJOLME_OFFSET UNITYSDK_OFFSET(0xB1140E0)
#define ACBFNEKJDNP_KFOPKEFOHFE_OFFSET UNITYSDK_OFFSET(0xB113AA0)
#define ACBFNEKJDNP_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xB1115D0)
#define ACBFNEKJDNP_NHEDINBLOIH_OFFSET UNITYSDK_OFFSET(0xB1136A0)
#define ACBFNEKJDNP_NHIDIHPLGHG_OFFSET UNITYSDK_OFFSET(0xB1149D0)
#define ACBFNEKJDNP_PJAPKCJPAFJ_OFFSET UNITYSDK_OFFSET(0xB115110)
#define ACBFNEKJDNP_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0xB115020)

inline static constexpr unsigned int ACBFNEKJDNP_TypeDefinitionIndex = 69622;

	class ACBFNEKJDNP : public ::MDILEMALGNC
	{
	public:
		::MGIJBEAPGFA* IJGMAOGLPMH; // 0x38
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::VCameraState, ::RPG::Client::ICameraFightState*>* HDMPHBKNFEG; // 0x40
		::System::Collections::Generic::List_1<::RPG::Client::CameraFightStateCommonConfig*>* ENNHPMKLEMG; // 0x48
		::System::Int32 OAIPLAHOEEK; // 0x50
		::System::Single POPIILBCAHE; // 0x54
		::RPG::GameCore::VCameraState GCKCLKLHAOM; // 0x58
		::Cinemachine::CinemachineBlendDefinition_Style NEBFPFNNEDG; // 0x5C
		::System::Single BHEOFLPGHEO; // 0x60
		::System::Single CAAHOEEJNMN; // 0x64
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACBFNEKJDNP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::RPG::Client::PipelineCameraEngine* a1, ::RPG::Client::CameraModuleConfigCollection* a2, ::RPG::Client::PipelineCameraGlobalConfig* a3, ::RPG::Client::CameraDataAndFlags* a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::Client::CameraModuleConfigCollection*, ::RPG::Client::PipelineCameraGlobalConfig*, ::RPG::Client::CameraDataAndFlags*))((::PBYTE)hIl2Cpp + ACBFNEKJDNP_CTOR_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void KPJGDHLENIP(::RPG::Client::PipelineCameraEngine* a1, ::RPG::Client::CameraModuleConfigCollection* a2, ::RPG::Client::PipelineCameraGlobalConfig* a3, ::RPG::Client::CameraDataAndFlags* a4, ::RPG::Client::CameraModuleType a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::Client::CameraModuleConfigCollection*, ::RPG::Client::PipelineCameraGlobalConfig*, ::RPG::Client::CameraDataAndFlags*, ::RPG::Client::CameraModuleType))((::PBYTE)hIl2Cpp + ACBFNEKJDNP_KPJGDHLENIP_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Boolean NHEDINBLOIH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ACBFNEKJDNP_NHEDINBLOIH_OFFSET))(this);
		}

		::System::Void KFOPKEFOHFE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACBFNEKJDNP_KFOPKEFOHFE_OFFSET))(this);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACBFNEKJDNP_PJPFIHFAHGO_OFFSET))(this);
		}

		::System::Void KDKNJIJOLME(::RPG::Client::CameraNormalConfigData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CameraNormalConfigData*))((::PBYTE)hIl2Cpp + ACBFNEKJDNP_KDKNJIJOLME_OFFSET))(this, a1);
		}

		::RPG::Client::ICameraFightState* PJAPKCJPAFJ(::RPG::GameCore::VCameraState a1)
		{
			return ((::RPG::Client::ICameraFightState*(*)(::PVOID, ::RPG::GameCore::VCameraState))((::PBYTE)hIl2Cpp + ACBFNEKJDNP_PJAPKCJPAFJ_OFFSET))(this, a1);
		}

		::System::Void FOGKIMNNLLG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACBFNEKJDNP_FOGKIMNNLLG_OFFSET))(this);
		}

		::System::Void APNNEEJJPHA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACBFNEKJDNP_APNNEEJJPHA_OFFSET))(this);
		}

		::System::Void NHIDIHPLGHG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACBFNEKJDNP_NHIDIHPLGHG_OFFSET))(this);
		}

	};
