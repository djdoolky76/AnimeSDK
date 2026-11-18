#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EELOMMHDNHK_FNCCLICPJFJ.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/PNAIBADKIKF.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/EELOMMHDNHK_GGECJFOKIIK.h"
#include "unitysdk/PipelineCamera/FinalCameraData.h"
#include "unitysdk/PipelineCamera/ScopedDelegateHandle.h"
#include "unitysdk/PipelineCamera/WorldScreenCameraData.h"
#include "unitysdk/UnityEngine/Vector3.h"

class DPFIOHMNHGO;
namespace MoleMole::LevelPerform { class DirectKillShakeSetting; }
namespace MoleMole::LevelPerform { class LevelSettlementConfig; }
namespace MoleMole::Utils { template <typename T> class TaskBasedEventCollection_1; }
namespace Nap::NapECS { class EcsWorld; }
namespace PipelineCamera { template <typename T> class ICameraSubModuleBuilder_1; }
namespace PipelineCamera { template <typename T> class ICameraSubModule_1; }
namespace PipelineCamera::SubModule { template <typename T> class CameraSequenceCollectionPlayer_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EELOMMHDNHK_AKBPOIDEPEN_OFFSET UNITYSDK_OFFSET(0x11A6C960)
#define EELOMMHDNHK_BNLJMPKPFMM_OFFSET UNITYSDK_OFFSET(0x11A6BA00)
#define EELOMMHDNHK_CLOEGLBPBJB_OFFSET UNITYSDK_OFFSET(0x11A6E490)
#define EELOMMHDNHK_DDPEDGDAOEP_OFFSET UNITYSDK_OFFSET(0x11A6D9A0)
#define EELOMMHDNHK_EAIKOKKDMHB_OFFSET UNITYSDK_OFFSET(0x11A6C690)
#define EELOMMHDNHK_EOJHHDDLBPA_OFFSET UNITYSDK_OFFSET(0x11A6B970)
#define EELOMMHDNHK_FOPIHDGKCOE_OFFSET UNITYSDK_OFFSET(0x11A6E430)
#define EELOMMHDNHK_GINAFPGOLPF_OFFSET UNITYSDK_OFFSET(0x11A6E610)
#define EELOMMHDNHK_GJMNGLFEDKK_OFFSET UNITYSDK_OFFSET(0x11A6E730)
#define EELOMMHDNHK_IPKCAJKJOLC_OFFSET UNITYSDK_OFFSET(0x11A6BB70)
#define EELOMMHDNHK_JAOCLOFKCIP_OFFSET UNITYSDK_OFFSET(0x11A6BBC0)
#define EELOMMHDNHK_JMDEKPONKMF_OFFSET UNITYSDK_OFFSET(0x11A6ACC0)
#define EELOMMHDNHK_KBMFBFKMMNI_OFFSET UNITYSDK_OFFSET(0x11A6B5A0)
#define EELOMMHDNHK_KJLBEEFKFGI_OFFSET UNITYSDK_OFFSET(0x11A6C8E0)
#define EELOMMHDNHK_KMGEDEGAJNB_OFFSET UNITYSDK_OFFSET(0x11A6B610)
#define EELOMMHDNHK_LOLLCHLABEN_OFFSET UNITYSDK_OFFSET(0x11A6DC00)
#define EELOMMHDNHK_MJIIHBKJIJL_OFFSET UNITYSDK_OFFSET(0x11A6AED0)
#define EELOMMHDNHK_NAAABNMPBIJ_OFFSET UNITYSDK_OFFSET(0x11A6DE80)
#define EELOMMHDNHK_NBIBFFLBFDG_OFFSET UNITYSDK_OFFSET(0x11A6C6E0)
#define EELOMMHDNHK_NDCDOMFKMJB_OFFSET UNITYSDK_OFFSET(0x11A6DAA0)
#define EELOMMHDNHK_NGPCMJHFFGM_1_OFFSET UNITYSDK_OFFSET(0x11A6E3A0)
#define EELOMMHDNHK_NGPCMJHFFGM_OFFSET UNITYSDK_OFFSET(0x11A6BC80)
#define EELOMMHDNHK_PFHGHDNBEPB_OFFSET UNITYSDK_OFFSET(0x11A6C9B0)
#define EELOMMHDNHK_PLPONJAKNEB_OFFSET UNITYSDK_OFFSET(0x11A6B660)
#define EELOMMHDNHK__CCTOR_OFFSET UNITYSDK_OFFSET(0x11A6B830)
#define EELOMMHDNHK__CTOR_OFFSET UNITYSDK_OFFSET(0x11A6B7B0)

inline static constexpr unsigned int EELOMMHDNHK_TypeDefinitionIndex = 48780;

class EELOMMHDNHK : public ::System::Object
{
public:
	static ::Foundation::Unreal::FName* StaticGet_ECPADDHPAEC()
	{
		return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(EELOMMHDNHK_TypeDefinitionIndex)->GetStaticField(0x13380);
	}
	static ::Foundation::Unreal::FName* StaticGet_PLEHGJOFAGC()
	{
		return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(EELOMMHDNHK_TypeDefinitionIndex)->GetStaticField(0x13388);
	}
	static ::Foundation::Unreal::FName* StaticGet_DJOODJIIPHF()
	{
		return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(EELOMMHDNHK_TypeDefinitionIndex)->GetStaticField(0x13390);
	}
	static ::Foundation::Unreal::FName* StaticGet_OMLDHGHGKGM()
	{
		return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(EELOMMHDNHK_TypeDefinitionIndex)->GetStaticField(0x13398);
	}
	static ::Foundation::Unreal::FName* StaticGet_KMEBJPAEBCK()
	{
		return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(EELOMMHDNHK_TypeDefinitionIndex)->GetStaticField(0x133A0);
	}
	static ::Foundation::Unreal::FName* StaticGet_BGKHJOADKPE()
	{
		return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(EELOMMHDNHK_TypeDefinitionIndex)->GetStaticField(0x133A8);
	}
	::System::Collections::Generic::List_1<::System::Object*>* FBHPAHEKHEC; // 0x10
	::PipelineCamera::SubModule::CameraSequenceCollectionPlayer_1<::PipelineCamera::WorldBasicCameraData>* FHEKJCDOKBG; // 0x18
	::MoleMole::LevelPerform::LevelSettlementConfig* CEJENBBHBBG; // 0x20
	::Nap::NapECS::EcsWorld* NAEFJGAOJCB; // 0x28
	::MoleMole::Utils::TaskBasedEventCollection_1<::System::Object*>* NNKIDGCEACP; // 0x30
	::System::Boolean LOKPOBNBBCM; // 0x38
	::System::Boolean JHCOOMJIEON; // 0x39
	::System::Byte _padding0[0x2];
	::System::Single BJMBOABGKOK; // 0x3C
	::System::Nullable_1<::System::UInt32> PNEAKLILIHK; // 0x40
	::System::Int32 MKHJNBMGIEK; // 0x48
	::System::UInt32 KLCIBLPGFIM; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EELOMMHDNHK__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EELOMMHDNHK__CCTOR_OFFSET))();
	}

	::System::Void JMDEKPONKMF(::System::String* KINBDJNLLLK)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EELOMMHDNHK_JMDEKPONKMF_OFFSET))(this, KINBDJNLLLK);
	}

	::System::Void KMGEDEGAJNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EELOMMHDNHK_KMGEDEGAJNB_OFFSET))(this);
	}

	::System::Boolean PLPONJAKNEB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EELOMMHDNHK_PLPONJAKNEB_OFFSET))(this);
	}

	::System::Void EOJHHDDLBPA(::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* FKMJKPGNCJI)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*))((::PBYTE)hIl2Cpp + EELOMMHDNHK_EOJHHDDLBPA_OFFSET))(this, FKMJKPGNCJI);
	}

	::System::Void BNLJMPKPFMM(::PipelineCamera::ICameraSubModuleBuilder_1<::PipelineCamera::WorldBasicCameraData>*& DHHJJNBPAJH)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraSubModuleBuilder_1<::PipelineCamera::WorldBasicCameraData>*&))((::PBYTE)hIl2Cpp + EELOMMHDNHK_BNLJMPKPFMM_OFFSET))(this, DHHJJNBPAJH);
	}

	::System::Void IPKCAJKJOLC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EELOMMHDNHK_IPKCAJKJOLC_OFFSET))(this);
	}

	::PNAIBADKIKF JAOCLOFKCIP()
	{
		return ((::PNAIBADKIKF(*)(::PVOID))((::PBYTE)hIl2Cpp + EELOMMHDNHK_JAOCLOFKCIP_OFFSET))(this);
	}

	::System::Void NGPCMJHFFGM(::DPFIOHMNHGO* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::DPFIOHMNHGO*))((::PBYTE)hIl2Cpp + EELOMMHDNHK_NGPCMJHFFGM_OFFSET))(this, AAOCANGHBDG);
	}

	::System::Void EAIKOKKDMHB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EELOMMHDNHK_EAIKOKKDMHB_OFFSET))(this);
	}

	static ::System::Boolean NBIBFFLBFDG(::System::Single DBHHKFOMJPE, ::System::Single DAGBNOIAKKE, ::System::Single KKAMDFNMMJH, ::System::Single NPHOPECPHLF, ::System::Single EGCKEINKEPM)
	{
		return ((::System::Boolean(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EELOMMHDNHK_NBIBFFLBFDG_OFFSET))(DBHHKFOMJPE, DAGBNOIAKKE, KKAMDFNMMJH, NPHOPECPHLF, EGCKEINKEPM);
	}

	::System::Void KJLBEEFKFGI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EELOMMHDNHK_KJLBEEFKFGI_OFFSET))(this);
	}

	::System::Void AKBPOIDEPEN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EELOMMHDNHK_AKBPOIDEPEN_OFFSET))(this);
	}

	::EELOMMHDNHK_GGECJFOKIIK PFHGHDNBEPB()
	{
		return ((::EELOMMHDNHK_GGECJFOKIIK(*)(::PVOID))((::PBYTE)hIl2Cpp + EELOMMHDNHK_PFHGHDNBEPB_OFFSET))(this);
	}

	static ::System::Boolean DDPEDGDAOEP(::Nap::NapECS::EcsWorld* GEEHGDABNJF, ::System::UInt32 HDGIELLOOEF, ::System::UInt32& PBFNLIGGDKM)
	{
		return ((::System::Boolean(*)(::Nap::NapECS::EcsWorld*, ::System::UInt32, ::System::UInt32&))((::PBYTE)hIl2Cpp + EELOMMHDNHK_DDPEDGDAOEP_OFFSET))(GEEHGDABNJF, HDGIELLOOEF, PBFNLIGGDKM);
	}

	static ::System::Void NDCDOMFKMJB(::PipelineCamera::SubModule::CameraSequenceCollectionPlayer_1<::PipelineCamera::WorldBasicCameraData>* OGJEMGICBBA, ::EELOMMHDNHK_GGECJFOKIIK& HDCEGEKBDAO)
	{
		return ((::System::Void(*)(::PipelineCamera::SubModule::CameraSequenceCollectionPlayer_1<::PipelineCamera::WorldBasicCameraData>*, ::EELOMMHDNHK_GGECJFOKIIK&))((::PBYTE)hIl2Cpp + EELOMMHDNHK_NDCDOMFKMJB_OFFSET))(OGJEMGICBBA, HDCEGEKBDAO);
	}

	::MoleMole::LevelPerform::DirectKillShakeSetting* LOLLCHLABEN(::Nap::NapECS::EcsWorld* GEEHGDABNJF, ::System::UInt32 HDGIELLOOEF)
	{
		return ((::MoleMole::LevelPerform::DirectKillShakeSetting*(*)(::PVOID, ::Nap::NapECS::EcsWorld*, ::System::UInt32))((::PBYTE)hIl2Cpp + EELOMMHDNHK_LOLLCHLABEN_OFFSET))(this, GEEHGDABNJF, HDGIELLOOEF);
	}

	::PipelineCamera::ScopedDelegateHandle NAAABNMPBIJ()
	{
		return ((::PipelineCamera::ScopedDelegateHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + EELOMMHDNHK_NAAABNMPBIJ_OFFSET))(this);
	}

	::System::Void NGPCMJHFFGM_1(::DPFIOHMNHGO* AAOCANGHBDG, ::EELOMMHDNHK_GGECJFOKIIK ACDGCHIHIFO)
	{
		return ((::System::Void(*)(::PVOID, ::DPFIOHMNHGO*, ::EELOMMHDNHK_GGECJFOKIIK))((::PBYTE)hIl2Cpp + EELOMMHDNHK_NGPCMJHFFGM_1_OFFSET))(this, AAOCANGHBDG, ACDGCHIHIFO);
	}

	::Cysharp::Threading::Tasks::UniTaskVoid KBMFBFKMMNI()
	{
		return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID))((::PBYTE)hIl2Cpp + EELOMMHDNHK_KBMFBFKMMNI_OFFSET))(this);
	}

	static ::System::Boolean MJIIHBKJIJL(::Nap::NapECS::EcsWorld*& GEEHGDABNJF, ::System::UInt32& HDGIELLOOEF, ::System::Nullable_1<::System::UInt32>& HBFCDLLPFGK, ::System::Boolean& NOHJICJJANG)
	{
		return ((::System::Boolean(*)(::Nap::NapECS::EcsWorld*&, ::System::UInt32&, ::System::Nullable_1<::System::UInt32>&, ::System::Boolean&))((::PBYTE)hIl2Cpp + EELOMMHDNHK_MJIIHBKJIJL_OFFSET))(GEEHGDABNJF, HDGIELLOOEF, HBFCDLLPFGK, NOHJICJJANG);
	}

	::System::Void FOPIHDGKCOE(::EELOMMHDNHK_FNCCLICPJFJ IPMMCGDMODG)
	{
		return ((::System::Void(*)(::PVOID, ::EELOMMHDNHK_FNCCLICPJFJ))((::PBYTE)hIl2Cpp + EELOMMHDNHK_FOPIHDGKCOE_OFFSET))(this, IPMMCGDMODG);
	}

	static ::PipelineCamera::WorldScreenCameraData CLOEGLBPBJB(::PipelineCamera::FinalCameraData& GPBKDGGEBCF, ::UnityEngine::Vector3& MJOABFCFBCA, ::PipelineCamera::WorldScreenCameraData& JFLDAALEMGB)
	{
		return ((::PipelineCamera::WorldScreenCameraData(*)(::PipelineCamera::FinalCameraData&, ::UnityEngine::Vector3&, ::PipelineCamera::WorldScreenCameraData&))((::PBYTE)hIl2Cpp + EELOMMHDNHK_CLOEGLBPBJB_OFFSET))(GPBKDGGEBCF, MJOABFCFBCA, JFLDAALEMGB);
	}

	static ::System::Void GINAFPGOLPF(::PipelineCamera::SubModule::CameraSequenceCollectionPlayer_1<::PipelineCamera::WorldBasicCameraData>* OGJEMGICBBA, ::EELOMMHDNHK_GGECJFOKIIK& HDCEGEKBDAO)
	{
		return ((::System::Void(*)(::PipelineCamera::SubModule::CameraSequenceCollectionPlayer_1<::PipelineCamera::WorldBasicCameraData>*, ::EELOMMHDNHK_GGECJFOKIIK&))((::PBYTE)hIl2Cpp + EELOMMHDNHK_GINAFPGOLPF_OFFSET))(OGJEMGICBBA, HDCEGEKBDAO);
	}

	::System::Void GJMNGLFEDKK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EELOMMHDNHK_GJMNGLFEDKK_OFFSET))(this);
	}
};
