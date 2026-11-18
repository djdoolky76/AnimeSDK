#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LDPJDMMNEBL.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/CEGPEOCMJOM.h"
#include "unitysdk/DMFPOGCDPAL.h"
#include "unitysdk/MoleMole/Vehicle/VehicleCollisions.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"

class COAOBLBCKKJ;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Vehicle { class VehicleConfig; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define EMLDNCLBCLB_ABDLBKEAHGM_OFFSET UNITYSDK_OFFSET(0x1724A4E0)
#define EMLDNCLBCLB_BBKHOPFCIAK_OFFSET UNITYSDK_OFFSET(0x1724A7A0)
#define EMLDNCLBCLB_DAFLHFGODJM_OFFSET UNITYSDK_OFFSET(0x17249CD0)
#define EMLDNCLBCLB_FGCKHBAGJMD_OFFSET UNITYSDK_OFFSET(0x17249C70)
#define EMLDNCLBCLB_GJPBGMGBJMH_OFFSET UNITYSDK_OFFSET(0x1724A7C0)
#define EMLDNCLBCLB_GLGHLPBPKIC_OFFSET UNITYSDK_OFFSET(0x17249B90)
#define EMLDNCLBCLB_JEACJOLCGEF_OFFSET UNITYSDK_OFFSET(0x17249B10)
#define EMLDNCLBCLB_KJEOPBGNEAK_1_OFFSET UNITYSDK_OFFSET(0x1724A4F0)
#define EMLDNCLBCLB_KJEOPBGNEAK_OFFSET UNITYSDK_OFFSET(0x17249DE0)
#define EMLDNCLBCLB_LMFNEPOKNLD_OFFSET UNITYSDK_OFFSET(0x172472D0)
#define EMLDNCLBCLB_OKJCHFGIKBH_OFFSET UNITYSDK_OFFSET(0x17247430)
#define EMLDNCLBCLB_PBBMFMOKIKI_OFFSET UNITYSDK_OFFSET(0x1724A410)
#define EMLDNCLBCLB_PJEFJMKCLBL_OFFSET UNITYSDK_OFFSET(0x17247370)
#define EMLDNCLBCLB__CTOR_OFFSET UNITYSDK_OFFSET(0x17246FB0)

inline static constexpr unsigned int EMLDNCLBCLB_TypeDefinitionIndex = 48397;

class EMLDNCLBCLB : public ::System::Object
{
public:
	::Il2CppArray<::LDPJDMMNEBL>* CKOMOBLOPPL; // 0x10
	::Il2CppArray<::LDPJDMMNEBL>* IEAMHPIFIME; // 0x18
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* OKDGLNABBAN; // 0x20
	::System::Collections::Generic::HashSet_1<::System::UInt32>* OEFOLDNFEHJ; // 0x28
	::MoleMole::Vehicle::VehicleConfig* CEJENBBHBBG; // 0x30
	::System::Collections::Generic::List_1<::System::Single>* JDLJEOGOJGP; // 0x38
	::System::Int32 MEGEBFPNHFH; // 0x40
	::UnityEngine::Vector3 EBGHNBDBGCI; // 0x44
	::System::Int32 DNNHMFHPLOI; // 0x50
	::System::Single HJMMLINENKM; // 0x54
	::System::Single GKDBKEOAHIH; // 0x58
	::System::Single MNNKOBCJDGD; // 0x5C
	::UnityEngine::Vector3 _PFGEMJIJIFH_k__BackingField; // 0x60
	::System::Int32 MNEGFGJGEFD; // 0x6C
	::System::Single PJEEPAJKKEE; // 0x70
	::System::Single CGDAEOKNCJP; // 0x74

