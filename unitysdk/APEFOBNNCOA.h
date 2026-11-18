#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class ACNLKLCDALA;
class DIAEPBNFKBO;
class DKPJAEANAPO;
class GEIHCPAOKKK;
class JOOHBDMHGCA;
class NLNIIPDCABP;
namespace FluffyUnderware::Curvy { class CurvySpline; }

#define APEFOBNNCOA_BDEHPCDADFK_OFFSET UNITYSDK_OFFSET(0x126736C0)
#define APEFOBNNCOA_EACOHCPFGAE_OFFSET UNITYSDK_OFFSET(0x12673CE0)
#define APEFOBNNCOA_FNKOBPPBGOM_OFFSET UNITYSDK_OFFSET(0x126736B0)
#define APEFOBNNCOA_NGELJIJDHLJ_OFFSET UNITYSDK_OFFSET(0x12673CD0)
#define APEFOBNNCOA_NOPKFGPAINE_OFFSET UNITYSDK_OFFSET(0x126732C0)
#define APEFOBNNCOA_OKJCHFGIKBH_OFFSET UNITYSDK_OFFSET(0x12673520)
#define APEFOBNNCOA__CCTOR_OFFSET UNITYSDK_OFFSET(0x12673500)
#define APEFOBNNCOA__CTOR_OFFSET UNITYSDK_OFFSET(0x12673230)

inline static constexpr unsigned int APEFOBNNCOA_TypeDefinitionIndex = 77575;

class APEFOBNNCOA : public ::System::Object
{
public:
	static ::System::Single* StaticGet_KKFDNNMPDEN()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(APEFOBNNCOA_TypeDefinitionIndex)->GetStaticField(0xA4D0);
	}
	static ::System::Single* StaticGet_KHEGJBCMAHF()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(APEFOBNNCOA_TypeDefinitionIndex)->GetStaticField(0xA4D4);
	}
	::FluffyUnderware::Curvy::CurvySpline* DLMCBOCAGFE; // 0x10
	::System::Boolean EJCFEBANKPG; // 0x18
	::System::Boolean _HLKOIMLGOHH_k__BackingField; // 0x19
	::System::Byte _padding0[0x2];
	::UnityEngine::Vector3 PIHMMBDPMHL; // 0x1C
	::System::ValueTuple_2<::System::Single, ::System::Single> MGMAIBJOAKH; // 0x28
	::System::Single LKAIDKALODG; // 0x30
	::System::Single CNCCEBPMCLG; // 0x34
	::System::Single MCMFNMNFMKH; // 0x38
	::System::Single EGOCBPPDAPJ; // 0x3C
	::UnityEngine::Vector3 LDIKJMBANOL; // 0x40
	::UnityEngine::Vector3 NKJONGAKFFF; // 0x4C
	::UnityEngine::Vector3 FGLJFCBCNIP; // 0x58

	::System::Void _ctor(::UnityEngine::Vector3 AKAGDEFAGJA, ::FluffyUnderware::Curvy::CurvySpline* FAJHPKBELMF, ::System::Single IJKOLMELBBC, ::System::Single IMLLDOHDCNC, ::System::Single DCPAIJPEIDO, ::System::Single NKINLLEHHOO)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::FluffyUnderware::Curvy::CurvySpline*, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + APEFOBNNCOA__CTOR_OFFSET))(this, AKAGDEFAGJA, FAJHPKBELMF, IJKOLMELBBC, IMLLDOHDCNC, DCPAIJPEIDO, NKINLLEHHOO);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + APEFOBNNCOA__CCTOR_OFFSET))();
	}

	::System::Void OKJCHFGIKBH(::DIAEPBNFKBO* GCLHDKDFOOH, ::NLNIIPDCABP* OPLGDAMMLHM, ::JOOHBDMHGCA* LFHAIKOOKOB, ::GEIHCPAOKKK* MNIEFFFEKEH, ::ACNLKLCDALA* PAHAKIECKMN, ::DKPJAEANAPO* ONEFAGGPEFP)
	{
		return ((::System::Void(*)(::PVOID, ::DIAEPBNFKBO*, ::NLNIIPDCABP*, ::JOOHBDMHGCA*, ::GEIHCPAOKKK*, ::ACNLKLCDALA*, ::DKPJAEANAPO*))((::PBYTE)hIl2Cpp + APEFOBNNCOA_OKJCHFGIKBH_OFFSET))(this, GCLHDKDFOOH, OPLGDAMMLHM, LFHAIKOOKOB, MNIEFFFEKEH, PAHAKIECKMN, ONEFAGGPEFP);
	}

	::FluffyUnderware::Curvy::CurvySpline* FNKOBPPBGOM()
	{
		return ((::FluffyUnderware::Curvy::CurvySpline*(*)(::PVOID))((::PBYTE)hIl2Cpp + APEFOBNNCOA_FNKOBPPBGOM_OFFSET))(this);
	}

	::System::Void BDEHPCDADFK(::System::Single PMNLNNGEIFM, ::GEIHCPAOKKK* MNIEFFFEKEH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::GEIHCPAOKKK*))((::PBYTE)hIl2Cpp + APEFOBNNCOA_BDEHPCDADFK_OFFSET))(this, PMNLNNGEIFM, MNIEFFFEKEH);
	}

	::System::Boolean NGELJIJDHLJ()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + APEFOBNNCOA_NGELJIJDHLJ_OFFSET))(this);
	}

	::System::Void EACOHCPFGAE(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + APEFOBNNCOA_EACOHCPFGAE_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void NOPKFGPAINE(::FluffyUnderware::Curvy::CurvySpline* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::CurvySpline*))((::PBYTE)hIl2Cpp + APEFOBNNCOA_NOPKFGPAINE_OFFSET))(this, EGEGIMGMJHN);
	}
};
