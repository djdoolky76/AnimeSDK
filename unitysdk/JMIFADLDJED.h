#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Clamped_1.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Foundation/Geometry/ExtendConvexHull2D/ConvexHull.h"
#include "unitysdk/Foundation/Geometry/ExtendConvexHull2D/ConvexHullBuffer.h"
#include "unitysdk/Foundation/DualQuaternion.h"
#include "unitysdk/IJBOMPDBFHA.h"
#include "unitysdk/PipelineCamera/WorldScreenCameraData.h"
#include "unitysdk/UnityEngine/Bounds.h"

namespace UnityEngine { class AnimationCurve; }

#define JMIFADLDJED_AAGOEGNOAOK_OFFSET UNITYSDK_OFFSET(0x1C368920)
#define JMIFADLDJED_ANKJEIELKDB_OFFSET UNITYSDK_OFFSET(0x1C371590)
#define JMIFADLDJED_BBCEAGAHFIP_OFFSET UNITYSDK_OFFSET(0x1C3688F0)
#define JMIFADLDJED_BIIBPBDOJLJ_OFFSET UNITYSDK_OFFSET(0x1C369990)
#define JMIFADLDJED_CDDCMNFFIFC_OFFSET UNITYSDK_OFFSET(0x1C369B40)
#define JMIFADLDJED_CJFECMACJPI_OFFSET UNITYSDK_OFFSET(0x1C371B00)
#define JMIFADLDJED_DAPDKOJDBOD_OFFSET UNITYSDK_OFFSET(0x1C369980)
#define JMIFADLDJED_EILJPNPCEFK_OFFSET UNITYSDK_OFFSET(0x1C368930)
#define JMIFADLDJED_FIPOOGOMHLF_OFFSET UNITYSDK_OFFSET(0x1C367D80)
#define JMIFADLDJED_HAIGGANCMLH_OFFSET UNITYSDK_OFFSET(0x1C369880)
#define JMIFADLDJED_ICEPJINLIOK_OFFSET UNITYSDK_OFFSET(0x1C369E20)
#define JMIFADLDJED_KJAABKHMDKD_OFFSET UNITYSDK_OFFSET(0x1C3699B0)
#define JMIFADLDJED_KOIHNBAIJEF_OFFSET UNITYSDK_OFFSET(0x1C371AD0)
#define JMIFADLDJED_LDNKFBGLEON_OFFSET UNITYSDK_OFFSET(0x1C3699E0)
#define JMIFADLDJED_MGPOCLHOGJM_OFFSET UNITYSDK_OFFSET(0x1C3699A0)
#define JMIFADLDJED_MKLGMJOBDFN_OFFSET UNITYSDK_OFFSET(0x1C367D90)
#define JMIFADLDJED_OGLCFLIADED_OFFSET UNITYSDK_OFFSET(0x1C3715D0)
#define JMIFADLDJED_OIKMMKEKEEE_OFFSET UNITYSDK_OFFSET(0x1C369970)
#define JMIFADLDJED_PFDOFDNDLPD_OFFSET UNITYSDK_OFFSET(0x1C369DE0)
#define JMIFADLDJED_PHNNFPIAFEM_OFFSET UNITYSDK_OFFSET(0x1C36AF50)
#define JMIFADLDJED_PHPAKIILHFL_OFFSET UNITYSDK_OFFSET(0x1C371AC0)
#define JMIFADLDJED__CTOR_OFFSET UNITYSDK_OFFSET(0x1C367D70)

inline static constexpr unsigned int JMIFADLDJED_TypeDefinitionIndex = 79621;