	::System::Void _ctor(::MoleMole::Vehicle::VehicleCollisions& MBAHMLNKAHK, ::MoleMole::Vehicle::VehicleConfig* FKHFPFCEINI, ::UnityEngine::Transform* GKBJOPJKCLB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Vehicle::VehicleCollisions&, ::MoleMole::Vehicle::VehicleConfig*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + EMLDNCLBCLB__CTOR_OFFSET))(this, MBAHMLNKAHK, FKHFPFCEINI, GKBJOPJKCLB);
	}

	static ::System::Void LMFNEPOKNLD(::UnityEngine::Matrix4x4& BMNNJKCDLNP, ::Il2CppArray<::LDPJDMMNEBL>* IEAMHPIFIME)
	{
		return ((::System::Void(*)(::UnityEngine::Matrix4x4&, ::Il2CppArray<::LDPJDMMNEBL>*))((::PBYTE)hIl2Cpp + EMLDNCLBCLB_LMFNEPOKNLD_OFFSET))(BMNNJKCDLNP, IEAMHPIFIME);
	}

	static ::System::Single PJEFJMKCLBL(::System::Single AHFDFBDFEDG, ::System::Single PBHGILECHHO, ::System::Single HKFIAJPCKBF, ::System::Single PFMKIMBJPCO)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EMLDNCLBCLB_PJEFJMKCLBL_OFFSET))(AHFDFBDFEDG, PBHGILECHHO, HKFIAJPCKBF, PFMKIMBJPCO);
	}

	::CEGPEOCMJOM OKJCHFGIKBH(::DMFPOGCDPAL& AAOCANGHBDG, ::MoleMole::Battle::Entity* CJCKFIPIGMG, ::System::Boolean EIOMHKBHOCG, ::System::Boolean LNAJPEEILAC, ::System::Single PBCAAADNEPK, ::COAOBLBCKKJ* LDPBOMMBNBN)
	{
		return ((::CEGPEOCMJOM(*)(::PVOID, ::DMFPOGCDPAL&, ::MoleMole::Battle::Entity*, ::System::Boolean, ::System::Boolean, ::System::Single, ::COAOBLBCKKJ*))((::PBYTE)hIl2Cpp + EMLDNCLBCLB_OKJCHFGIKBH_OFFSET))(this, AAOCANGHBDG, CJCKFIPIGMG, EIOMHKBHOCG, LNAJPEEILAC, PBCAAADNEPK, LDPBOMMBNBN);
	}

	static ::UnityEngine::Vector3 KJEOPBGNEAK(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* BOGPAHGJOJK)
	{
		return ((::UnityEngine::Vector3(*)(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + EMLDNCLBCLB_KJEOPBGNEAK_OFFSET))(BOGPAHGJOJK);
	}

	::System::Single JEACJOLCGEF(::System::Single OIGEFAAFELB)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EMLDNCLBCLB_JEACJOLCGEF_OFFSET))(this, OIGEFAAFELB);
	}

	::System::Void ABDLBKEAHGM(::UnityEngine::Vector3 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + EMLDNCLBCLB_ABDLBKEAHGM_OFFSET))(this, EGEGIMGMJHN);
	}

	static ::System::ValueTuple_2<::UnityEngine::Vector3, ::System::Single> GLGHLPBPKIC(::UnityEngine::Vector3& PMKOELLKDDN)
	{
		return ((::System::ValueTuple_2<::UnityEngine::Vector3, ::System::Single>(*)(::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + EMLDNCLBCLB_GLGHLPBPKIC_OFFSET))(PMKOELLKDDN);
	}

	static ::System::Single KJEOPBGNEAK_1(::System::Collections::Generic::List_1<::System::Single>* BOGPAHGJOJK)
	{
		return ((::System::Single(*)(::System::Collections::Generic::List_1<::System::Single>*))((::PBYTE)hIl2Cpp + EMLDNCLBCLB_KJEOPBGNEAK_1_OFFSET))(BOGPAHGJOJK);
	}

	static ::System::Single FGCKHBAGJMD(::System::Single IBCAFNKFIDH)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + EMLDNCLBCLB_FGCKHBAGJMD_OFFSET))(IBCAFNKFIDH);
	}

	::UnityEngine::Vector3 BBKHOPFCIAK()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + EMLDNCLBCLB_BBKHOPFCIAK_OFFSET))(this);
	}

	static ::System::Void PBBMFMOKIKI(::System::Single& AHFDFBDFEDG, ::System::Single& PBHGILECHHO, ::System::Single& HKFIAJPCKBF, ::System::Single& PFMKIMBJPCO, ::System::Single HFMHOELKCAJ)
	{
		return ((::System::Void(*)(::System::Single&, ::System::Single&, ::System::Single&, ::System::Single&, ::System::Single))((::PBYTE)hIl2Cpp + EMLDNCLBCLB_PBBMFMOKIKI_OFFSET))(AHFDFBDFEDG, PBHGILECHHO, HKFIAJPCKBF, PFMKIMBJPCO, HFMHOELKCAJ);
	}

	::System::Boolean GJPBGMGBJMH()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EMLDNCLBCLB_GJPBGMGBJMH_OFFSET))(this);
	}

	static ::System::Single DAFLHFGODJM(::System::Single ELHMOANKHFM, ::System::Single LNJFKBBFABK)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EMLDNCLBCLB_DAFLHFGODJM_OFFSET))(ELHMOANKHFM, LNJFKBBFABK);
	}
};
