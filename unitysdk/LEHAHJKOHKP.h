#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LEHAHJKOHKP_AttackChangeReason.h"
#include "unitysdk/LEHAHJKOHKP_HpChangeReason.h"
#include "unitysdk/LEHAHJKOHKP_ProbabilityChangeReason.h"
#include "unitysdk/System/Object.h"
class BKOBHMFCKJH;
class EEADJIANBIH;
class HAJDFCHFBGN;
class HDPFOEOKDDB;
class IPAAKFNPFFJ;
class JNBAOJJFFBL;
class KAKADGHNMFK;
class LKPJIAAHLBG;
class LMJPODEEGKK;
class NANAIOBBDOE;
class NCLOFDLCAFL;
class OMKCHHDANDK;
namespace RPG::GameCore { class ChimeraDuelStatusConfig; }

#define LEHAHJKOHKP_CBNHGIIOADA_OFFSET UNITYSDK_OFFSET(0xB652850)
#define LEHAHJKOHKP_CFNGFLGGGHE_OFFSET UNITYSDK_OFFSET(0xB652E00)
#define LEHAHJKOHKP_CTOR_OFFSET UNITYSDK_OFFSET(0xB651F80)
#define LEHAHJKOHKP_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB652050)
#define LEHAHJKOHKP_DJJDCNMDDKI_OFFSET UNITYSDK_OFFSET(0xB652AC0)
#define LEHAHJKOHKP_GIOPLIMIIBI_OFFSET UNITYSDK_OFFSET(0xB6536C0)
#define LEHAHJKOHKP_HJKFHGJDEIK_OFFSET UNITYSDK_OFFSET(0xB652250)
#define LEHAHJKOHKP_ICCJMKPMFFC_OFFSET UNITYSDK_OFFSET(0xB652A20)
#define LEHAHJKOHKP_KCIJGEGBPHI_OFFSET UNITYSDK_OFFSET(0xB652D30)
#define LEHAHJKOHKP_KJBIAIOHFGE_OFFSET UNITYSDK_OFFSET(0xB653010)
#define LEHAHJKOHKP_KKPHFLJDKDH_OFFSET UNITYSDK_OFFSET(0xB653370)
#define LEHAHJKOHKP_MGFFOJIJDGP_OFFSET UNITYSDK_OFFSET(0xB6520A0)
#define LEHAHJKOHKP_MNEJKHHHFFL_OFFSET UNITYSDK_OFFSET(0xB653280)
#define LEHAHJKOHKP_NKGAJOLMDDO_OFFSET UNITYSDK_OFFSET(0xB6534B0)

