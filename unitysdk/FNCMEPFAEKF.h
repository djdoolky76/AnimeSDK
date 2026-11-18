#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Dest/Math/Box3.h"
#include "unitysdk/Dest/Math/Capsule3.h"
#include "unitysdk/Dest/Math/Sphere3.h"
#include "unitysdk/Foundation/Geometry/ExtendConvexHull2D/ConvexHull.h"
#include "unitysdk/Foundation/Geometry/ExtendConvexHull2D/ConvexHullBuffer.h"
#include "unitysdk/Foundation/Geometry/ConicSection2D.h"
#include "unitysdk/Foundation/Geometry/ConicSection2D_1.h"
#include "unitysdk/Foundation/Geometry/Ellipse2D.h"
#include "unitysdk/PipelineCamera/FinalCameraData.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/ReadOnlySpan_1_F48FB86071006F3E.h"
#include "unitysdk/System/Span_1_9011FAD97750D224.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueTuple_5.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define FNCMEPFAEKF_ACDMAFDNMAM_OFFSET UNITYSDK_OFFSET(0xBB61E10)
#define FNCMEPFAEKF_AFEAAKDNIAP_OFFSET UNITYSDK_OFFSET(0xBB62910)
#define FNCMEPFAEKF_BCPHCAOLONC_OFFSET UNITYSDK_OFFSET(0xBB65080)
#define FNCMEPFAEKF_BEPIPHJCOOJ_OFFSET UNITYSDK_OFFSET(0xBB591E0)
#define FNCMEPFAEKF_BLFHOBOIMPL_OFFSET UNITYSDK_OFFSET(0xBB606A0)
#define FNCMEPFAEKF_BMPFOJODJDC_1_OFFSET UNITYSDK_OFFSET(0xBB62320)
#define FNCMEPFAEKF_BMPFOJODJDC_2_OFFSET UNITYSDK_OFFSET(0xBB69D60)
#define FNCMEPFAEKF_BMPFOJODJDC_OFFSET UNITYSDK_OFFSET(0xBB5E5F0)
#define FNCMEPFAEKF_CBHGHJMGDGD_OFFSET UNITYSDK_OFFSET(0xBB58D80)
#define FNCMEPFAEKF_CDHOGIEGMCH_OFFSET UNITYSDK_OFFSET(0xBB5F220)
#define FNCMEPFAEKF_DCEAAAGFNKD_OFFSET UNITYSDK_OFFSET(0xBB596F0)
#define FNCMEPFAEKF_ECIMDOLPEBN_OFFSET UNITYSDK_OFFSET(0xBB69300)
#define FNCMEPFAEKF_EDNMHPDOLFI_OFFSET UNITYSDK_OFFSET(0xBB5BE60)
#define FNCMEPFAEKF_FFDCBBJFBDF_OFFSET UNITYSDK_OFFSET(0xBB5E0D0)
#define FNCMEPFAEKF_FPGEDNADMLL_OFFSET UNITYSDK_OFFSET(0xBB5DB50)
#define FNCMEPFAEKF_GIPCGOIDLID_OFFSET UNITYSDK_OFFSET(0xBB62140)
#define FNCMEPFAEKF_ICJFHMMJMDF_OFFSET UNITYSDK_OFFSET(0xBB62D30)
#define FNCMEPFAEKF_IDJPONCMPJN_OFFSET UNITYSDK_OFFSET(0xBB5E9C0)
#define FNCMEPFAEKF_IFIAPMNBALJ_1_OFFSET UNITYSDK_OFFSET(0xBB69320)
#define FNCMEPFAEKF_IFIAPMNBALJ_2_OFFSET UNITYSDK_OFFSET(0xBB6AA60)
#define FNCMEPFAEKF_IFIAPMNBALJ_OFFSET UNITYSDK_OFFSET(0xBB61190)
#define FNCMEPFAEKF_IOHFOOFBLLA_OFFSET UNITYSDK_OFFSET(0xBB671B0)
#define FNCMEPFAEKF_JHENOKCPDPD_OFFSET UNITYSDK_OFFSET(0xBB58D40)
#define FNCMEPFAEKF_JIGFGDJFOCM_OFFSET UNITYSDK_OFFSET(0xBB5E090)
#define FNCMEPFAEKF_JIHEELMAEGB_1_OFFSET UNITYSDK_OFFSET(0xBB5D4F0)
#define FNCMEPFAEKF_JJAKCDKLFIF_1_OFFSET UNITYSDK_OFFSET(0xBB5F6A0)
#define FNCMEPFAEKF_JJAKCDKLFIF_2_OFFSET UNITYSDK_OFFSET(0xBB6B1E0)
#define FNCMEPFAEKF_JJAKCDKLFIF_OFFSET UNITYSDK_OFFSET(0xBB5C2E0)
#define FNCMEPFAEKF_LGBABBBKMIP_OFFSET UNITYSDK_OFFSET(0xBB64650)
#define FNCMEPFAEKF_MMFJLILDOHD_OFFSET UNITYSDK_OFFSET(0xBB5D380)
#define FNCMEPFAEKF_PELLHFGKDMA_OFFSET UNITYSDK_OFFSET(0xBB5F1D0)
#define FNCMEPFAEKF_PHLJHCNEKLA_OFFSET UNITYSDK_OFFSET(0xBB5D0B0)
#define FNCMEPFAEKF_PIFFHEEBDJB_OFFSET UNITYSDK_OFFSET(0xBB671D0)
#define FNCMEPFAEKF_PJADBBIHKPA_OFFSET UNITYSDK_OFFSET(0xBB5C0D0)
#define FNCMEPFAEKF_PMDBNBCFPHA_OFFSET UNITYSDK_OFFSET(0xBB5BEB0)