class JMIFADLDJED : public ::System::Object
{
public:
	// static const ::System::Int32 BFICKHEIGKG = 0x10; // 0x0
	::UnityEngine::AnimationCurve* CGECLCBMMPM; // 0x10
	::UnityEngine::AnimationCurve* LJPBGIALAOO; // 0x18
	::Foundation::Clamped_1<::System::Single> DFPFNIPHHJM; // 0x20
	::System::Byte _padding0[0x10];
	::UnityEngine::AnimationCurve* NPMJODDAFBN; // 0x38
	::UnityEngine::AnimationCurve* IEBJDDGPKIB; // 0x40
	::UnityEngine::AnimationCurve* NPHABLBEKPJ; // 0x48
	::System::Single MBOMBBIIDFI; // 0x50
	::System::Single INFHKPEPFHL; // 0x54
	::System::Single FHGEHLINLNB; // 0x58
	::System::Single GOBHMPCBMFO; // 0x5C
	::System::Boolean JIPPKLCBHOM; // 0x60
	::System::Byte _padding1[0x3];
	::PipelineCamera::WorldBasicCameraData MPOKLDOLGMM; // 0x64

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMIFADLDJED__CTOR_OFFSET))(this);
	}

	::JMIFADLDJED* FIPOOGOMHLF(::System::Single ICJCLINBNID)
	{
		return ((::JMIFADLDJED*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JMIFADLDJED_FIPOOGOMHLF_OFFSET))(this, ICJCLINBNID);
	}

	static ::System::Void MKLGMJOBDFN(::PipelineCamera::WorldScreenCameraData& GPBKDGGEBCF, ::System::Single PMEHNJABPAN, ::IJBOMPDBFHA AAIKDLEOKJN, ::IJBOMPDBFHA AKBBIHLKNEB, ::Foundation::Geometry::ExtendConvexHull2D::ConvexHullBuffer DBOGIDGGNOL, ::Foundation::Geometry::ExtendConvexHull2D::ConvexHullBuffer OEPCHKEMMHM)
	{
		return ((::System::Void(*)(::PipelineCamera::WorldScreenCameraData&, ::System::Single, ::IJBOMPDBFHA, ::IJBOMPDBFHA, ::Foundation::Geometry::ExtendConvexHull2D::ConvexHullBuffer, ::Foundation::Geometry::ExtendConvexHull2D::ConvexHullBuffer))((::PBYTE)hIl2Cpp + JMIFADLDJED_MKLGMJOBDFN_OFFSET))(GPBKDGGEBCF, PMEHNJABPAN, AAIKDLEOKJN, AKBBIHLKNEB, DBOGIDGGNOL, OEPCHKEMMHM);
	}

	::JMIFADLDJED* BBCEAGAHFIP(::System::Single NPHOPECPHLF)
	{
		return ((::JMIFADLDJED*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JMIFADLDJED_BBCEAGAHFIP_OFFSET))(this, NPHOPECPHLF);
	}

	::JMIFADLDJED* AAGOEGNOAOK(::UnityEngine::AnimationCurve* FAJHPKBELMF)
	{
		return ((::JMIFADLDJED*(*)(::PVOID, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + JMIFADLDJED_AAGOEGNOAOK_OFFSET))(this, FAJHPKBELMF);
	}

	::PipelineCamera::WorldBasicCameraData EILJPNPCEFK(::IJBOMPDBFHA AAIKDLEOKJN, ::IJBOMPDBFHA AKBBIHLKNEB, ::System::Single EGCKEINKEPM)
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::IJBOMPDBFHA, ::IJBOMPDBFHA, ::System::Single))((::PBYTE)hIl2Cpp + JMIFADLDJED_EILJPNPCEFK_OFFSET))(this, AAIKDLEOKJN, AKBBIHLKNEB, EGCKEINKEPM);
	}

	::JMIFADLDJED* HAIGGANCMLH(::System::Single KJHPKFCFAMP, ::System::Single BAFOIENGGLP)
	{
		return ((::JMIFADLDJED*(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + JMIFADLDJED_HAIGGANCMLH_OFFSET))(this, KJHPKFCFAMP, BAFOIENGGLP);
	}

	::JMIFADLDJED* OIKMMKEKEEE(::System::Single MCBMMNICEBJ)
	{
		return ((::JMIFADLDJED*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JMIFADLDJED_OIKMMKEKEEE_OFFSET))(this, MCBMMNICEBJ);
	}

	::JMIFADLDJED* DAPDKOJDBOD(::UnityEngine::AnimationCurve* FAJHPKBELMF)
	{
		return ((::JMIFADLDJED*(*)(::PVOID, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + JMIFADLDJED_DAPDKOJDBOD_OFFSET))(this, FAJHPKBELMF);
	}

	::JMIFADLDJED* BIIBPBDOJLJ(::System::Boolean DECIDLELLCP)
	{
		return ((::JMIFADLDJED*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JMIFADLDJED_BIIBPBDOJLJ_OFFSET))(this, DECIDLELLCP);
	}

	::JMIFADLDJED* MGPOCLHOGJM(::UnityEngine::AnimationCurve* FAJHPKBELMF)
	{
		return ((::JMIFADLDJED*(*)(::PVOID, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + JMIFADLDJED_MGPOCLHOGJM_OFFSET))(this, FAJHPKBELMF);
	}

	::JMIFADLDJED* KJAABKHMDKD(::System::Single EJAOAGGJHHA)
	{
		return ((::JMIFADLDJED*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JMIFADLDJED_KJAABKHMDKD_OFFSET))(this, EJAOAGGJHHA);
	}

	static ::System::Single LDNKFBGLEON(::System::Single DAGBNOIAKKE, ::System::Single NPHOPECPHLF, ::System::Single KKAMDFNMMJH, ::System::Single CLOOHKNDICH)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + JMIFADLDJED_LDNKFBGLEON_OFFSET))(DAGBNOIAKKE, NPHOPECPHLF, KKAMDFNMMJH, CLOOHKNDICH);
	}

	static ::System::Boolean CDDCMNFFIFC(::System::Single PMEHNJABPAN, ::Foundation::Geometry::ExtendConvexHull2D::ConvexHull AAIKDLEOKJN, ::Foundation::Geometry::ExtendConvexHull2D::ConvexHull AKBBIHLKNEB)
	{
		return ((::System::Boolean(*)(::System::Single, ::Foundation::Geometry::ExtendConvexHull2D::ConvexHull, ::Foundation::Geometry::ExtendConvexHull2D::ConvexHull))((::PBYTE)hIl2Cpp + JMIFADLDJED_CDDCMNFFIFC_OFFSET))(PMEHNJABPAN, AAIKDLEOKJN, AKBBIHLKNEB);
	}

	::System::Void PFDOFDNDLPD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMIFADLDJED_PFDOFDNDLPD_OFFSET))(this);
	}

	static ::System::Void ICEPJINLIOK(::PipelineCamera::WorldScreenCameraData& GPBKDGGEBCF, ::System::Single EJAOAGGJHHA, ::IJBOMPDBFHA AAIKDLEOKJN, ::IJBOMPDBFHA AKBBIHLKNEB, ::Foundation::Geometry::ExtendConvexHull2D::ConvexHullBuffer DBOGIDGGNOL, ::Foundation::Geometry::ExtendConvexHull2D::ConvexHullBuffer OEPCHKEMMHM)
	{
		return ((::System::Void(*)(::PipelineCamera::WorldScreenCameraData&, ::System::Single, ::IJBOMPDBFHA, ::IJBOMPDBFHA, ::Foundation::Geometry::ExtendConvexHull2D::ConvexHullBuffer, ::Foundation::Geometry::ExtendConvexHull2D::ConvexHullBuffer))((::PBYTE)hIl2Cpp + JMIFADLDJED_ICEPJINLIOK_OFFSET))(GPBKDGGEBCF, EJAOAGGJHHA, AAIKDLEOKJN, AKBBIHLKNEB, DBOGIDGGNOL, OEPCHKEMMHM);
	}

	::System::Void ANKJEIELKDB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMIFADLDJED_ANKJEIELKDB_OFFSET))(this);
	}

	static ::System::Boolean OGLCFLIADED(::System::Single EJAOAGGJHHA, ::Foundation::Geometry::ExtendConvexHull2D::ConvexHull AAIKDLEOKJN, ::Foundation::Geometry::ExtendConvexHull2D::ConvexHull AKBBIHLKNEB)
	{
		return ((::System::Boolean(*)(::System::Single, ::Foundation::Geometry::ExtendConvexHull2D::ConvexHull, ::Foundation::Geometry::ExtendConvexHull2D::ConvexHull))((::PBYTE)hIl2Cpp + JMIFADLDJED_OGLCFLIADED_OFFSET))(EJAOAGGJHHA, AAIKDLEOKJN, AKBBIHLKNEB);
	}

	static ::System::Single PHNNFPIAFEM(::Foundation::DualQuaternion EAHEAHFPMMM, ::UnityEngine::Bounds AAIKDLEOKJN, ::UnityEngine::Bounds AKBBIHLKNEB)
	{
		return ((::System::Single(*)(::Foundation::DualQuaternion, ::UnityEngine::Bounds, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + JMIFADLDJED_PHNNFPIAFEM_OFFSET))(EAHEAHFPMMM, AAIKDLEOKJN, AKBBIHLKNEB);
	}

	::JMIFADLDJED* PHPAKIILHFL(::UnityEngine::AnimationCurve* FAJHPKBELMF)
	{
		return ((::JMIFADLDJED*(*)(::PVOID, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + JMIFADLDJED_PHPAKIILHFL_OFFSET))(this, FAJHPKBELMF);
	}

	::JMIFADLDJED* KOIHNBAIJEF(::PipelineCamera::WorldBasicCameraData GPBKDGGEBCF)
	{
		return ((::JMIFADLDJED*(*)(::PVOID, ::PipelineCamera::WorldBasicCameraData))((::PBYTE)hIl2Cpp + JMIFADLDJED_KOIHNBAIJEF_OFFSET))(this, GPBKDGGEBCF);
	}

	::JMIFADLDJED* CJFECMACJPI(::UnityEngine::AnimationCurve* FAJHPKBELMF)
	{
		return ((::JMIFADLDJED*(*)(::PVOID, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + JMIFADLDJED_CJFECMACJPI_OFFSET))(this, FAJHPKBELMF);
	}
};