inline static constexpr unsigned int LEHAHJKOHKP_TypeDefinitionIndex = 77423;

	class LEHAHJKOHKP : public ::System::Object
	{
	public:
		::LMJPODEEGKK* FKINCGODJEP; // 0x10
		::HAJDFCHFBGN* JDANNEMAPJK; // 0x18
		::JNBAOJJFFBL* ANEMEJKCLHB; // 0x20
		::BKOBHMFCKJH* LGEFCADNPMN; // 0x28
		::EEADJIANBIH* JKCNFDEAMDJ; // 0x30
		::NANAIOBBDOE* DAFEKGGLBHO; // 0x38
		::LKPJIAAHLBG* EDBJCFAKPCG; // 0x40
		::OMKCHHDANDK* HBONDIFNNHB; // 0x48
		::NCLOFDLCAFL* NDPLHDEGAGL; // 0x50
		::IPAAKFNPFFJ* HINDODOFCLK; // 0x58
		::System::Void _ctor(::LMJPODEEGKK* a1, ::BKOBHMFCKJH* a2, ::IPAAKFNPFFJ* a3, ::JNBAOJJFFBL* a4, ::HAJDFCHFBGN* a5, ::OMKCHHDANDK* a6, ::HDPFOEOKDDB* a7)
		{
			return ((::System::Void(*)(::PVOID, ::LMJPODEEGKK*, ::BKOBHMFCKJH*, ::IPAAKFNPFFJ*, ::JNBAOJJFFBL*, ::HAJDFCHFBGN*, ::OMKCHHDANDK*, ::HDPFOEOKDDB*))((::PBYTE)hIl2Cpp + LEHAHJKOHKP_CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEHAHJKOHKP_DISPOSE_OFFSET))(this);
		}

		::System::Void MGFFOJIJDGP(::KAKADGHNMFK* a1, ::KAKADGHNMFK* a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::KAKADGHNMFK*, ::KAKADGHNMFK*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + LEHAHJKOHKP_MGFFOJIJDGP_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void CBNHGIIOADA(::KAKADGHNMFK* a1, ::KAKADGHNMFK* a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5)
		{
			return ((::System::Void(*)(::PVOID, ::KAKADGHNMFK*, ::KAKADGHNMFK*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + LEHAHJKOHKP_CBNHGIIOADA_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void ICCJMKPMFFC(::KAKADGHNMFK* a1, ::KAKADGHNMFK* a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5)
		{
			return ((::System::Void(*)(::PVOID, ::KAKADGHNMFK*, ::KAKADGHNMFK*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + LEHAHJKOHKP_ICCJMKPMFFC_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void HJKFHGJDEIK(::LEHAHJKOHKP_HpChangeReason a1, ::KAKADGHNMFK* a2, ::KAKADGHNMFK* a3, ::System::Int32 a4, ::System::Int32 a5)
		{
			return ((::System::Void(*)(::PVOID, ::LEHAHJKOHKP_HpChangeReason, ::KAKADGHNMFK*, ::KAKADGHNMFK*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + LEHAHJKOHKP_HJKFHGJDEIK_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void DJJDCNMDDKI(::KAKADGHNMFK* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::KAKADGHNMFK*, ::System::Int32))((::PBYTE)hIl2Cpp + LEHAHJKOHKP_DJJDCNMDDKI_OFFSET))(this, a1, a2);
		}

		::System::Void KCIJGEGBPHI(::KAKADGHNMFK* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::KAKADGHNMFK*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + LEHAHJKOHKP_KCIJGEGBPHI_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void CFNGFLGGGHE(::LEHAHJKOHKP_AttackChangeReason a1, ::KAKADGHNMFK* a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::LEHAHJKOHKP_AttackChangeReason, ::KAKADGHNMFK*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + LEHAHJKOHKP_CFNGFLGGGHE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void KJBIAIOHFGE(::KAKADGHNMFK* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::KAKADGHNMFK*, ::System::Int32))((::PBYTE)hIl2Cpp + LEHAHJKOHKP_KJBIAIOHFGE_OFFSET))(this, a1, a2);
		}

		::System::Void MNEJKHHHFFL(::LEHAHJKOHKP_ProbabilityChangeReason a1, ::KAKADGHNMFK* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::LEHAHJKOHKP_ProbabilityChangeReason, ::KAKADGHNMFK*, ::System::Single))((::PBYTE)hIl2Cpp + LEHAHJKOHKP_MNEJKHHHFFL_OFFSET))(this, a1, a2, a3);
		}

		::System::Void KKPHFLJDKDH(::LEHAHJKOHKP_ProbabilityChangeReason a1, ::KAKADGHNMFK* a2, ::System::Int32 a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::LEHAHJKOHKP_ProbabilityChangeReason, ::KAKADGHNMFK*, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + LEHAHJKOHKP_KKPHFLJDKDH_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void NKGAJOLMDDO(::KAKADGHNMFK* a1, ::RPG::GameCore::ChimeraDuelStatusConfig* a2)
		{
			return ((::System::Void(*)(::PVOID, ::KAKADGHNMFK*, ::RPG::GameCore::ChimeraDuelStatusConfig*))((::PBYTE)hIl2Cpp + LEHAHJKOHKP_NKGAJOLMDDO_OFFSET))(this, a1, a2);
		}

		::System::Boolean GIOPLIMIIBI(::KAKADGHNMFK* a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::KAKADGHNMFK*, ::System::UInt32))((::PBYTE)hIl2Cpp + LEHAHJKOHKP_GIOPLIMIIBI_OFFSET))(this, a1, a2);
		}

	};
