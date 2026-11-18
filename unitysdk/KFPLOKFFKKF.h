#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/PipelineCamera/WorldScreenCameraData.h"

#define KFPLOKFFKKF_ABGLCJNKNCJ_OFFSET UNITYSDK_OFFSET(0x52E9F0)
#define KFPLOKFFKKF_AHDOAAIAPLG_OFFSET UNITYSDK_OFFSET(0x52F180)
#define KFPLOKFFKKF_BCAMLLGJCKD_OFFSET UNITYSDK_OFFSET(0x52F090)
#define KFPLOKFFKKF_CGIJMIGAKNF_OFFSET UNITYSDK_OFFSET(0x52F3D0)
#define KFPLOKFFKKF_DAPHFIJMEDB_OFFSET UNITYSDK_OFFSET(0x52EFC0)
#define KFPLOKFFKKF_FAJKAHEGLEP_OFFSET UNITYSDK_OFFSET(0x52F400)
#define KFPLOKFFKKF_FINEOECDDCI_OFFSET UNITYSDK_OFFSET(0x52EAD0)
#define KFPLOKFFKKF_IGJIGJCLNKJ_OFFSET UNITYSDK_OFFSET(0x52F420)
#define KFPLOKFFKKF_JCMAPAMJKHE_OFFSET UNITYSDK_OFFSET(0x52ED60)
#define KFPLOKFFKKF_LIBBNIPMIBH_OFFSET UNITYSDK_OFFSET(0x52E9E0)
#define KFPLOKFFKKF_NNCIELELMDA_OFFSET UNITYSDK_OFFSET(0x52F190)
#define KFPLOKFFKKF_PPKEJLPJLPH_OFFSET UNITYSDK_OFFSET(0x52EFD0)

inline static constexpr unsigned int KFPLOKFFKKF_TypeDefinitionIndex = 42444;

struct alignas(4) KFPLOKFFKKF
{
	::System::Single LDDGLKFKPKG; // 0x10
	::System::Single NIAPDNPIONF; // 0x14
	::System::Single IFDPHOBPALI; // 0x18
	::System::Single MJDCEACFGHL; // 0x1C
	::System::Single BKIHPNFEALF; // 0x20
	::System::Single JBNNLHMPNFB; // 0x24
	::UnityEngine::Vector2 IECOCDNAOHH; // 0x28
	::UnityEngine::Vector3 ENMMOGNFOEI; // 0x30
	::System::Single PHDJFDLPHEB; // 0x3C
	::UnityEngine::Vector3 MEJBFFMIMCA; // 0x40
	::System::Single KHHEBDNFGAL; // 0x4C
	::System::Boolean HBEMJNJFFDE; // 0x50
	::System::Byte _padding0[0x3];
	::UnityEngine::Vector2 FDIIEIDKLEL; // 0x54
	::System::Single MMGGPPGDKKM; // 0x5C
	::System::Single KJBMMKCKBDG; // 0x60
	::System::Single LPGGHCPMOAG; // 0x64
	::System::Single GLHDPIFFNKO; // 0x68
	::System::Single IAJKIFHGHLC; // 0x6C

