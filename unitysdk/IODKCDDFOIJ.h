#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/PipelineCamera/CameraVariableFetchContext_1.h"
#include "unitysdk/PipelineCamera/ScopedDelegateHandle.h"
#include "unitysdk/UnityEngine/Vector2.h"

class CAPAFILOMGC;
class NIBLLGOJFHK;
namespace MoleMole::Cameras { class CameraTrackBlending; }
namespace MoleMole::Cameras { class OverrideConfigSideScrollingCamera; }
namespace MoleMole::Cameras { class SideScrollingCameraRuntimeParam; }
namespace MoleMole::Config { class ConfigSideScrollingCamera; }
namespace MoleMole::Utils { template <typename T> class TaskBasedEventCollection_1; }
namespace PipelineCamera { class CameraCommandSpawnSubModules; }
namespace PipelineCamera { class CameraCommandUnSpawnSubModules; }
namespace PipelineCamera { template <typename T> class CameraVariableSubModule_1; }
namespace PipelineCamera { template <typename T> class ICameraSubModule_1; }
namespace System { class String; }

#define IODKCDDFOIJ_AJLDEODAPME_OFFSET UNITYSDK_OFFSET(0x160BDF10)
#define IODKCDDFOIJ_ANJAOOMDFLA_OFFSET UNITYSDK_OFFSET(0x160BEF60)
#define IODKCDDFOIJ_BMOANBILIAB_OFFSET UNITYSDK_OFFSET(0x160BC7C0)
#define IODKCDDFOIJ_CFHBPGGKCFN_OFFSET UNITYSDK_OFFSET(0x160BBF10)
#define IODKCDDFOIJ_COKNIICCODC_OFFSET UNITYSDK_OFFSET(0x160BF3F0)
#define IODKCDDFOIJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0x160BBF80)
#define IODKCDDFOIJ_EBJMJDJFGFN_OFFSET UNITYSDK_OFFSET(0x160BEDD0)
#define IODKCDDFOIJ_FFKHDOBKMDB_OFFSET UNITYSDK_OFFSET(0x160BF3E0)
#define IODKCDDFOIJ_GCCMMAFCBHO_OFFSET UNITYSDK_OFFSET(0x160BC120)
#define IODKCDDFOIJ_GIAOBHOJCDP_OFFSET UNITYSDK_OFFSET(0x160BF670)
#define IODKCDDFOIJ_HBKKJFKCOOH_OFFSET UNITYSDK_OFFSET(0x160BCD40)
#define IODKCDDFOIJ_HHIDJDAACGB_OFFSET UNITYSDK_OFFSET(0x160BCE10)
#define IODKCDDFOIJ_IBACAFKKHIN_OFFSET UNITYSDK_OFFSET(0x160BFE10)
#define IODKCDDFOIJ_ICMNBPNCFCF_OFFSET UNITYSDK_OFFSET(0x160BC6E0)
#define IODKCDDFOIJ_JHCGNPHEGFG_OFFSET UNITYSDK_OFFSET(0x160BDAC0)
#define IODKCDDFOIJ_JLCEIGOFDBJ_OFFSET UNITYSDK_OFFSET(0x160BC750)
#define IODKCDDFOIJ_JLFNAHONPGB_OFFSET UNITYSDK_OFFSET(0x160BC300)
#define IODKCDDFOIJ_KHMCJABBHFK_OFFSET UNITYSDK_OFFSET(0x160BED10)
#define IODKCDDFOIJ_KIFMODHCOKO_OFFSET UNITYSDK_OFFSET(0x160BFE90)
#define IODKCDDFOIJ_LHKFGCLMFCA_OFFSET UNITYSDK_OFFSET(0x160BF610)
#define IODKCDDFOIJ_MCBAHLHLBPB_OFFSET UNITYSDK_OFFSET(0x160BDF80)
#define IODKCDDFOIJ_MNIDNNMFJIL_OFFSET UNITYSDK_OFFSET(0x160BCDD0)
#define IODKCDDFOIJ_OJHPHFKOGNH_OFFSET UNITYSDK_OFFSET(0x160BBEA0)
#define IODKCDDFOIJ_OOKNJDAJDLJ_OFFSET UNITYSDK_OFFSET(0x160BF390)
#define IODKCDDFOIJ_PGOCGHBGGJB_OFFSET UNITYSDK_OFFSET(0x160BF8E0)
#define IODKCDDFOIJ_PJJAHPIOAEC_OFFSET UNITYSDK_OFFSET(0x160BD5F0)
#define IODKCDDFOIJ_PODJBKEIJIJ_OFFSET UNITYSDK_OFFSET(0x160BCE80)
#define IODKCDDFOIJ_POJACFCIPIE_OFFSET UNITYSDK_OFFSET(0x160BFED0)
#define IODKCDDFOIJ__CCTOR_OFFSET UNITYSDK_OFFSET(0x160BC110)
#define IODKCDDFOIJ__CTOR_OFFSET UNITYSDK_OFFSET(0x160BB930)

