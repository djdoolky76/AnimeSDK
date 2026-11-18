#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BNFNPBDKFCG.h"
#include "unitysdk/Foundation/Unreal/FTransform.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceContext.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Quaternion.h"

class NOBPIMIECKH;
namespace Foundation { template <typename T> class ReferenceValue_1; }
namespace MoleMole { class AdvancedCollisionConfigData; }
namespace Nap::NapECS { class EcsWorld; }
namespace PipelineCamera::SubModule { template <typename T> class CameraSequenceCollectionPlayer_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }

#define DPFIOHMNHGO_ABLOMAIKIFC_OFFSET UNITYSDK_OFFSET(0x13E68B70)
#define DPFIOHMNHGO_DAADANCNMKK_OFFSET UNITYSDK_OFFSET(0x13E69130)
#define DPFIOHMNHGO_EAENHADFALF_OFFSET UNITYSDK_OFFSET(0x13E685F0)
#define DPFIOHMNHGO_ELHJOMPHFNM_OFFSET UNITYSDK_OFFSET(0x13E68990)
#define DPFIOHMNHGO_FEIKMGDAFEH_OFFSET UNITYSDK_OFFSET(0x13E691B0)
#define DPFIOHMNHGO_FMHJGGLAJAL_OFFSET UNITYSDK_OFFSET(0x13E68750)
#define DPFIOHMNHGO_GBPDIFDJNFK_OFFSET UNITYSDK_OFFSET(0x13E68E10)
#define DPFIOHMNHGO_GKKGFOOLDGJ_OFFSET UNITYSDK_OFFSET(0x13E68A80)
#define DPFIOHMNHGO_GOPMHGMOFKM_OFFSET UNITYSDK_OFFSET(0x13E68730)
#define DPFIOHMNHGO_GPCLMCGMIKI_OFFSET UNITYSDK_OFFSET(0x13E69610)
#define DPFIOHMNHGO_HMPCGCBFEKO_OFFSET UNITYSDK_OFFSET(0x13E69230)
#define DPFIOHMNHGO_JJLIOIJJLJG_OFFSET UNITYSDK_OFFSET(0x13E68860)
#define DPFIOHMNHGO_JKPCAJBHBLA_OFFSET UNITYSDK_OFFSET(0x13E69370)
#define DPFIOHMNHGO_KECINCFFEGA_OFFSET UNITYSDK_OFFSET(0x13E68680)
#define DPFIOHMNHGO_KJOPHBNLKJB_OFFSET UNITYSDK_OFFSET(0x13E683A0)
#define DPFIOHMNHGO_KKFBMPBPJFK_OFFSET UNITYSDK_OFFSET(0x13E68900)
#define DPFIOHMNHGO_KLHHFKPOAFK_OFFSET UNITYSDK_OFFSET(0x13E69460)
#define DPFIOHMNHGO_MAJEGKPILGF_OFFSET UNITYSDK_OFFSET(0x13E69250)
#define DPFIOHMNHGO_NFBKNMAFFBJ_OFFSET UNITYSDK_OFFSET(0x13E696A0)
#define DPFIOHMNHGO_NHICGJNINBL_OFFSET UNITYSDK_OFFSET(0x13E690A0)
#define DPFIOHMNHGO_NOOKCKDCEOH_OFFSET UNITYSDK_OFFSET(0x13E68440)
#define DPFIOHMNHGO_OKCHLGOGMJH_OFFSET UNITYSDK_OFFSET(0x13E68710)
#define DPFIOHMNHGO__CTOR_OFFSET UNITYSDK_OFFSET(0x13E68230)

inline static constexpr unsigned int DPFIOHMNHGO_TypeDefinitionIndex = 66748;

