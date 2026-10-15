#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BAMIIPGHNIH;
class EFMIDMBKAJJ;
class FBNOEBEIKJN;
class MEJAGBFOBCA;
namespace RPG::Client { class CameraDataAndFlags; }
namespace RPG::Client { class CameraModuleConfigCollection; }
namespace RPG::Client { class PipelineCameraEngine; }
namespace RPG::Client { class PipelineCameraGlobalConfig; }
namespace System { class String; }

#define KFGNLEGMMNC_AGJIOFDJBNP_OFFSET UNITYSDK_OFFSET(0xB398C40)
#define KFGNLEGMMNC_IAKACEJOBKM_OFFSET UNITYSDK_OFFSET(0xB399030)
#define KFGNLEGMMNC_IDLNIPDPKEI_OFFSET UNITYSDK_OFFSET(0xB398EE0)
#define KFGNLEGMMNC_KPFKKLMJBOA_OFFSET UNITYSDK_OFFSET(0xB398D90)

inline static constexpr unsigned int KFGNLEGMMNC_TypeDefinitionIndex = 69733;

	class KFGNLEGMMNC : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_NDFMCFDAHFM()
		{
			return (::System::Int32*)UnitySDK::FromName("", "KFGNLEGMMNC")->GetStaticField(0xF930);
		}

		static ::MEJAGBFOBCA* AGJIOFDJBNP(::RPG::Client::PipelineCameraEngine* a1, ::RPG::Client::PipelineCameraGlobalConfig* a2, ::RPG::Client::CameraModuleConfigCollection* a3, ::RPG::Client::CameraDataAndFlags* a4, ::System::String* a5, ::System::String* a6, ::System::Int32 a7)
		{
			return ((::MEJAGBFOBCA*(*)(::RPG::Client::PipelineCameraEngine*, ::RPG::Client::PipelineCameraGlobalConfig*, ::RPG::Client::CameraModuleConfigCollection*, ::RPG::Client::CameraDataAndFlags*, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + KFGNLEGMMNC_AGJIOFDJBNP_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		static ::FBNOEBEIKJN* KPFKKLMJBOA(::RPG::Client::PipelineCameraEngine* a1, ::RPG::Client::PipelineCameraGlobalConfig* a2, ::RPG::Client::CameraModuleConfigCollection* a3, ::RPG::Client::CameraDataAndFlags* a4, ::System::String* a5, ::System::String* a6, ::System::Int32 a7)
		{
			return ((::FBNOEBEIKJN*(*)(::RPG::Client::PipelineCameraEngine*, ::RPG::Client::PipelineCameraGlobalConfig*, ::RPG::Client::CameraModuleConfigCollection*, ::RPG::Client::CameraDataAndFlags*, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + KFGNLEGMMNC_KPFKKLMJBOA_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		static ::EFMIDMBKAJJ* IDLNIPDPKEI(::RPG::Client::PipelineCameraEngine* a1, ::RPG::Client::PipelineCameraGlobalConfig* a2, ::RPG::Client::CameraModuleConfigCollection* a3, ::RPG::Client::CameraDataAndFlags* a4, ::System::String* a5, ::System::String* a6, ::System::Int32 a7)
		{
			return ((::EFMIDMBKAJJ*(*)(::RPG::Client::PipelineCameraEngine*, ::RPG::Client::PipelineCameraGlobalConfig*, ::RPG::Client::CameraModuleConfigCollection*, ::RPG::Client::CameraDataAndFlags*, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + KFGNLEGMMNC_IDLNIPDPKEI_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		static ::BAMIIPGHNIH* IAKACEJOBKM(::RPG::Client::PipelineCameraEngine* a1, ::RPG::Client::PipelineCameraGlobalConfig* a2, ::RPG::Client::CameraModuleConfigCollection* a3, ::RPG::Client::CameraDataAndFlags* a4, ::System::String* a5, ::System::String* a6, ::System::Int32 a7)
		{
			return ((::BAMIIPGHNIH*(*)(::RPG::Client::PipelineCameraEngine*, ::RPG::Client::PipelineCameraGlobalConfig*, ::RPG::Client::CameraModuleConfigCollection*, ::RPG::Client::CameraDataAndFlags*, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + KFGNLEGMMNC_IAKACEJOBKM_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

	};