inline static constexpr unsigned int FNCMEPFAEKF_TypeDefinitionIndex = 50720;

class FNCMEPFAEKF : public ::System::Object
{
public:
	// static const ::System::Single LPKMDGPOEFJ; // 0x0

	static ::System::Boolean JHENOKCPDPD(::UnityEngine::Vector3 OPMPKFEHOBM, ::UnityEngine::Vector3& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + FNCMEPFAEKF_JHENOKCPDPD_OFFSET))(OPMPKFEHOBM, EGEGIMGMJHN);
	}

	static ::System::Single CBHGHJMGDGD(::System::ReadOnlySpan_1_F48FB86071006F3E<::System::Object*> LOOFGEHLJIB)
	{
		return ((::System::Single(*)(::System::ReadOnlySpan_1_F48FB86071006F3E<::System::Object*>))((::PBYTE)hIl2Cpp + FNCMEPFAEKF_CBHGHJMGDGD_OFFSET))(LOOFGEHLJIB);
	}

	static ::System::Void BEPIPHJCOOJ(::Foundation::Geometry::ConicSection2D_1<::Foundation::Geometry::Ellipse2D> HKNJPEDLGIJ, ::Foundation::Geometry::ConicSection2D_1<::Foundation::Geometry::Ellipse2D> PBLKJGBAFED, ::System::Single NJGGCPNJLGJ, ::System::Span_1_9011FAD97750D224<::UnityEngine::Vector2> GGNMIBHGKDE, ::System::Span_1_9011FAD97750D224<::UnityEngine::Vector2> MKAKGAFFPCD, ::System::Int32& MEJLJOJNCON, ::System::Int32& MCLFJFNGBFI)
	{
		return ((::System::Void(*)(::Foundation::Geometry::ConicSection2D_1<::Foundation::Geometry::Ellipse2D>, ::Foundation::Geometry::ConicSection2D_1<::Foundation::Geometry::Ellipse2D>, ::System::Single, ::System::Span_1_9011FAD97750D224<::UnityEngine::Vector2>, ::System::Span_1_9011FAD97750D224<::UnityEngine::Vector2>, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + FNCMEPFAEKF_BEPIPHJCOOJ_OFFSET))(HKNJPEDLGIJ, PBLKJGBAFED, NJGGCPNJLGJ, GGNMIBHGKDE, MKAKGAFFPCD, MEJLJOJNCON, MCLFJFNGBFI);
	}

	static ::System::Nullable_1<::Foundation::Geometry::ConicSection2D> PMDBNBCFPHA(::Dest::Math::Sphere3 ABJOBELOMEE)
	{
		return ((::System::Nullable_1<::Foundation::Geometry::ConicSection2D>(*)(::Dest::Math::Sphere3))((::PBYTE)hIl2Cpp + FNCMEPFAEKF_PMDBNBCFPHA_OFFSET))(ABJOBELOMEE);
	}

	static ::System::ValueTuple_5<::System::Double, ::System::Double, ::System::Double, ::System::Double, ::System::Double> PJADBBIHKPA(::Foundation::Geometry::ConicSection2D LKJGIIABCPD)
	{
		return ((::System::ValueTuple_5<::System::Double, ::System::Double, ::System::Double, ::System::Double, ::System::Double>(*)(::Foundation::Geometry::ConicSection2D))((::PBYTE)hIl2Cpp + FNCMEPFAEKF_PJADBBIHKPA_OFFSET))(LKJGIIABCPD);
	}

	static ::System::Nullable_1<::System::Single> JJAKCDKLFIF(::Dest::Math::Capsule3 DKMCMJOACMB, ::PipelineCamera::FinalCameraData KONLMDBCDCK, ::System::Single EGCKEINKEPM)
	{
		return ((::System::Nullable_1<::System::Single>(*)(::Dest::Math::Capsule3, ::PipelineCamera::FinalCameraData, ::System::Single))((::PBYTE)hIl2Cpp + FNCMEPFAEKF_JJAKCDKLFIF_OFFSET))(DKMCMJOACMB, KONLMDBCDCK, EGCKEINKEPM);
	}

	static ::System::Boolean FPGEDNADMLL(::Dest::Math::Box3 GHGFHDOMJBL, ::System::Span_1_9011FAD97750D224<::UnityEngine::Vector2> CELGKCKLPJC)
	{
		return ((::System::Boolean(*)(::Dest::Math::Box3, ::System::Span_1_9011FAD97750D224<::UnityEngine::Vector2>))((::PBYTE)hIl2Cpp + FNCMEPFAEKF_FPGEDNADMLL_OFFSET))(GHGFHDOMJBL, CELGKCKLPJC);
	}

	static ::System::Void MMFJLILDOHD(::System::Single NPHOPECPHLF, ::System::Single EGCKEINKEPM, ::System::Single& JNOMOFOMFEK, ::System::Single& FINIAEFOGIK, ::System::Single& BGPJHNJKHIN, ::System::Single& PMEHNJABPAN)
	{
		return ((::System::Void(*)(::System::Single, ::System::Single, ::System::Single&, ::System::Single&, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + FNCMEPFAEKF_MMFJLILDOHD_OFFSET))(NPHOPECPHLF, EGCKEINKEPM, JNOMOFOMFEK, FINIAEFOGIK, BGPJHNJKHIN, PMEHNJABPAN);
	}

	static ::System::Boolean FFDCBBJFBDF(::Dest::Math::Box3 GHGFHDOMJBL, ::System::Span_1_9011FAD97750D224<::UnityEngine::Vector3> CELGKCKLPJC)
	{
		return ((::System::Boolean(*)(::Dest::Math::Box3, ::System::Span_1_9011FAD97750D224<::UnityEngine::Vector3>))((::PBYTE)hIl2Cpp + FNCMEPFAEKF_FFDCBBJFBDF_OFFSET))(GHGFHDOMJBL, CELGKCKLPJC);
	}

	static ::Foundation::Geometry::ExtendConvexHull2D::ConvexHull BMPFOJODJDC(::Dest::Math::Sphere3 ABJOBELOMEE, ::PipelineCamera::FinalCameraData KONLMDBCDCK, ::Foundation::Geometry::ExtendConvexHull2D::ConvexHullBuffer IAHPHJEENIA)
	{
		return ((::Foundation::Geometry::ExtendConvexHull2D::ConvexHull(*)(::Dest::Math::Sphere3, ::PipelineCamera::FinalCameraData, ::Foundation::Geometry::ExtendConvexHull2D::ConvexHullBuffer))((::PBYTE)hIl2Cpp + FNCMEPFAEKF_BMPFOJODJDC_OFFSET))(ABJOBELOMEE, KONLMDBCDCK, IAHPHJEENIA);
	}

	static ::System::Void IDJPONCMPJN(::Foundation::Geometry::ConicSection2D_1<::Foundation::Geometry::Ellipse2D> HKNJPEDLGIJ, ::Foundation::Geometry::ConicSection2D_1<::Foundation::Geometry::Ellipse2D> PBLKJGBAFED, ::System::Span_1_9011FAD97750D224<::UnityEngine::Vector2> GGNMIBHGKDE, ::System::Span_1_9011FAD97750D224<::UnityEngine::Vector2> MKAKGAFFPCD, ::System::Int32& MEJLJOJNCON, ::System::Int32& MCLFJFNGBFI)
	{
		return ((::System::Void(*)(::Foundation::Geometry::ConicSection2D_1<::Foundation::Geometry::Ellipse2D>, ::Foundation::Geometry::ConicSection2D_1<::Foundation::Geometry::Ellipse2D>, ::System::Span_1_9011FAD97750D224<::UnityEngine::Vector2>, ::System::Span_1_9011FAD97750D224<::UnityEngine::Vector2>, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + FNCMEPFAEKF_IDJPONCMPJN_OFFSET))(HKNJPEDLGIJ, PBLKJGBAFED, GGNMIBHGKDE, MKAKGAFFPCD, MEJLJOJNCON, MCLFJFNGBFI);
	}

	static ::System::Boolean CDHOGIEGMCH(::Dest::Math::Sphere3 ABJOBELOMEE, ::Foundation::Geometry::ConicSection2D_1<::Foundation::Geometry::Ellipse2D>& KHABCOKNEDJ)
	{
		return ((::System::Boolean(*)(::Dest::Math::Sphere3, ::Foundation::Geometry::ConicSection2D_1<::Foundation::Geometry::Ellipse2D>&))((::PBYTE)hIl2Cpp + FNCMEPFAEKF_CDHOGIEGMCH_OFFSET))(ABJOBELOMEE, KHABCOKNEDJ);
	}

	static ::System::Nullable_1<::System::Single> JJAKCDKLFIF_1(::Dest::Math::Box3 GHGFHDOMJBL, ::PipelineCamera::FinalCameraData KONLMDBCDCK, ::System::Single EGCKEINKEPM)
	{
		return ((::System::Nullable_1<::System::Single>(*)(::Dest::Math::Box3, ::PipelineCamera::FinalCameraData, ::System::Single))((::PBYTE)hIl2Cpp + FNCMEPFAEKF_JJAKCDKLFIF_1_OFFSET))(GHGFHDOMJBL, KONLMDBCDCK, EGCKEINKEPM);
	}

	static ::System::Nullable_1<::System::Single> IFIAPMNBALJ(::Dest::Math::Box3 GHGFHDOMJBL, ::PipelineCamera::FinalCameraData KONLMDBCDCK, ::System::Single EGCKEINKEPM)
	{
		return ((::System::Nullable_1<::System::Single>(*)(::Dest::Math::Box3, ::PipelineCamera::FinalCameraData, ::System::Single))((::PBYTE)hIl2Cpp + FNCMEPFAEKF_IFIAPMNBALJ_OFFSET))(GHGFHDOMJBL, KONLMDBCDCK, EGCKEINKEPM);
	}

	static ::System::Int32 ACDMAFDNMAM(::Dest::Math::Sphere3 ABJOBELOMEE, ::System::Span_1_9011FAD97750D224<::System::Object*> PMAMMGFJAJL)
	{
		return ((::System::Int32(*)(::Dest::Math::Sphere3, ::System::Span_1_9011FAD97750D224<::System::Object*>))((::PBYTE)hIl2Cpp + FNCMEPFAEKF_ACDMAFDNMAM_OFFSET))(ABJOBELOMEE, PMAMMGFJAJL);
	}

	static ::System::ValueTuple_5<::System::Double, ::System::Double, ::System::Double, ::System::Double, ::System::Double> GIPCGOIDLID(::Foundation::Geometry::ConicSection2D LKJGIIABCPD)
	{
		return ((::System::ValueTuple_5<::System::Double, ::System::Double, ::System::Double, ::System::Double, ::System::Double>(*)(::Foundation::Geometry::ConicSection2D))((::PBYTE)hIl2Cpp + FNCMEPFAEKF_GIPCGOIDLID_OFFSET))(LKJGIIABCPD);
	}

	static ::System::Boolean JIGFGDJFOCM(::UnityEngine::Vector3 OPMPKFEHOBM, ::UnityEngine::Vector2& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + FNCMEPFAEKF_JIGFGDJFOCM_OFFSET))(OPMPKFEHOBM, EGEGIMGMJHN);
	}

	static ::Foundation::Geometry::ExtendConvexHull2D::ConvexHull BMPFOJODJDC_1(::Dest::Math::Capsule3 DKMCMJOACMB, ::PipelineCamera::FinalCameraData KONLMDBCDCK, ::Foundation::Geometry::ExtendConvexHull2D::ConvexHullBuffer IAHPHJEENIA)
	{
		return ((::Foundation::Geometry::ExtendConvexHull2D::ConvexHull(*)(::Dest::Math::Capsule3, ::PipelineCamera::FinalCameraData, ::Foundation::Geometry::ExtendConvexHull2D::ConvexHullBuffer))((::PBYTE)hIl2Cpp + FNCMEPFAEKF_BMPFOJODJDC_1_OFFSET))(DKMCMJOACMB, KONLMDBCDCK, IAHPHJEENIA);
	}

	static ::System::Int32 AFEAAKDNIAP(::Foundation::Geometry::ConicSection2D_1<::Foundation::Geometry::Ellipse2D> HKNJPEDLGIJ, ::Foundation::Geometry::ConicSection2D_1<::Foundation::Geometry::Ellipse2D> PBLKJGBAFED, ::System::Span_1_9011FAD97750D224<::System::Object*> OGIBAGAIGLK)
	{
		return ((::System::Int32(*)(::Foundation::Geometry::ConicSection2D_1<::Foundation::Geometry::Ellipse2D>, ::Foundation::Geometry::ConicSection2D_1<::Foundation::Geometry::Ellipse2D>, ::System::Span_1_9011FAD97750D224<::System::Object*>))((::PBYTE)hIl2Cpp + FNCMEPFAEKF_AFEAAKDNIAP_OFFSET))(HKNJPEDLGIJ, PBLKJGBAFED, OGIBAGAIGLK);
	}

	static ::System::Int32 BLFHOBOIMPL(::Dest::Math::Box3 GHGFHDOMJBL, ::System::Span_1_9011FAD97750D224<::System::Object*> PMAMMGFJAJL)
	{
		return ((::System::Int32(*)(::Dest::Math::Box3, ::System::Span_1_9011FAD97750D224<::System::Object*>))((::PBYTE)hIl2Cpp + FNCMEPFAEKF_BLFHOBOIMPL_OFFSET))(GHGFHDOMJBL, PMAMMGFJAJL);
	}

	static ::System::Void BCPHCAOLONC(::Foundation::Geometry::ConicSection2D_1<::Foundation::Geometry::Ellipse2D> HKNJPEDLGIJ, ::Foundation::Geometry::ConicSection2D_1<::Foundation::Geometry::Ellipse2D> PBLKJGBAFED, ::System::Span_1_9011FAD97750D224<::UnityEngine::Vector2> GGNMIBHGKDE, ::System::Span_1_9011FAD97750D224<::System::Object*> OGIBAGAIGLK, ::System::Int32& FNFBFFACNED)
	{
		return ((::System::Void(*)(::Foundation::Geometry::ConicSection2D_1<::Foundation::Geometry::Ellipse2D>, ::Foundation::Geometry::ConicSection2D_1<::Foundation::Geometry::Ellipse2D>, ::System::Span_1_9011FAD97750D224<::UnityEngine::Vector2>, ::System::Span_1_9011FAD97750D224<::System::Object*>, ::System::Int32&))((::PBYTE)hIl2Cpp + FNCMEPFAEKF_BCPHCAOLONC_OFFSET))(HKNJPEDLGIJ, PBLKJGBAFED, GGNMIBHGKDE, OGIBAGAIGLK, FNFBFFACNED);
	}

	static ::System::Void PIFFHEEBDJB(::Foundation::Geometry::ConicSection2D_1<::Foundation::Geometry::Ellipse2D> HKNJPEDLGIJ, ::Foundation::Geometry::ConicSection2D_1<::Foundation::Geometry::Ellipse2D> PBLKJGBAFED, ::System::Span_1_9011FAD97750D224<::UnityEngine::Vector2> MKAKGAFFPCD, ::System::Span_1_9011FAD97750D224<::System::Object*> OGIBAGAIGLK, ::System::Int32& FNFBFFACNED)
	{
		return ((::System::Void(*)(::Foundation::Geometry::ConicSection2D_1<::Foundation::Geometry::Ellipse2D>, ::Foundation::Geometry::ConicSection2D_1<::Foundation::Geometry::Ellipse2D>, ::System::Span_1_9011FAD97750D224<::UnityEngine::Vector2>, ::System::Span_1_9011FAD97750D224<::System::Object*>, ::System::Int32&))((::PBYTE)hIl2Cpp + FNCMEPFAEKF_PIFFHEEBDJB_OFFSET))(HKNJPEDLGIJ, PBLKJGBAFED, MKAKGAFFPCD, OGIBAGAIGLK, FNFBFFACNED);
	}

	static ::System::Span_1_9011FAD97750D224<::System::Object*> JIHEELMAEGB_1(::System::ReadOnlySpan_1_F48FB86071006F3E<::System::Object*> LOOFGEHLJIB, ::System::Span_1_9011FAD97750D224<::System::Object*> GMHFEDHMOFB, ::System::Span_1_9011FAD97750D224<::System::Object*> FDJKLNMJBHJ, ::System::Single JNOMOFOMFEK, ::System::Single FINIAEFOGIK, ::System::Single BGPJHNJKHIN, ::System::Single PMEHNJABPAN)
	{
		return ((::System::Span_1_9011FAD97750D224<::System::Object*>(*)(::System::ReadOnlySpan_1_F48FB86071006F3E<::System::Object*>, ::System::Span_1_9011FAD97750D224<::System::Object*>, ::System::Span_1_9011FAD97750D224<::System::Object*>, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FNCMEPFAEKF_JIHEELMAEGB_1_OFFSET))(LOOFGEHLJIB, GMHFEDHMOFB, FDJKLNMJBHJ, JNOMOFOMFEK, FINIAEFOGIK, BGPJHNJKHIN, PMEHNJABPAN);
	}

	static ::System::Boolean ECIMDOLPEBN(::UnityEngine::Vector2& OPMPKFEHOBM, ::UnityEngine::Vector2 EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector2&, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + FNCMEPFAEKF_ECIMDOLPEBN_OFFSET))(OPMPKFEHOBM, EGEGIMGMJHN);
	}

	static ::System::Int32 LGBABBBKMIP(::Foundation::Geometry::ConicSection2D_1<::Foundation::Geometry::Ellipse2D> HKNJPEDLGIJ, ::Foundation::Geometry::ConicSection2D_1<::Foundation::Geometry::Ellipse2D> PBLKJGBAFED, ::System::ReadOnlySpan_1_F48FB86071006F3E<::System::Single> ENLEBKGPDII, ::System::Span_1_9011FAD97750D224<::System::Object*> OGIBAGAIGLK)
	{
		return ((::System::Int32(*)(::Foundation::Geometry::ConicSection2D_1<::Foundation::Geometry::Ellipse2D>, ::Foundation::Geometry::ConicSection2D_1<::Foundation::Geometry::Ellipse2D>, ::System::ReadOnlySpan_1_F48FB86071006F3E<::System::Single>, ::System::Span_1_9011FAD97750D224<::System::Object*>))((::PBYTE)hIl2Cpp + FNCMEPFAEKF_LGBABBBKMIP_OFFSET))(HKNJPEDLGIJ, PBLKJGBAFED, ENLEBKGPDII, OGIBAGAIGLK);
	}

	static ::System::Nullable_1<::System::Single> IFIAPMNBALJ_1(::Dest::Math::Capsule3 DKMCMJOACMB, ::PipelineCamera::FinalCameraData KONLMDBCDCK, ::System::Single EGCKEINKEPM)
	{
		return ((::System::Nullable_1<::System::Single>(*)(::Dest::Math::Capsule3, ::PipelineCamera::FinalCameraData, ::System::Single))((::PBYTE)hIl2Cpp + FNCMEPFAEKF_IFIAPMNBALJ_1_OFFSET))(DKMCMJOACMB, KONLMDBCDCK, EGCKEINKEPM);
	}

	static ::System::ValueTuple_2<::UnityEngine::Vector2, ::UnityEngine::Vector2> DCEAAAGFNKD(::Foundation::Geometry::ConicSection2D_1<::Foundation::Geometry::Ellipse2D> HLFFCMIFFIB, ::System::Single NJGGCPNJLGJ)
	{
		return ((::System::ValueTuple_2<::UnityEngine::Vector2, ::UnityEngine::Vector2>(*)(::Foundation::Geometry::ConicSection2D_1<::Foundation::Geometry::Ellipse2D>, ::System::Single))((::PBYTE)hIl2Cpp + FNCMEPFAEKF_DCEAAAGFNKD_OFFSET))(HLFFCMIFFIB, NJGGCPNJLGJ);
	}

	static ::Foundation::Geometry::ExtendConvexHull2D::ConvexHull BMPFOJODJDC_2(::Dest::Math::Box3 GHGFHDOMJBL, ::PipelineCamera::FinalCameraData KONLMDBCDCK, ::Foundation::Geometry::ExtendConvexHull2D::ConvexHullBuffer IAHPHJEENIA)
	{
		return ((::Foundation::Geometry::ExtendConvexHull2D::ConvexHull(*)(::Dest::Math::Box3, ::PipelineCamera::FinalCameraData, ::Foundation::Geometry::ExtendConvexHull2D::ConvexHullBuffer))((::PBYTE)hIl2Cpp + FNCMEPFAEKF_BMPFOJODJDC_2_OFFSET))(GHGFHDOMJBL, KONLMDBCDCK, IAHPHJEENIA);
	}

	static ::System::Nullable_1<::System::Single> IFIAPMNBALJ_2(::Dest::Math::Sphere3 ABJOBELOMEE, ::PipelineCamera::FinalCameraData KONLMDBCDCK, ::System::Single EGCKEINKEPM)
	{
		return ((::System::Nullable_1<::System::Single>(*)(::Dest::Math::Sphere3, ::PipelineCamera::FinalCameraData, ::System::Single))((::PBYTE)hIl2Cpp + FNCMEPFAEKF_IFIAPMNBALJ_2_OFFSET))(ABJOBELOMEE, KONLMDBCDCK, EGCKEINKEPM);
	}

	static ::System::Void EDNMHPDOLFI(::System::Span_1_9011FAD97750D224<::UnityEngine::Vector2> LOOFGEHLJIB, ::UnityEngine::Vector2 OPMPKFEHOBM, ::System::Int32& JHFKDGBCOBA)
	{
		return ((::System::Void(*)(::System::Span_1_9011FAD97750D224<::UnityEngine::Vector2>, ::UnityEngine::Vector2, ::System::Int32&))((::PBYTE)hIl2Cpp + FNCMEPFAEKF_EDNMHPDOLFI_OFFSET))(LOOFGEHLJIB, OPMPKFEHOBM, JHFKDGBCOBA);
	}

	static ::System::Int32 PHLJHCNEKLA(::Dest::Math::Capsule3 DKMCMJOACMB, ::System::Span_1_9011FAD97750D224<::System::Object*> PMAMMGFJAJL)
	{
		return ((::System::Int32(*)(::Dest::Math::Capsule3, ::System::Span_1_9011FAD97750D224<::System::Object*>))((::PBYTE)hIl2Cpp + FNCMEPFAEKF_PHLJHCNEKLA_OFFSET))(DKMCMJOACMB, PMAMMGFJAJL);
	}

	static ::System::Void PELLHFGKDMA(::System::Span_1_9011FAD97750D224<::UnityEngine::Vector2> LOOFGEHLJIB, ::UnityEngine::Vector2 OPMPKFEHOBM, ::System::Int32& JHFKDGBCOBA)
	{
		return ((::System::Void(*)(::System::Span_1_9011FAD97750D224<::UnityEngine::Vector2>, ::UnityEngine::Vector2, ::System::Int32&))((::PBYTE)hIl2Cpp + FNCMEPFAEKF_PELLHFGKDMA_OFFSET))(LOOFGEHLJIB, OPMPKFEHOBM, JHFKDGBCOBA);
	}

	static ::System::Boolean IOHFOOFBLLA(::UnityEngine::Vector2& OPMPKFEHOBM, ::UnityEngine::Vector2 EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector2&, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + FNCMEPFAEKF_IOHFOOFBLLA_OFFSET))(OPMPKFEHOBM, EGEGIMGMJHN);
	}

	static ::System::Nullable_1<::System::Single> JJAKCDKLFIF_2(::Dest::Math::Sphere3 ABJOBELOMEE, ::PipelineCamera::FinalCameraData KONLMDBCDCK, ::System::Single EGCKEINKEPM)
	{
		return ((::System::Nullable_1<::System::Single>(*)(::Dest::Math::Sphere3, ::PipelineCamera::FinalCameraData, ::System::Single))((::PBYTE)hIl2Cpp + FNCMEPFAEKF_JJAKCDKLFIF_2_OFFSET))(ABJOBELOMEE, KONLMDBCDCK, EGCKEINKEPM);
	}

	static ::System::Int32 ICJFHMMJMDF(::Foundation::Geometry::ConicSection2D_1<::Foundation::Geometry::Ellipse2D> HKNJPEDLGIJ, ::Foundation::Geometry::ConicSection2D_1<::Foundation::Geometry::Ellipse2D> PBLKJGBAFED, ::System::Span_1_9011FAD97750D224<::System::Single> ENLEBKGPDII, ::System::Single HGOHCNBBDHC)
	{
		return ((::System::Int32(*)(::Foundation::Geometry::ConicSection2D_1<::Foundation::Geometry::Ellipse2D>, ::Foundation::Geometry::ConicSection2D_1<::Foundation::Geometry::Ellipse2D>, ::System::Span_1_9011FAD97750D224<::System::Single>, ::System::Single))((::PBYTE)hIl2Cpp + FNCMEPFAEKF_ICJFHMMJMDF_OFFSET))(HKNJPEDLGIJ, PBLKJGBAFED, ENLEBKGPDII, HGOHCNBBDHC);
	}
};
