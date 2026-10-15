#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MDILEMALGNC.h"
#include "unitysdk/RPG/Client/CameraModuleType.h"
#include "unitysdk/RPG/GameCore/CharacterVisibleReason.h"
namespace RPG::Client { class CameraDataAndFlags; }
namespace RPG::Client { class CameraModuleConfigCollection; }
namespace RPG::Client { class PipelineCameraEngine; }
namespace RPG::Client { class PipelineCameraGlobalConfig; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EENIGOEJCLL_BNPBGLDBHPF_OFFSET UNITYSDK_OFFSET(0x13A401E0)
#define EENIGOEJCLL_CCTOR_OFFSET UNITYSDK_OFFSET(0x13A40560)
#define EENIGOEJCLL_CKFFINIOJGG_OFFSET UNITYSDK_OFFSET(0x13A40440)
#define EENIGOEJCLL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x13A3F660)
#define EENIGOEJCLL_CTOR_OFFSET UNITYSDK_OFFSET(0x13A3F650)
#define EENIGOEJCLL_DIDEEJDPLCN_OFFSET UNITYSDK_OFFSET(0x13A40310)
#define EENIGOEJCLL_KFOPKEFOHFE_OFFSET UNITYSDK_OFFSET(0x13A3FBA0)
#define EENIGOEJCLL_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x13A3F7C0)
#define EENIGOEJCLL_NHEDINBLOIH_OFFSET UNITYSDK_OFFSET(0x13A3F970)
#define EENIGOEJCLL_OPJDBMEIJJP_OFFSET UNITYSDK_OFFSET(0x13A400D0)
#define EENIGOEJCLL_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0x13A3FAC0)

inline static constexpr unsigned int EENIGOEJCLL_TypeDefinitionIndex = 69625;

	class EENIGOEJCLL : public ::MDILEMALGNC
	{
	public:
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* KJDHLNAFMKD; // 0x38
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* FADMFMCJAHA; // 0x40
		static ::Il2CppArray<::RPG::GameCore::CharacterVisibleReason>** StaticGet_IMJNFFNJAHM()
		{
			return (::Il2CppArray<::RPG::GameCore::CharacterVisibleReason>**)UnitySDK::FromName("", "EENIGOEJCLL")->GetStaticField(0x70040);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EENIGOEJCLL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::RPG::Client::PipelineCameraEngine* a1, ::RPG::Client::CameraModuleConfigCollection* a2, ::RPG::Client::PipelineCameraGlobalConfig* a3, ::RPG::Client::CameraDataAndFlags* a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::Client::CameraModuleConfigCollection*, ::RPG::Client::PipelineCameraGlobalConfig*, ::RPG::Client::CameraDataAndFlags*))((::PBYTE)hIl2Cpp + EENIGOEJCLL_CTOR_1_OFFSET))(this, a1, a2, a3, a4);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EENIGOEJCLL_CCTOR_OFFSET))();
		}

		::System::Void KPJGDHLENIP(::RPG::Client::PipelineCameraEngine* a1, ::RPG::Client::CameraModuleConfigCollection* a2, ::RPG::Client::PipelineCameraGlobalConfig* a3, ::RPG::Client::CameraDataAndFlags* a4, ::RPG::Client::CameraModuleType a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::Client::CameraModuleConfigCollection*, ::RPG::Client::PipelineCameraGlobalConfig*, ::RPG::Client::CameraDataAndFlags*, ::RPG::Client::CameraModuleType))((::PBYTE)hIl2Cpp + EENIGOEJCLL_KPJGDHLENIP_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Boolean NHEDINBLOIH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EENIGOEJCLL_NHEDINBLOIH_OFFSET))(this);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EENIGOEJCLL_PJPFIHFAHGO_OFFSET))(this);
		}

		::System::Void KFOPKEFOHFE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EENIGOEJCLL_KFOPKEFOHFE_OFFSET))(this);
		}

		static ::System::Boolean BNPBGLDBHPF(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + EENIGOEJCLL_BNPBGLDBHPF_OFFSET))(a1);
		}

		::System::Void OPJDBMEIJJP(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2, ::RPG::GameCore::CharacterVisibleReason a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean, ::RPG::GameCore::CharacterVisibleReason))((::PBYTE)hIl2Cpp + EENIGOEJCLL_OPJDBMEIJJP_OFFSET))(this, a1, a2, a3);
		}

		::System::Void DIDEEJDPLCN(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EENIGOEJCLL_DIDEEJDPLCN_OFFSET))(this, a1);
		}

		::System::Void CKFFINIOJGG(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EENIGOEJCLL_CKFFINIOJGG_OFFSET))(this, a1);
		}

	};
