#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AAHGGNHDBMN.h"
#include "unitysdk/MOCMDPMBPOM.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/PipelineCamera/CameraVariableFetchContext_1.h"
#include "unitysdk/PipelineCamera/ScopedDelegateHandle.h"

namespace MoleMole::Cameras { class AvatarLayoutCameraConfig; }
namespace MoleMole::Utils { template <typename T> class TaskBasedEventCollection_1; }
namespace PipelineCamera { class CameraCommandSpawnSubModules; }
namespace PipelineCamera { class CameraCommandUnSpawnSubModules; }
namespace PipelineCamera { class ICameraDataBlender; }
namespace PipelineCamera { template <typename T> class CameraVariableSubModule_1; }
namespace PipelineCamera { template <typename T> class ICameraSubModuleBuilder_1; }
namespace PipelineCamera::Blender { class DefaultBlender; }
namespace System { class String; }

#define LIGMENPEBBB_ANBDOLDIOFK_OFFSET UNITYSDK_OFFSET(0x11F18270)
#define LIGMENPEBBB_ANJAOOMDFLA_OFFSET UNITYSDK_OFFSET(0x11F184E0)
#define LIGMENPEBBB_BHPACPHOIEI_OFFSET UNITYSDK_OFFSET(0x11F17770)
#define LIGMENPEBBB_CDIFHCKCOAF_OFFSET UNITYSDK_OFFSET(0x11F173D0)
#define LIGMENPEBBB_CFHBPGGKCFN_OFFSET UNITYSDK_OFFSET(0x11F15AF0)
#define LIGMENPEBBB_COKNIICCODC_OFFSET UNITYSDK_OFFSET(0x11F18920)
#define LIGMENPEBBB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11F15B60)
#define LIGMENPEBBB_DJNFKCKOFBA_OFFSET UNITYSDK_OFFSET(0x11F191C0)
#define LIGMENPEBBB_EBJMJDJFGFN_OFFSET UNITYSDK_OFFSET(0x11F18C50)
#define LIGMENPEBBB_GIAOBHOJCDP_OFFSET UNITYSDK_OFFSET(0x11F189E0)
#define LIGMENPEBBB_JLFNAHONPGB_OFFSET UNITYSDK_OFFSET(0x11F16F00)
#define LIGMENPEBBB_KAGPBNPHNOB_OFFSET UNITYSDK_OFFSET(0x11F18F30)
#define LIGMENPEBBB_LOPAIJCMDFL_OFFSET UNITYSDK_OFFSET(0x11F172D0)
#define LIGMENPEBBB_MCBAHLHLBPB_OFFSET UNITYSDK_OFFSET(0x11F162E0)
#define LIGMENPEBBB_NLHLELABAFE_OFFSET UNITYSDK_OFFSET(0x11F18790)
#define LIGMENPEBBB_PODJBKEIJIJ_OFFSET UNITYSDK_OFFSET(0x11F15D00)
#define LIGMENPEBBB__CCTOR_OFFSET UNITYSDK_OFFSET(0x11F15CF0)
#define LIGMENPEBBB__CTOR_OFFSET UNITYSDK_OFFSET(0x11F15880)

inline static constexpr unsigned int LIGMENPEBBB_TypeDefinitionIndex = 50622;