class DPFIOHMNHGO : public ::PipelineCamera::CameraSequence::CameraSequenceContext
{
public:
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* NPFKNAFLGIO; // 0x60
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* OMBOHNEHAGB; // 0x68
	::Foundation::ReferenceValue_1<::System::Single>* AGJNAAEOJEC; // 0x70
	::Foundation::ReferenceValue_1<::System::Single>* GJJJNOEJHHC; // 0x78
	::NOBPIMIECKH* JPEMKPBHFCG; // 0x80
	::Nap::NapECS::EcsWorld* FPGOIBHDCPA; // 0x88
	::Foundation::ReferenceValue_1<::UnityEngine::Vector3>* GJMGAPBMKJN; // 0x90
	::PipelineCamera::SubModule::CameraSequenceCollectionPlayer_1<::PipelineCamera::WorldBasicCameraData>* HOJPEDAKAND; // 0x98
	::NOBPIMIECKH* AAKOGHPCOIH; // 0xA0
	::BNFNPBDKFCG JOIPFADFFEB; // 0xA8
	::System::Single IFDPHOBPALI; // 0xD0
	::System::Boolean LNANMBPCHHA; // 0xD4
	::System::Boolean LAFNEDMOMDD; // 0xD5
	::System::Boolean IHPMOEELHOE; // 0xD6
	::System::Byte _padding0[0x1];
	::System::Int32 GPFNJIGOBNG; // 0xD8
	::System::Single GJHNLBIAJMO; // 0xDC
	::PipelineCamera::WorldBasicCameraData CMHGDNMEBIM; // 0xE0
	::System::Single LDGGCCBHKND; // 0x10C
	::Foundation::Unreal::FTransform AFGPKFGNEJD; // 0x110
	::Foundation::Unreal::FTransform ALNIPFLKJBO; // 0x130
	::System::Single AGHNKCKJAON; // 0x150
	::System::Int32 AADDHDLKLGO; // 0x154

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPFIOHMNHGO__CTOR_OFFSET))(this);
	}

	::UnityEngine::Vector3 KJOPHBNLKJB()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + DPFIOHMNHGO_KJOPHBNLKJB_OFFSET))(this);
	}

	::UnityEngine::Vector3 NOOKCKDCEOH()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + DPFIOHMNHGO_NOOKCKDCEOH_OFFSET))(this);
	}

	::UnityEngine::AnimationCurve* KECINCFFEGA()
	{
		return ((::UnityEngine::AnimationCurve*(*)(::PVOID))((::PBYTE)hIl2Cpp + DPFIOHMNHGO_KECINCFFEGA_OFFSET))(this);
	}

	::System::Boolean OKCHLGOGMJH()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DPFIOHMNHGO_OKCHLGOGMJH_OFFSET))(this);
	}

	::MoleMole::AdvancedCollisionConfigData* FMHJGGLAJAL()
	{
		return ((::MoleMole::AdvancedCollisionConfigData*(*)(::PVOID))((::PBYTE)hIl2Cpp + DPFIOHMNHGO_FMHJGGLAJAL_OFFSET))(this);
	}

	::UnityEngine::Vector3 JJLIOIJJLJG()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + DPFIOHMNHGO_JJLIOIJJLJG_OFFSET))(this);
	}

	::UnityEngine::AnimationCurve* KKFBMPBPJFK()
	{
		return ((::UnityEngine::AnimationCurve*(*)(::PVOID))((::PBYTE)hIl2Cpp + DPFIOHMNHGO_KKFBMPBPJFK_OFFSET))(this);
	}

	::System::Boolean GOPMHGMOFKM()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DPFIOHMNHGO_GOPMHGMOFKM_OFFSET))(this);
	}

	::System::UInt32 ELHJOMPHFNM()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DPFIOHMNHGO_ELHJOMPHFNM_OFFSET))(this);
	}

	::System::UInt32 GKKGFOOLDGJ()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DPFIOHMNHGO_GKKGFOOLDGJ_OFFSET))(this);
	}

	static ::System::Void ABLOMAIKIFC(::NOBPIMIECKH* ODLJMHPMCNI, ::Nap::NapECS::EcsWorld* GEEHGDABNJF, ::System::Int32& IIFMJFJOOCK, ::Foundation::Unreal::FTransform& GKBJOPJKCLB, ::System::Single& KKAMDFNMMJH)
	{
		return ((::System::Void(*)(::NOBPIMIECKH*, ::Nap::NapECS::EcsWorld*, ::System::Int32&, ::Foundation::Unreal::FTransform&, ::System::Single&))((::PBYTE)hIl2Cpp + DPFIOHMNHGO_ABLOMAIKIFC_OFFSET))(ODLJMHPMCNI, GEEHGDABNJF, IIFMJFJOOCK, GKBJOPJKCLB, KKAMDFNMMJH);
	}

	::PipelineCamera::WorldBasicCameraData GBPDIFDJNFK()
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID))((::PBYTE)hIl2Cpp + DPFIOHMNHGO_GBPDIFDJNFK_OFFSET))(this);
	}

	::UnityEngine::Quaternion NHICGJNINBL()
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + DPFIOHMNHGO_NHICGJNINBL_OFFSET))(this);
	}

	::System::Single DAADANCNMKK()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DPFIOHMNHGO_DAADANCNMKK_OFFSET))(this);
	}

	::System::Single FEIKMGDAFEH()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DPFIOHMNHGO_FEIKMGDAFEH_OFFSET))(this);
	}

	::UnityEngine::Vector3 HMPCGCBFEKO()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + DPFIOHMNHGO_HMPCGCBFEKO_OFFSET))(this);
	}

	::System::Single MAJEGKPILGF()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DPFIOHMNHGO_MAJEGKPILGF_OFFSET))(this);
	}

	::System::Single JKPCAJBHBLA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DPFIOHMNHGO_JKPCAJBHBLA_OFFSET))(this);
	}

	::UnityEngine::Vector3 KLHHFKPOAFK()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + DPFIOHMNHGO_KLHHFKPOAFK_OFFSET))(this);
	}

	::UnityEngine::AnimationCurve* GPCLMCGMIKI()
	{
		return ((::UnityEngine::AnimationCurve*(*)(::PVOID))((::PBYTE)hIl2Cpp + DPFIOHMNHGO_GPCLMCGMIKI_OFFSET))(this);
	}

	::UnityEngine::Vector3 NFBKNMAFFBJ()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + DPFIOHMNHGO_NFBKNMAFFBJ_OFFSET))(this);
	}

	::UnityEngine::Quaternion EAENHADFALF()
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + DPFIOHMNHGO_EAENHADFALF_OFFSET))(this);
	}
};