inline static constexpr unsigned int IODKCDDFOIJ_TypeDefinitionIndex = 48139;

class IODKCDDFOIJ : public ::System::Object
{
public:
	static ::System::UInt32* StaticGet_IAOEPPBDCLK()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(IODKCDDFOIJ_TypeDefinitionIndex)->GetStaticField(0x12700);
	}
	// static const ::NBGELMBGLKD ACHEIANAGJE = 0x1; // 0x0
	::MoleMole::Cameras::SideScrollingCameraRuntimeParam* EKJPNOGFGEC; // 0x10
	::CAPAFILOMGC* LCIOJOKGJOJ; // 0x18
	::MoleMole::Cameras::CameraTrackBlending* EFMBPCODIGD; // 0x20
	::MoleMole::Cameras::CameraTrackBlending* DDDNAEGLKEL; // 0x28
	::PipelineCamera::CameraVariableSubModule_1<::PipelineCamera::WorldBasicCameraData>* AKMPIKKEOAP; // 0x30
	::MoleMole::EntityHandle DNCDPCFHJNM; // 0x38
	::NIBLLGOJFHK* OMDKNGOHONF; // 0x48
	::MoleMole::Config::ConfigSideScrollingCamera* CEJENBBHBBG; // 0x50
	::MoleMole::Utils::TaskBasedEventCollection_1<::System::Object*>* NNKIDGCEACP; // 0x58
	::System::String* HFEIPMCNCNI; // 0x60
	::MoleMole::Cameras::OverrideConfigSideScrollingCamera* IKCKDPJBPLJ; // 0x68
	::System::UInt32 OPEJLEBMPAI; // 0x70
	::System::Single IADLINGMOIB; // 0x74
	::UnityEngine::Vector3 JLDLFBCAIJA; // 0x78
	::UnityEngine::Vector3 AGCIJFKILPE; // 0x84
	::UnityEngine::Vector3 AKPOODFNFEH; // 0x90
	::UnityEngine::Vector3 KBJLHCNKLPI; // 0x9C
	::System::Boolean LPAHKDLPPPI; // 0xA8
	::System::Byte _padding0[0x3];
	::System::Single KOBNOGNIECK; // 0xAC
	::UnityEngine::Vector3 HJGGANFLFDH; // 0xB0
	::System::Single EBKEPONBKCI; // 0xBC
	::UnityEngine::Vector3 FLLKKBJGGII; // 0xC0
	::System::Single EMPHAPMDNFP; // 0xCC
	::System::Single ABIGJCCKHIH; // 0xD0

	::System::Void _ctor(::MoleMole::Config::ConfigSideScrollingCamera*& DFMKILICPFB, ::MoleMole::Cameras::SideScrollingCameraRuntimeParam*& AAFDKOBGGID, ::MoleMole::Cameras::OverrideConfigSideScrollingCamera*& EKPAIOGJEPO, ::System::String*& AELLPLBJELA)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigSideScrollingCamera*&, ::MoleMole::Cameras::SideScrollingCameraRuntimeParam*&, ::MoleMole::Cameras::OverrideConfigSideScrollingCamera*&, ::System::String*&))((::PBYTE)hIl2Cpp + IODKCDDFOIJ__CTOR_OFFSET))(this, DFMKILICPFB, AAFDKOBGGID, EKPAIOGJEPO, AELLPLBJELA);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IODKCDDFOIJ__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IODKCDDFOIJ_DISPOSE_OFFSET))(this);
	}

	::System::Void GCCMMAFCBHO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IODKCDDFOIJ_GCCMMAFCBHO_OFFSET))(this);
	}

	::System::Void JLFNAHONPGB(::PipelineCamera::CameraCommandSpawnSubModules*& INBNCFGMKCL, ::PipelineCamera::CameraCommandUnSpawnSubModules*& MJJIOHKLAKK)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraCommandSpawnSubModules*&, ::PipelineCamera::CameraCommandUnSpawnSubModules*&))((::PBYTE)hIl2Cpp + IODKCDDFOIJ_JLFNAHONPGB_OFFSET))(this, INBNCFGMKCL, MJJIOHKLAKK);
	}

	::System::Void BMOANBILIAB(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IODKCDDFOIJ_BMOANBILIAB_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Void HBKKJFKCOOH(::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* FKMJKPGNCJI)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*))((::PBYTE)hIl2Cpp + IODKCDDFOIJ_HBKKJFKCOOH_OFFSET))(this, FKMJKPGNCJI);
	}

	::MoleMole::Cameras::CameraTrackBlending* MNIDNNMFJIL()
	{
		return ((::MoleMole::Cameras::CameraTrackBlending*(*)(::PVOID))((::PBYTE)hIl2Cpp + IODKCDDFOIJ_MNIDNNMFJIL_OFFSET))(this);
	}

	::System::Single HHIDJDAACGB()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + IODKCDDFOIJ_HHIDJDAACGB_OFFSET))(this);
	}

	::PipelineCamera::WorldBasicCameraData PODJBKEIJIJ(::System::Single PMNLNNGEIFM)
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IODKCDDFOIJ_PODJBKEIJIJ_OFFSET))(this, PMNLNNGEIFM);
	}

	::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* KHMCJABBHFK()
	{
		return ((::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IODKCDDFOIJ_KHMCJABBHFK_OFFSET))(this);
	}

	::MoleMole::Cameras::CameraTrackBlending* JLCEIGOFDBJ()
	{
		return ((::MoleMole::Cameras::CameraTrackBlending*(*)(::PVOID))((::PBYTE)hIl2Cpp + IODKCDDFOIJ_JLCEIGOFDBJ_OFFSET))(this);
	}

	::PipelineCamera::ScopedDelegateHandle ANJAOOMDFLA()
	{
		return ((::PipelineCamera::ScopedDelegateHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + IODKCDDFOIJ_ANJAOOMDFLA_OFFSET))(this);
	}

	::System::Void OOKNJDAJDLJ(::UnityEngine::Vector3& FCNPOKNKMOD)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + IODKCDDFOIJ_OOKNJDAJDLJ_OFFSET))(this, FCNPOKNKMOD);
	}

	::System::Void JHCGNPHEGFG(::UnityEngine::Vector3 FCNPOKNKMOD, ::UnityEngine::Vector2& ILOHHLNGEHM, ::System::Boolean& LIOKMMHENJG, ::System::Boolean& KDBHFIGIABC)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector2&, ::System::Boolean&, ::System::Boolean&))((::PBYTE)hIl2Cpp + IODKCDDFOIJ_JHCGNPHEGFG_OFFSET))(this, FCNPOKNKMOD, ILOHHLNGEHM, LIOKMMHENJG, KDBHFIGIABC);
	}

	::System::String* FFKHDOBKMDB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IODKCDDFOIJ_FFKHDOBKMDB_OFFSET))(this);
	}

	static ::IODKCDDFOIJ* COKNIICCODC(::MoleMole::Config::ConfigSideScrollingCamera*& DFMKILICPFB, ::MoleMole::Cameras::SideScrollingCameraRuntimeParam*& AAFDKOBGGID, ::MoleMole::Cameras::OverrideConfigSideScrollingCamera*& EKPAIOGJEPO, ::System::String*& AELLPLBJELA)
	{
		return ((::IODKCDDFOIJ*(*)(::MoleMole::Config::ConfigSideScrollingCamera*&, ::MoleMole::Cameras::SideScrollingCameraRuntimeParam*&, ::MoleMole::Cameras::OverrideConfigSideScrollingCamera*&, ::System::String*&))((::PBYTE)hIl2Cpp + IODKCDDFOIJ_COKNIICCODC_OFFSET))(DFMKILICPFB, AAFDKOBGGID, EKPAIOGJEPO, AELLPLBJELA);
	}

	::System::Void LHKFGCLMFCA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IODKCDDFOIJ_LHKFGCLMFCA_OFFSET))(this);
	}

	::PipelineCamera::WorldBasicCameraData GIAOBHOJCDP(::PipelineCamera::CameraVariableFetchContext_1<::PipelineCamera::WorldBasicCameraData> ILNDOANENID)
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::PipelineCamera::CameraVariableFetchContext_1<::PipelineCamera::WorldBasicCameraData>))((::PBYTE)hIl2Cpp + IODKCDDFOIJ_GIAOBHOJCDP_OFFSET))(this, ILNDOANENID);
	}

	::System::Void PGOCGHBGGJB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IODKCDDFOIJ_PGOCGHBGGJB_OFFSET))(this);
	}

	::UnityEngine::Vector3 IBACAFKKHIN()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + IODKCDDFOIJ_IBACAFKKHIN_OFFSET))(this);
	}

	::System::Single AJLDEODAPME()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + IODKCDDFOIJ_AJLDEODAPME_OFFSET))(this);
	}

	::System::Void EBJMJDJFGFN(::PipelineCamera::CameraVariableSubModule_1<::PipelineCamera::WorldBasicCameraData>* FKMJKPGNCJI)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraVariableSubModule_1<::PipelineCamera::WorldBasicCameraData>*))((::PBYTE)hIl2Cpp + IODKCDDFOIJ_EBJMJDJFGFN_OFFSET))(this, FKMJKPGNCJI);
	}

	::Cysharp::Threading::Tasks::UniTaskVoid CFHBPGGKCFN()
	{
		return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID))((::PBYTE)hIl2Cpp + IODKCDDFOIJ_CFHBPGGKCFN_OFFSET))(this);
	}

	::System::Single OJHPHFKOGNH()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + IODKCDDFOIJ_OJHPHFKOGNH_OFFSET))(this);
	}

	::MoleMole::Cameras::CameraTrackBlending* KIFMODHCOKO()
	{
		return ((::MoleMole::Cameras::CameraTrackBlending*(*)(::PVOID))((::PBYTE)hIl2Cpp + IODKCDDFOIJ_KIFMODHCOKO_OFFSET))(this);
	}

	::UnityEngine::Vector3 PJJAHPIOAEC()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + IODKCDDFOIJ_PJJAHPIOAEC_OFFSET))(this);
	}

	::System::Void MCBAHLHLBPB(::PipelineCamera::WorldBasicCameraData& IIHGNBNLLNG)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::WorldBasicCameraData&))((::PBYTE)hIl2Cpp + IODKCDDFOIJ_MCBAHLHLBPB_OFFSET))(this, IIHGNBNLLNG);
	}

	::MoleMole::Cameras::CameraTrackBlending* ICMNBPNCFCF()
	{
		return ((::MoleMole::Cameras::CameraTrackBlending*(*)(::PVOID))((::PBYTE)hIl2Cpp + IODKCDDFOIJ_ICMNBPNCFCF_OFFSET))(this);
	}

	::MoleMole::Cameras::SideScrollingCameraRuntimeParam* POJACFCIPIE()
	{
		return ((::MoleMole::Cameras::SideScrollingCameraRuntimeParam*(*)(::PVOID))((::PBYTE)hIl2Cpp + IODKCDDFOIJ_POJACFCIPIE_OFFSET))(this);
	}
};
