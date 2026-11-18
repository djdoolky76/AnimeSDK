#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/Curvy/CurvyClamping.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Space.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace FluffyUnderware::Curvy { class CurvyMetadataBase_Zone; }
namespace FluffyUnderware::Curvy { class CurvySpline; }
namespace FluffyUnderware::Curvy { class CurvySplineSegment; }
namespace MoleMole::Spline { class NAPPointMeta; }
namespace MoleMole::Spline { class NAPZoneMeta; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define HEGAIBENLJF_ADMMMJNOIHB_OFFSET UNITYSDK_OFFSET(0x17AEE170)
#define HEGAIBENLJF_AJAIGJPJDEK_OFFSET UNITYSDK_OFFSET(0x7B3CF0)
#define HEGAIBENLJF_AKHADAALAEN_OFFSET UNITYSDK_OFFSET(0x7B39C0)
#define HEGAIBENLJF_BBGPGGBCBPC_OFFSET UNITYSDK_OFFSET(0x7B3D20)
#define HEGAIBENLJF_BDLDLDBHAFE_OFFSET UNITYSDK_OFFSET(0x7B3C70)
#define HEGAIBENLJF_BILPALBCCHA_1_OFFSET UNITYSDK_OFFSET(0x7B3AB0)
#define HEGAIBENLJF_BILPALBCCHA_2_OFFSET UNITYSDK_OFFSET(0x7B3D50)
#define HEGAIBENLJF_BILPALBCCHA_OFFSET UNITYSDK_OFFSET(0x7B3A90)
#define HEGAIBENLJF_BKKKLJDAOHP_OFFSET UNITYSDK_OFFSET(0x7B3D70)
#define HEGAIBENLJF_DAJOPDDCCHF_OFFSET UNITYSDK_OFFSET(0x7B3A30)
#define HEGAIBENLJF_DEFJIFIOKKN_1_OFFSET UNITYSDK_OFFSET(0x7B3A40)
#define HEGAIBENLJF_DEFJIFIOKKN_OFFSET UNITYSDK_OFFSET(0x7B39D0)
#define HEGAIBENLJF_DOOHECIJILI_OFFSET UNITYSDK_OFFSET(0x7B3B40)
#define HEGAIBENLJF_EEPLEBNHLPM_OFFSET UNITYSDK_OFFSET(0x7B3D10)
#define HEGAIBENLJF_EFCPGLFIDLG_OFFSET UNITYSDK_OFFSET(0x7B3BE0)
#define HEGAIBENLJF_ELCALANILJF_OFFSET UNITYSDK_OFFSET(0x7B3A70)
#define HEGAIBENLJF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x7B39A0)
#define HEGAIBENLJF_EQUALS_OFFSET UNITYSDK_OFFSET(0x7B3900)
#define HEGAIBENLJF_FILIKHJMENK_OFFSET UNITYSDK_OFFSET(0x7B3C60)
#define HEGAIBENLJF_GCMAONHGIGC_OFFSET UNITYSDK_OFFSET(0x7B3AC0)
#define HEGAIBENLJF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x7B39B0)
#define HEGAIBENLJF_HLMAMDPNHHC_OFFSET UNITYSDK_OFFSET(0x7B3D80)
#define HEGAIBENLJF_HLPHPBAODIF_OFFSET UNITYSDK_OFFSET(0x7B3C80)
#define HEGAIBENLJF_INCFIJKMIGG_OFFSET UNITYSDK_OFFSET(0x17AEDAC0)
#define HEGAIBENLJF_JGBGPJACDOG_OFFSET UNITYSDK_OFFSET(0x7B3BF0)
#define HEGAIBENLJF_JHJKBAPGJJM_OFFSET UNITYSDK_OFFSET(0x7B3A10)
#define HEGAIBENLJF_JKEDELHJLNG_OFFSET UNITYSDK_OFFSET(0x7B3CE0)
#define HEGAIBENLJF_JPCDJKGADNL_OFFSET UNITYSDK_OFFSET(0x7B3B70)
#define HEGAIBENLJF_LLOPFAEGHAB_OFFSET UNITYSDK_OFFSET(0x7B3B00)
#define HEGAIBENLJF_LOIJMCLLLHG_OFFSET UNITYSDK_OFFSET(0x7B3D60)
#define HEGAIBENLJF_MEINBFKPCBO_OFFSET UNITYSDK_OFFSET(0x7B3B30)
#define HEGAIBENLJF_MMMCJDIDFPG_OFFSET UNITYSDK_OFFSET(0x7B3D40)
#define HEGAIBENLJF_NFBJFKOHJGE_OFFSET UNITYSDK_OFFSET(0x7B3AA0)
#define HEGAIBENLJF_NLOHNAPDCOH_OFFSET UNITYSDK_OFFSET(0x7B3AD0)
#define HEGAIBENLJF_NOGJIJMACNO_OFFSET UNITYSDK_OFFSET(0x17AEEAB0)
#define HEGAIBENLJF_ODEDBNNMEBC_OFFSET UNITYSDK_OFFSET(0x7B3B20)
#define HEGAIBENLJF_PMAKCFMLHKE_OFFSET UNITYSDK_OFFSET(0x7B3A00)
#define HEGAIBENLJF__CTOR_OFFSET UNITYSDK_OFFSET(0x3839A0)

inline static constexpr unsigned int HEGAIBENLJF_TypeDefinitionIndex = 83047;

struct alignas(8) HEGAIBENLJF
{
	::FluffyUnderware::Curvy::CurvySpline* AGDEJOENBJK; // 0x10
	::System::Boolean FBMKEOMCBHA; // 0x18
	::System::Byte _padding0[0x3];
	::UnityEngine::Space EKGCNEJNDJN; // 0x1C