	::System::Void LIBBNIPMIBH(::PipelineCamera::WorldBasicCameraData& GPBKDGGEBCF, ::System::Single NCCDJLDKFGA)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::WorldBasicCameraData&, ::System::Single))((::PBYTE)hIl2Cpp + KFPLOKFFKKF_LIBBNIPMIBH_OFFSET))(this, GPBKDGGEBCF, NCCDJLDKFGA);
	}

	::System::Single ABGLCJNKNCJ(::System::Single JMEAJIJMANL)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KFPLOKFFKKF_ABGLCJNKNCJ_OFFSET))(this, JMEAJIJMANL);
	}

	::System::Void FINEOECDDCI(::PipelineCamera::WorldBasicCameraData& GPBKDGGEBCF, ::PipelineCamera::WorldScreenCameraData LAFHHACLAIG, ::System::Single CIHGGMMINDC)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::WorldBasicCameraData&, ::PipelineCamera::WorldScreenCameraData, ::System::Single))((::PBYTE)hIl2Cpp + KFPLOKFFKKF_FINEOECDDCI_OFFSET))(this, GPBKDGGEBCF, LAFHHACLAIG, CIHGGMMINDC);
	}

	::System::Void JCMAPAMJKHE(::PipelineCamera::WorldBasicCameraData& GPBKDGGEBCF, ::System::Single JMEAJIJMANL)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::WorldBasicCameraData&, ::System::Single))((::PBYTE)hIl2Cpp + KFPLOKFFKKF_JCMAPAMJKHE_OFFSET))(this, GPBKDGGEBCF, JMEAJIJMANL);
	}

	::System::Boolean DAPHFIJMEDB(::PipelineCamera::WorldBasicCameraData& GPBKDGGEBCF, ::PipelineCamera::WorldScreenCameraData& JCLGLDMBOGB, ::PipelineCamera::WorldScreenCameraData& LAFHHACLAIG)
	{
		return ((::System::Boolean(*)(::PVOID, ::PipelineCamera::WorldBasicCameraData&, ::PipelineCamera::WorldScreenCameraData&, ::PipelineCamera::WorldScreenCameraData&))((::PBYTE)hIl2Cpp + KFPLOKFFKKF_DAPHFIJMEDB_OFFSET))(this, GPBKDGGEBCF, JCLGLDMBOGB, LAFHHACLAIG);
	}

	::System::Boolean PPKEJLPJLPH(::PipelineCamera::WorldBasicCameraData& GPBKDGGEBCF, ::PipelineCamera::WorldScreenCameraData& JCLGLDMBOGB, ::PipelineCamera::WorldScreenCameraData& LAFHHACLAIG, ::System::Single& CIHGGMMINDC)
	{
		return ((::System::Boolean(*)(::PVOID, ::PipelineCamera::WorldBasicCameraData&, ::PipelineCamera::WorldScreenCameraData&, ::PipelineCamera::WorldScreenCameraData&, ::System::Single&))((::PBYTE)hIl2Cpp + KFPLOKFFKKF_PPKEJLPJLPH_OFFSET))(this, GPBKDGGEBCF, JCLGLDMBOGB, LAFHHACLAIG, CIHGGMMINDC);
	}

	::PipelineCamera::WorldBasicCameraData BCAMLLGJCKD(::System::Single NCCDJLDKFGA)
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KFPLOKFFKKF_BCAMLLGJCKD_OFFSET))(this, NCCDJLDKFGA);
	}

	::System::Boolean AHDOAAIAPLG(::PipelineCamera::WorldBasicCameraData& GPBKDGGEBCF, ::PipelineCamera::WorldScreenCameraData& JCLGLDMBOGB, ::PipelineCamera::WorldScreenCameraData& LAFHHACLAIG, ::System::Single CIHGGMMINDC, ::System::Single NCCDJLDKFGA)
	{
		return ((::System::Boolean(*)(::PVOID, ::PipelineCamera::WorldBasicCameraData&, ::PipelineCamera::WorldScreenCameraData&, ::PipelineCamera::WorldScreenCameraData&, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + KFPLOKFFKKF_AHDOAAIAPLG_OFFSET))(this, GPBKDGGEBCF, JCLGLDMBOGB, LAFHHACLAIG, CIHGGMMINDC, NCCDJLDKFGA);
	}

	::System::Void NNCIELELMDA(::PipelineCamera::WorldBasicCameraData& GPBKDGGEBCF, ::System::Single NCCDJLDKFGA)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::WorldBasicCameraData&, ::System::Single))((::PBYTE)hIl2Cpp + KFPLOKFFKKF_NNCIELELMDA_OFFSET))(this, GPBKDGGEBCF, NCCDJLDKFGA);
	}

	::UnityEngine::Vector3 CGIJMIGAKNF()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + KFPLOKFFKKF_CGIJMIGAKNF_OFFSET))(this);
	}

	::UnityEngine::Vector3 FAJKAHEGLEP()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + KFPLOKFFKKF_FAJKAHEGLEP_OFFSET))(this);
	}

	::PipelineCamera::WorldBasicCameraData IGJIGJCLNKJ()
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID))((::PBYTE)hIl2Cpp + KFPLOKFFKKF_IGJIGJCLNKJ_OFFSET))(this);
	}
};
