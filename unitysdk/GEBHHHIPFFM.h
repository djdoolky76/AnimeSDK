#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceContext.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"

namespace Nap::NapECS { class EcsWorld; }

#define GEBHHHIPFFM_CMOILDPLAAN_OFFSET UNITYSDK_OFFSET(0x132519F0)
#define GEBHHHIPFFM_DAADANCNMKK_OFFSET UNITYSDK_OFFSET(0x13251950)
#define GEBHHHIPFFM_DBNEHPBOAIM_OFFSET UNITYSDK_OFFSET(0x132519E0)
#define GEBHHHIPFFM_DHKNPJICGME_OFFSET UNITYSDK_OFFSET(0x13251400)
#define GEBHHHIPFFM_DNHEDOKMNPF_OFFSET UNITYSDK_OFFSET(0x13251940)
#define GEBHHHIPFFM_FEIKMGDAFEH_OFFSET UNITYSDK_OFFSET(0x13251430)
#define GEBHHHIPFFM_GBPDIFDJNFK_OFFSET UNITYSDK_OFFSET(0x132514B0)
#define GEBHHHIPFFM_GKKGFOOLDGJ_OFFSET UNITYSDK_OFFSET(0x132519C0)
#define GEBHHHIPFFM_GLAJCGODDDC_OFFSET UNITYSDK_OFFSET(0x13251930)
#define GEBHHHIPFFM_GOPMHGMOFKM_OFFSET UNITYSDK_OFFSET(0x132513E0)
#define GEBHHHIPFFM_HECHACIFDGE_OFFSET UNITYSDK_OFFSET(0x13251410)
#define GEBHHHIPFFM_HILJCAFHBJI_OFFSET UNITYSDK_OFFSET(0x132514A0)
#define GEBHHHIPFFM_OHNFADLBOCJ_OFFSET UNITYSDK_OFFSET(0x13251A00)
#define GEBHHHIPFFM_PBCIPFDHOBH_OFFSET UNITYSDK_OFFSET(0x13251920)
#define GEBHHHIPFFM_PHOMLOPEJGO_OFFSET UNITYSDK_OFFSET(0x132519D0)
#define GEBHHHIPFFM_PLFINCHBNPF_OFFSET UNITYSDK_OFFSET(0x13251420)
#define GEBHHHIPFFM__CTOR_OFFSET UNITYSDK_OFFSET(0x13250F70)

inline static constexpr unsigned int GEBHHHIPFFM_TypeDefinitionIndex = 57436;

class GEBHHHIPFFM : public ::PipelineCamera::CameraSequence::CameraSequenceContext
{
public:
	::Nap::NapECS::EcsWorld* _HLMABKHNGLH_k__BackingField; // 0x60
	::PipelineCamera::WorldBasicCameraData CMHGDNMEBIM; // 0x68
	::System::UInt32 _IPMDGKAPFLM_k__BackingField; // 0x94
	::System::Single _DPBODPJHJLJ_k__BackingField; // 0x98
	::System::Boolean _FODKJICJFLO_k__BackingField; // 0x9C
	::System::Boolean _KAEMPDBHIHH_k__BackingField; // 0x9D
	::System::Byte _padding0[0x2];
	::System::UInt32 _DGIPEIPIGGL_k__BackingField; // 0xA0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEBHHHIPFFM__CTOR_OFFSET))(this);
	}

	::System::Boolean GOPMHGMOFKM()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GEBHHHIPFFM_GOPMHGMOFKM_OFFSET))(this);
	}

	::System::Void DHKNPJICGME(::Nap::NapECS::EcsWorld* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + GEBHHHIPFFM_DHKNPJICGME_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void HECHACIFDGE(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GEBHHHIPFFM_HECHACIFDGE_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void PLFINCHBNPF(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GEBHHHIPFFM_PLFINCHBNPF_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Single FEIKMGDAFEH()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + GEBHHHIPFFM_FEIKMGDAFEH_OFFSET))(this);
	}

	::System::Void HILJCAFHBJI(::System::UInt32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GEBHHHIPFFM_HILJCAFHBJI_OFFSET))(this, EGEGIMGMJHN);
	}

	::PipelineCamera::WorldBasicCameraData GBPDIFDJNFK()
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID))((::PBYTE)hIl2Cpp + GEBHHHIPFFM_GBPDIFDJNFK_OFFSET))(this);
	}

	::Nap::NapECS::EcsWorld* PBCIPFDHOBH()
	{
		return ((::Nap::NapECS::EcsWorld*(*)(::PVOID))((::PBYTE)hIl2Cpp + GEBHHHIPFFM_PBCIPFDHOBH_OFFSET))(this);
	}

	::System::Void GLAJCGODDDC(::System::UInt32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GEBHHHIPFFM_GLAJCGODDDC_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void DNHEDOKMNPF(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GEBHHHIPFFM_DNHEDOKMNPF_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Single DAADANCNMKK()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + GEBHHHIPFFM_DAADANCNMKK_OFFSET))(this);
	}

	::System::UInt32 GKKGFOOLDGJ()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GEBHHHIPFFM_GKKGFOOLDGJ_OFFSET))(this);
	}

	::System::Single PHOMLOPEJGO()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + GEBHHHIPFFM_PHOMLOPEJGO_OFFSET))(this);
	}

	::System::Boolean DBNEHPBOAIM()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GEBHHHIPFFM_DBNEHPBOAIM_OFFSET))(this);
	}

	::System::Boolean CMOILDPLAAN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GEBHHHIPFFM_CMOILDPLAAN_OFFSET))(this);
	}

	::System::UInt32 OHNFADLBOCJ()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GEBHHHIPFFM_OHNFADLBOCJ_OFFSET))(this);
	}
};
