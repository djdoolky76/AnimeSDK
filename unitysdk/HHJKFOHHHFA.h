#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MDILEMALGNC.h"
#include "unitysdk/RPG/Client/CameraModuleType.h"
namespace RPG::Client { class CameraBlendCurve; }
namespace RPG::Client { class CameraDataAndFlags; }
namespace RPG::Client { class CameraModuleConfigCollection; }
namespace RPG::Client { class PipelineCameraEngine; }
namespace RPG::Client { class PipelineCameraGlobalConfig; }
namespace System { class String; }

#define HHJKFOHHHFA_CLECCLHGGHJ_OFFSET UNITYSDK_OFFSET(0x16C1CF40)
#define HHJKFOHHHFA_CTOR_OFFSET UNITYSDK_OFFSET(0x16C1C840)
#define HHJKFOHHHFA_INLLEDBDKED_OFFSET UNITYSDK_OFFSET(0x16C1CB40)
#define HHJKFOHHHFA_KFOPKEFOHFE_OFFSET UNITYSDK_OFFSET(0x16C1CAC0)
#define HHJKFOHHHFA_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x16C1C9A0)
#define HHJKFOHHHFA_NHEDINBLOIH_OFFSET UNITYSDK_OFFSET(0x16C1CA50)
#define HHJKFOHHHFA_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0x16C1D080)

inline static constexpr unsigned int HHJKFOHHHFA_TypeDefinitionIndex = 71591;

	class HHJKFOHHHFA : public ::MDILEMALGNC
	{
	public:
		::System::String* NDDBLBKDHBL; // 0x38
		::RPG::Client::CameraBlendCurve* GGOKEGCNMFK; // 0x40
		::System::Single BKCEJCNPEPL; // 0x48
		::System::Void _ctor(::RPG::Client::PipelineCameraEngine* a1, ::RPG::Client::CameraModuleConfigCollection* a2, ::RPG::Client::PipelineCameraGlobalConfig* a3, ::RPG::Client::CameraDataAndFlags* a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::Client::CameraModuleConfigCollection*, ::RPG::Client::PipelineCameraGlobalConfig*, ::RPG::Client::CameraDataAndFlags*))((::PBYTE)hIl2Cpp + HHJKFOHHHFA_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void KPJGDHLENIP(::RPG::Client::PipelineCameraEngine* a1, ::RPG::Client::CameraModuleConfigCollection* a2, ::RPG::Client::PipelineCameraGlobalConfig* a3, ::RPG::Client::CameraDataAndFlags* a4, ::RPG::Client::CameraModuleType a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::Client::CameraModuleConfigCollection*, ::RPG::Client::PipelineCameraGlobalConfig*, ::RPG::Client::CameraDataAndFlags*, ::RPG::Client::CameraModuleType))((::PBYTE)hIl2Cpp + HHJKFOHHHFA_KPJGDHLENIP_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Boolean NHEDINBLOIH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HHJKFOHHHFA_NHEDINBLOIH_OFFSET))(this);
		}

		::System::Void KFOPKEFOHFE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHJKFOHHHFA_KFOPKEFOHFE_OFFSET))(this);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHJKFOHHHFA_PJPFIHFAHGO_OFFSET))(this);
		}

		::System::Void INLLEDBDKED()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHJKFOHHHFA_INLLEDBDKED_OFFSET))(this);
		}

		::System::Void CLECCLHGGHJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHJKFOHHHFA_CLECCLHGGHJ_OFFSET))(this);
		}

	};