class LIGMENPEBBB : public ::System::Object
{
public:
	static ::System::UInt32* StaticGet_IAOEPPBDCLK()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(LIGMENPEBBB_TypeDefinitionIndex)->GetStaticField(0xE4E0);
	}
	// static const ::NBGELMBGLKD ACHEIANAGJE = 0x0; // 0x0
	::MOCMDPMBPOM DAAAEJDBNFI; // 0x10
	::MoleMole::Utils::TaskBasedEventCollection_1<::System::Object*>* NNKIDGCEACP; // 0x78
	::System::String* FIKGABHGLAA; // 0x80
	::PipelineCamera::CameraVariableSubModule_1<::PipelineCamera::WorldBasicCameraData>* AKMPIKKEOAP; // 0x88
	::PipelineCamera::Blender::DefaultBlender* EJLPIHOMGIB; // 0x90
	::MoleMole::Cameras::AvatarLayoutCameraConfig* CEJENBBHBBG; // 0x98
	::System::Single MCBPODGAACC; // 0xA0
	::System::UInt32 OPEJLEBMPAI; // 0xA4
	::UnityEngine::Vector3 PKCBPBNDPLA; // 0xA8
	::AAHGGNHDBMN NADHKMPMAGM; // 0xB4
	::System::Single OPHLDEGIOMN; // 0xB8
	::UnityEngine::Vector3 PCGPOJOMJCB; // 0xBC
	::System::Boolean LPAHKDLPPPI; // 0xC8
	::System::Boolean IBNMILFIBBG; // 0xC9

	::System::Void _ctor(::MoleMole::Cameras::AvatarLayoutCameraConfig*& DFMKILICPFB, ::MOCMDPMBPOM& AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Cameras::AvatarLayoutCameraConfig*&, ::MOCMDPMBPOM&))((::PBYTE)hIl2Cpp + LIGMENPEBBB__CTOR_OFFSET))(this, DFMKILICPFB, AAOCANGHBDG);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LIGMENPEBBB__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIGMENPEBBB_DISPOSE_OFFSET))(this);
	}

	::PipelineCamera::WorldBasicCameraData PODJBKEIJIJ(::System::Single PMNLNNGEIFM)
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LIGMENPEBBB_PODJBKEIJIJ_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Void JLFNAHONPGB(::PipelineCamera::CameraCommandSpawnSubModules*& INBNCFGMKCL, ::PipelineCamera::CameraCommandUnSpawnSubModules*& MJJIOHKLAKK)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraCommandSpawnSubModules*&, ::PipelineCamera::CameraCommandUnSpawnSubModules*&))((::PBYTE)hIl2Cpp + LIGMENPEBBB_JLFNAHONPGB_OFFSET))(this, INBNCFGMKCL, MJJIOHKLAKK);
	}

	::System::Void BHPACPHOIEI(::System::Boolean INJKDGGGJGK, ::System::Boolean JIHMBJNFBLC, ::System::Boolean DCDDHCKNDNF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + LIGMENPEBBB_BHPACPHOIEI_OFFSET))(this, INJKDGGGJGK, JIHMBJNFBLC, DCDDHCKNDNF);
	}

	::PipelineCamera::ICameraSubModuleBuilder_1<::PipelineCamera::WorldBasicCameraData>* LOPAIJCMDFL()
	{
		return ((::PipelineCamera::ICameraSubModuleBuilder_1<::PipelineCamera::WorldBasicCameraData>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LIGMENPEBBB_LOPAIJCMDFL_OFFSET))(this);
	}

	::System::Void ANBDOLDIOFK(::System::Single MJFHBLFHNJP, ::System::String* FNIKDBODLHK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + LIGMENPEBBB_ANBDOLDIOFK_OFFSET))(this, MJFHBLFHNJP, FNIKDBODLHK);
	}

	::PipelineCamera::ScopedDelegateHandle ANJAOOMDFLA()
	{
		return ((::PipelineCamera::ScopedDelegateHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + LIGMENPEBBB_ANJAOOMDFLA_OFFSET))(this);
	}

	::PipelineCamera::ICameraDataBlender* NLHLELABAFE(::PipelineCamera::ICameraDataBlender* PIIPCLCCOIG)
	{
		return ((::PipelineCamera::ICameraDataBlender*(*)(::PVOID, ::PipelineCamera::ICameraDataBlender*))((::PBYTE)hIl2Cpp + LIGMENPEBBB_NLHLELABAFE_OFFSET))(this, PIIPCLCCOIG);
	}

	static ::LIGMENPEBBB* COKNIICCODC(::MoleMole::Cameras::AvatarLayoutCameraConfig*& DFMKILICPFB, ::MOCMDPMBPOM& AAOCANGHBDG)
	{
		return ((::LIGMENPEBBB*(*)(::MoleMole::Cameras::AvatarLayoutCameraConfig*&, ::MOCMDPMBPOM&))((::PBYTE)hIl2Cpp + LIGMENPEBBB_COKNIICCODC_OFFSET))(DFMKILICPFB, AAOCANGHBDG);
	}

	::Cysharp::Threading::Tasks::UniTaskVoid CFHBPGGKCFN()
	{
		return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID))((::PBYTE)hIl2Cpp + LIGMENPEBBB_CFHBPGGKCFN_OFFSET))(this);
	}

	::PipelineCamera::WorldBasicCameraData GIAOBHOJCDP(::PipelineCamera::CameraVariableFetchContext_1<::PipelineCamera::WorldBasicCameraData> ILNDOANENID)
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::PipelineCamera::CameraVariableFetchContext_1<::PipelineCamera::WorldBasicCameraData>))((::PBYTE)hIl2Cpp + LIGMENPEBBB_GIAOBHOJCDP_OFFSET))(this, ILNDOANENID);
	}

	::System::Void MCBAHLHLBPB(::PipelineCamera::WorldBasicCameraData& GPBKDGGEBCF)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::WorldBasicCameraData&))((::PBYTE)hIl2Cpp + LIGMENPEBBB_MCBAHLHLBPB_OFFSET))(this, GPBKDGGEBCF);
	}

	::System::Void EBJMJDJFGFN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIGMENPEBBB_EBJMJDJFGFN_OFFSET))(this);
	}

	::PipelineCamera::ICameraDataBlender* KAGPBNPHNOB(::PipelineCamera::ICameraDataBlender* PIIPCLCCOIG)
	{
		return ((::PipelineCamera::ICameraDataBlender*(*)(::PVOID, ::PipelineCamera::ICameraDataBlender*))((::PBYTE)hIl2Cpp + LIGMENPEBBB_KAGPBNPHNOB_OFFSET))(this, PIIPCLCCOIG);
	}

	::PipelineCamera::ICameraSubModuleBuilder_1<::PipelineCamera::WorldBasicCameraData>* CDIFHCKCOAF()
	{
		return ((::PipelineCamera::ICameraSubModuleBuilder_1<::PipelineCamera::WorldBasicCameraData>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LIGMENPEBBB_CDIFHCKCOAF_OFFSET))(this);
	}

	::System::Void DJNFKCKOFBA(::AAHGGNHDBMN OLBBPMAODFG)
	{
		return ((::System::Void(*)(::PVOID, ::AAHGGNHDBMN))((::PBYTE)hIl2Cpp + LIGMENPEBBB_DJNFKCKOFBA_OFFSET))(this, OLBBPMAODFG);
	}
};