	::System::Void _ctor(::FluffyUnderware::Curvy::CurvySpline* IFHEOPLLDGC, ::System::Boolean GJKBCLEKKFF, ::UnityEngine::Space GDIPJHMLFHD)
	{
		return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::CurvySpline*, ::System::Boolean, ::UnityEngine::Space))((::PBYTE)hIl2Cpp + HEGAIBENLJF__CTOR_OFFSET))(this, IFHEOPLLDGC, GJKBCLEKKFF, GDIPJHMLFHD);
	}

	/*
	::System::Boolean Equals(::HEGAIBENLJF LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::HEGAIBENLJF))((::PBYTE)hIl2Cpp + HEGAIBENLJF_EQUALS_OFFSET))(this, LIBPKNHDIGP);
	}
	*/

	::System::Boolean Equals_1(::System::Object* EIFONLCJOPG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HEGAIBENLJF_EQUALS_1_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HEGAIBENLJF_GETHASHCODE_OFFSET))(this);
	}

	/*
	static ::System::Boolean INCFIJKMIGG(::HEGAIBENLJF KILPCOMOCMD, ::HEGAIBENLJF BBCODANAFGI)
	{
		return ((::System::Boolean(*)(::HEGAIBENLJF, ::HEGAIBENLJF))((::PBYTE)hIl2Cpp + HEGAIBENLJF_INCFIJKMIGG_OFFSET))(KILPCOMOCMD, BBCODANAFGI);
	}
	*/

	::FluffyUnderware::Curvy::CurvySplineSegment* AKHADAALAEN(::System::Single BDEDDEGJFKL, ::FluffyUnderware::Curvy::CurvyClamping AIMMCHAMJNL)
	{
		return ((::FluffyUnderware::Curvy::CurvySplineSegment*(*)(::PVOID, ::System::Single, ::FluffyUnderware::Curvy::CurvyClamping))((::PBYTE)hIl2Cpp + HEGAIBENLJF_AKHADAALAEN_OFFSET))(this, BDEDDEGJFKL, AIMMCHAMJNL);
	}

	::System::Single DEFJIFIOKKN(::UnityEngine::Vector3 OHOGDOMNHNK)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + HEGAIBENLJF_DEFJIFIOKKN_OFFSET))(this, OHOGDOMNHNK);
	}

	::System::Single PMAKCFMLHKE(::System::Single KDKFJJPAJAE, ::FluffyUnderware::Curvy::CurvyClamping AIMMCHAMJNL)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::FluffyUnderware::Curvy::CurvyClamping))((::PBYTE)hIl2Cpp + HEGAIBENLJF_PMAKCFMLHKE_OFFSET))(this, KDKFJJPAJAE, AIMMCHAMJNL);
	}

	/*
	static ::HEGAIBENLJF ADMMMJNOIHB()
	{
		return ((::HEGAIBENLJF(*)())((::PBYTE)hIl2Cpp + HEGAIBENLJF_ADMMMJNOIHB_OFFSET))();
	}
	*/

	::UnityEngine::Quaternion JHJKBAPGJJM(::System::Single KDKFJJPAJAE, ::System::Boolean COFDANGHLBC)
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + HEGAIBENLJF_JHJKBAPGJJM_OFFSET))(this, KDKFJJPAJAE, COFDANGHLBC);
	}

	::System::Void DAJOPDDCCHF(::System::Single KDKFJJPAJAE, ::UnityEngine::Vector3& OHOGDOMNHNK, ::UnityEngine::Vector3& PCOEGKNOBHA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + HEGAIBENLJF_DAJOPDDCCHF_OFFSET))(this, KDKFJJPAJAE, OHOGDOMNHNK, PCOEGKNOBHA);
	}

	::System::Single DEFJIFIOKKN_1(::UnityEngine::Vector3 OHOGDOMNHNK, ::UnityEngine::Vector3& DCAMLGNFDEO)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + HEGAIBENLJF_DEFJIFIOKKN_1_OFFSET))(this, OHOGDOMNHNK, DCAMLGNFDEO);
	}

	::UnityEngine::Vector3 ELCALANILJF(::System::Single KDKFJJPAJAE)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HEGAIBENLJF_ELCALANILJF_OFFSET))(this, KDKFJJPAJAE);
	}

	/*
	static ::System::Boolean NOGJIJMACNO(::HEGAIBENLJF KILPCOMOCMD, ::HEGAIBENLJF BBCODANAFGI)
	{
		return ((::System::Boolean(*)(::HEGAIBENLJF, ::HEGAIBENLJF))((::PBYTE)hIl2Cpp + HEGAIBENLJF_NOGJIJMACNO_OFFSET))(KILPCOMOCMD, BBCODANAFGI);
	}
	*/

	::FluffyUnderware::Curvy::CurvySplineSegment* BILPALBCCHA(::System::Single BDEDDEGJFKL)
	{
		return ((::FluffyUnderware::Curvy::CurvySplineSegment*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HEGAIBENLJF_BILPALBCCHA_OFFSET))(this, BDEDDEGJFKL);
	}

	::MoleMole::Spline::NAPZoneMeta* NFBJFKOHJGE(::System::String* JICOHPFJHLM)
	{
		return ((::MoleMole::Spline::NAPZoneMeta*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HEGAIBENLJF_NFBJFKOHJGE_OFFSET))(this, JICOHPFJHLM);
	}

	::FluffyUnderware::Curvy::CurvySplineSegment* BILPALBCCHA_1(::System::Single BDEDDEGJFKL, ::System::Single JBCNPOHMGPE)
	{
		return ((::FluffyUnderware::Curvy::CurvySplineSegment*(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + HEGAIBENLJF_BILPALBCCHA_1_OFFSET))(this, BDEDDEGJFKL, JBCNPOHMGPE);
	}

	::System::Collections::Generic::IReadOnlyList_1<::FluffyUnderware::Curvy::CurvyMetadataBase_Zone*>* GCMAONHGIGC()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::FluffyUnderware::Curvy::CurvyMetadataBase_Zone*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEGAIBENLJF_GCMAONHGIGC_OFFSET))(this);
	}

	::UnityEngine::Vector3 NLOHNAPDCOH(::UnityEngine::Vector3 OHOGDOMNHNK)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + HEGAIBENLJF_NLOHNAPDCOH_OFFSET))(this, OHOGDOMNHNK);
	}

	::UnityEngine::Vector3 LLOPFAEGHAB(::System::Single BDEDDEGJFKL)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HEGAIBENLJF_LLOPFAEGHAB_OFFSET))(this, BDEDDEGJFKL);
	}

	::FluffyUnderware::Curvy::CurvySplineSegment* ODEDBNNMEBC(::System::Single BDEDDEGJFKL, ::System::Single JBCNPOHMGPE)
	{
		return ((::FluffyUnderware::Curvy::CurvySplineSegment*(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + HEGAIBENLJF_ODEDBNNMEBC_OFFSET))(this, BDEDDEGJFKL, JBCNPOHMGPE);
	}

	::MoleMole::Spline::NAPPointMeta* MEINBFKPCBO(::System::String* JICOHPFJHLM)
	{
		return ((::MoleMole::Spline::NAPPointMeta*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HEGAIBENLJF_MEINBFKPCBO_OFFSET))(this, JICOHPFJHLM);
	}

	::System::Single DOOHECIJILI(::UnityEngine::Vector3 OHOGDOMNHNK)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + HEGAIBENLJF_DOOHECIJILI_OFFSET))(this, OHOGDOMNHNK);
	}

	/*
	::HEGAIBENLJF JPCDJKGADNL(::FluffyUnderware::Curvy::CurvySpline* PJLEHOLOIGI)
	{
		return ((::HEGAIBENLJF(*)(::PVOID, ::FluffyUnderware::Curvy::CurvySpline*))((::PBYTE)hIl2Cpp + HEGAIBENLJF_JPCDJKGADNL_OFFSET))(this, PJLEHOLOIGI);
	}
	*/

	::System::Void EFCPGLFIDLG(::System::Single KDKFJJPAJAE, ::UnityEngine::Vector3& OHOGDOMNHNK, ::UnityEngine::Vector3& PCOEGKNOBHA, ::UnityEngine::Vector3& KBHFBLJPFJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + HEGAIBENLJF_EFCPGLFIDLG_OFFSET))(this, KDKFJJPAJAE, OHOGDOMNHNK, PCOEGKNOBHA, KBHFBLJPFJH);
	}

	::System::Boolean JGBGPJACDOG(::System::Object* MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HEGAIBENLJF_JGBGPJACDOG_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Single FILIKHJMENK()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HEGAIBENLJF_FILIKHJMENK_OFFSET))(this);
	}

	::System::Boolean BDLDLDBHAFE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HEGAIBENLJF_BDLDLDBHAFE_OFFSET))(this);
	}

	::System::Int32 HLPHPBAODIF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HEGAIBENLJF_HLPHPBAODIF_OFFSET))(this);
	}

	::System::Void JKEDELHJLNG(::System::Single KDKFJJPAJAE, ::System::Collections::Generic::IList_1<::FluffyUnderware::Curvy::CurvyMetadataBase_Zone*>* IGAAKDOIPNN, ::FluffyUnderware::Curvy::CurvyClamping AIMMCHAMJNL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Collections::Generic::IList_1<::FluffyUnderware::Curvy::CurvyMetadataBase_Zone*>*, ::FluffyUnderware::Curvy::CurvyClamping))((::PBYTE)hIl2Cpp + HEGAIBENLJF_JKEDELHJLNG_OFFSET))(this, KDKFJJPAJAE, IGAAKDOIPNN, AIMMCHAMJNL);
	}

	::UnityEngine::Vector3 AJAIGJPJDEK(::System::Single KDKFJJPAJAE)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HEGAIBENLJF_AJAIGJPJDEK_OFFSET))(this, KDKFJJPAJAE);
	}

	::System::Single EEPLEBNHLPM(::System::Single BDEDDEGJFKL, ::FluffyUnderware::Curvy::CurvyClamping AIMMCHAMJNL)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::FluffyUnderware::Curvy::CurvyClamping))((::PBYTE)hIl2Cpp + HEGAIBENLJF_EEPLEBNHLPM_OFFSET))(this, BDEDDEGJFKL, AIMMCHAMJNL);
	}

	::UnityEngine::Vector3 BBGPGGBCBPC(::System::Single BDEDDEGJFKL)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HEGAIBENLJF_BBGPGGBCBPC_OFFSET))(this, BDEDDEGJFKL);
	}

	::System::Collections::Generic::IReadOnlyList_1<::FluffyUnderware::Curvy::CurvyMetadataBase_Zone*>* MMMCJDIDFPG()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::FluffyUnderware::Curvy::CurvyMetadataBase_Zone*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEGAIBENLJF_MMMCJDIDFPG_OFFSET))(this);
	}

	::FluffyUnderware::Curvy::CurvySplineSegment* BILPALBCCHA_2(::System::Single BDEDDEGJFKL, ::System::Boolean& NGILJHLHLLH)
	{
		return ((::FluffyUnderware::Curvy::CurvySplineSegment*(*)(::PVOID, ::System::Single, ::System::Boolean&))((::PBYTE)hIl2Cpp + HEGAIBENLJF_BILPALBCCHA_2_OFFSET))(this, BDEDDEGJFKL, NGILJHLHLLH);
	}

	::System::Void LOIJMCLLLHG(::System::Single BDEDDEGJFKL, ::System::Collections::Generic::IList_1<::FluffyUnderware::Curvy::CurvyMetadataBase_Zone*>* IGAAKDOIPNN, ::FluffyUnderware::Curvy::CurvyClamping AIMMCHAMJNL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Collections::Generic::IList_1<::FluffyUnderware::Curvy::CurvyMetadataBase_Zone*>*, ::FluffyUnderware::Curvy::CurvyClamping))((::PBYTE)hIl2Cpp + HEGAIBENLJF_LOIJMCLLLHG_OFFSET))(this, BDEDDEGJFKL, IGAAKDOIPNN, AIMMCHAMJNL);
	}

	::System::Boolean BKKKLJDAOHP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HEGAIBENLJF_BKKKLJDAOHP_OFFSET))(this);
	}

	::UnityEngine::Vector3 HLMAMDPNHHC(::System::Single KDKFJJPAJAE)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HEGAIBENLJF_HLMAMDPNHHC_OFFSET))(this, KDKFJJPAJAE);
	}
};
