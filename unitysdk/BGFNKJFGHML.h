#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MDILEMALGNC.h"
#include "unitysdk/RPG/Client/CameraModuleType.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
namespace RPG::Client { class CameraDataAndFlags; }
namespace RPG::Client { class CameraModuleConfigCollection; }
namespace RPG::Client { class PipelineCameraEngine; }
namespace RPG::Client { class PipelineCameraGlobalConfig; }
namespace RPG::Client { class SmoothResultModuleConfig; }

#define BGFNKJFGHML_ACELCCCLGAI_OFFSET UNITYSDK_OFFSET(0xB184630)
#define BGFNKJFGHML_BPBBFFNKDLH_OFFSET UNITYSDK_OFFSET(0xB184EB0)
#define BGFNKJFGHML_CCTOR_OFFSET UNITYSDK_OFFSET(0xB184F90)
#define BGFNKJFGHML_CTOR_1_OFFSET UNITYSDK_OFFSET(0xB1842E0)
#define BGFNKJFGHML_CTOR_OFFSET UNITYSDK_OFFSET(0xB1842D0)
#define BGFNKJFGHML_KFOPKEFOHFE_OFFSET UNITYSDK_OFFSET(0xB184710)
#define BGFNKJFGHML_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xB184440)
#define BGFNKJFGHML_KPODANDMBMH_OFFSET UNITYSDK_OFFSET(0xB184570)
#define BGFNKJFGHML_NHEDINBLOIH_OFFSET UNITYSDK_OFFSET(0xB184680)
#define BGFNKJFGHML_NLCLHECPCIB_OFFSET UNITYSDK_OFFSET(0xB1845C0)
#define BGFNKJFGHML_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0xB184F50)

inline static constexpr unsigned int BGFNKJFGHML_TypeDefinitionIndex = 69650;

	class BGFNKJFGHML : public ::MDILEMALGNC
	{
	public:
		::RPG::Client::SmoothResultModuleConfig* BAKFOPDBNBM; // 0x38
		::System::Nullable_1<::System::Single> LDBGNKGNBEP; // 0x40
		::System::Boolean MAMOEGLPJBK; // 0x48
		static ::Il2CppArray<::UnityEngine::RaycastHit>** StaticGet_FNKFEHPKLFL()
		{
			return (::Il2CppArray<::UnityEngine::RaycastHit>**)UnitySDK::FromName("", "BGFNKJFGHML")->GetStaticField(0x6E870);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGFNKJFGHML_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::RPG::Client::PipelineCameraEngine* a1, ::RPG::Client::CameraModuleConfigCollection* a2, ::RPG::Client::PipelineCameraGlobalConfig* a3, ::RPG::Client::CameraDataAndFlags* a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::Client::CameraModuleConfigCollection*, ::RPG::Client::PipelineCameraGlobalConfig*, ::RPG::Client::CameraDataAndFlags*))((::PBYTE)hIl2Cpp + BGFNKJFGHML_CTOR_1_OFFSET))(this, a1, a2, a3, a4);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BGFNKJFGHML_CCTOR_OFFSET))();
		}

		::System::Void KPJGDHLENIP(::RPG::Client::PipelineCameraEngine* a1, ::RPG::Client::CameraModuleConfigCollection* a2, ::RPG::Client::PipelineCameraGlobalConfig* a3, ::RPG::Client::CameraDataAndFlags* a4, ::RPG::Client::CameraModuleType a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::Client::CameraModuleConfigCollection*, ::RPG::Client::PipelineCameraGlobalConfig*, ::RPG::Client::CameraDataAndFlags*, ::RPG::Client::CameraModuleType))((::PBYTE)hIl2Cpp + BGFNKJFGHML_KPJGDHLENIP_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void KPODANDMBMH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BGFNKJFGHML_KPODANDMBMH_OFFSET))(this, a1);
		}

		::System::Void NLCLHECPCIB(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BGFNKJFGHML_NLCLHECPCIB_OFFSET))(this, a1);
		}

		::System::Void ACELCCCLGAI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGFNKJFGHML_ACELCCCLGAI_OFFSET))(this);
		}

		::System::Boolean NHEDINBLOIH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BGFNKJFGHML_NHEDINBLOIH_OFFSET))(this);
		}

		::System::Void KFOPKEFOHFE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGFNKJFGHML_KFOPKEFOHFE_OFFSET))(this);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGFNKJFGHML_PJPFIHFAHGO_OFFSET))(this);
		}

		::System::Single BPBBFFNKDLH()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + BGFNKJFGHML_BPBBFFNKDLH_OFFSET))(this);
		}

	};
