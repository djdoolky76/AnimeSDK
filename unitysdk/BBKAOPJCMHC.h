#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LGBIMGEFJCE.h"
#include "unitysdk/MoleMole/StaticBoolMaterialModifier.h"
#include "unitysdk/NOHOGHGPBAG.h"
#include "unitysdk/MoleMole/StaticColorMaterialModifier.h"
#include "unitysdk/MoleMole/StaticFloatMaterialModifier.h"
#include "unitysdk/MoleMole/StaticKeywordFloatMaterialModifier.h"
#include "unitysdk/MoleMole/StaticTextureMaterialModifier.h"
#include "unitysdk/MoleMole/StaticVectorMaterialModifier.h"

class MOELDGPPDPM;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define BBKAOPJCMHC_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x12D15FC0)
#define BBKAOPJCMHC_BKBFHIEKHOO_OFFSET UNITYSDK_OFFSET(0x12D16150)
#define BBKAOPJCMHC_BOFKBCGJJAB_OFFSET UNITYSDK_OFFSET(0x12D16680)
#define BBKAOPJCMHC_DBBANBPGPAE_1_OFFSET UNITYSDK_OFFSET(0x12D17260)
#define BBKAOPJCMHC_DBBANBPGPAE_2_OFFSET UNITYSDK_OFFSET(0x12D17270)
#define BBKAOPJCMHC_DBBANBPGPAE_3_OFFSET UNITYSDK_OFFSET(0x12D17290)
#define BBKAOPJCMHC_DBBANBPGPAE_4_OFFSET UNITYSDK_OFFSET(0x12D172B0)
#define BBKAOPJCMHC_DBBANBPGPAE_5_OFFSET UNITYSDK_OFFSET(0x12D172D0)
#define BBKAOPJCMHC_DBBANBPGPAE_OFFSET UNITYSDK_OFFSET(0x12D17210)
#define BBKAOPJCMHC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12D172F0)
#define BBKAOPJCMHC_HHPAMHKEFAF_OFFSET UNITYSDK_OFFSET(0x12D16D60)
#define BBKAOPJCMHC_KMFGMEDKCCC_OFFSET UNITYSDK_OFFSET(0x12D17000)
#define BBKAOPJCMHC_NEMLLNEFLBO_OFFSET UNITYSDK_OFFSET(0x12D16C30)
#define BBKAOPJCMHC_PPPCNKJGPPJ_OFFSET UNITYSDK_OFFSET(0x12D16A60)
#define BBKAOPJCMHC__CTOR_OFFSET UNITYSDK_OFFSET(0x12D173B0)

inline static constexpr unsigned int BBKAOPJCMHC_TypeDefinitionIndex = 59249;

class BBKAOPJCMHC : public ::NOHOGHGPBAG
{
public:
	::MOELDGPPDPM* FLLAPEBMOJK; // 0x48
	::MoleMole::StaticBoolMaterialModifier PKGOPCKLLCD; // 0x50
	::MoleMole::StaticBoolMaterialModifier HJMHEAHFDKP; // 0x68
	::MOELDGPPDPM* CFIJNJHFFLI; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBKAOPJCMHC__CTOR_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBKAOPJCMHC_BBOMJDBNHIC_OFFSET))(this);
	}

	::System::Void BKBFHIEKHOO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBKAOPJCMHC_BKBFHIEKHOO_OFFSET))(this);
	}

	::System::Void BOFKBCGJJAB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBKAOPJCMHC_BOFKBCGJJAB_OFFSET))(this);
	}

	::System::Void PPPCNKJGPPJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBKAOPJCMHC_PPPCNKJGPPJ_OFFSET))(this);
	}

	::System::Void NEMLLNEFLBO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBKAOPJCMHC_NEMLLNEFLBO_OFFSET))(this);
	}

	::System::Void HHPAMHKEFAF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBKAOPJCMHC_HHPAMHKEFAF_OFFSET))(this);
	}

	::System::Void KMFGMEDKCCC(::System::Collections::Generic::HashSet_1<::System::Int32>* DAONJLPKIEA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::Int32>*))((::PBYTE)hIl2Cpp + BBKAOPJCMHC_KMFGMEDKCCC_OFFSET))(this, DAONJLPKIEA);
	}

	::System::Boolean DBBANBPGPAE(::LGBIMGEFJCE MDLHJONGOPK, ::MoleMole::StaticBoolMaterialModifier& AOBNJBCBHAK)
	{
		return ((::System::Boolean(*)(::PVOID, ::LGBIMGEFJCE, ::MoleMole::StaticBoolMaterialModifier&))((::PBYTE)hIl2Cpp + BBKAOPJCMHC_DBBANBPGPAE_OFFSET))(this, MDLHJONGOPK, AOBNJBCBHAK);
	}

	::System::Boolean DBBANBPGPAE_1(::LGBIMGEFJCE MDLHJONGOPK, ::MoleMole::StaticFloatMaterialModifier& AOBNJBCBHAK)
	{
		return ((::System::Boolean(*)(::PVOID, ::LGBIMGEFJCE, ::MoleMole::StaticFloatMaterialModifier&))((::PBYTE)hIl2Cpp + BBKAOPJCMHC_DBBANBPGPAE_1_OFFSET))(this, MDLHJONGOPK, AOBNJBCBHAK);
	}

	::System::Boolean DBBANBPGPAE_2(::LGBIMGEFJCE MDLHJONGOPK, ::MoleMole::StaticColorMaterialModifier& AOBNJBCBHAK)
	{
		return ((::System::Boolean(*)(::PVOID, ::LGBIMGEFJCE, ::MoleMole::StaticColorMaterialModifier&))((::PBYTE)hIl2Cpp + BBKAOPJCMHC_DBBANBPGPAE_2_OFFSET))(this, MDLHJONGOPK, AOBNJBCBHAK);
	}

	::System::Boolean DBBANBPGPAE_3(::LGBIMGEFJCE MDLHJONGOPK, ::MoleMole::StaticTextureMaterialModifier& AOBNJBCBHAK)
	{
		return ((::System::Boolean(*)(::PVOID, ::LGBIMGEFJCE, ::MoleMole::StaticTextureMaterialModifier&))((::PBYTE)hIl2Cpp + BBKAOPJCMHC_DBBANBPGPAE_3_OFFSET))(this, MDLHJONGOPK, AOBNJBCBHAK);
	}

	::System::Boolean DBBANBPGPAE_4(::LGBIMGEFJCE MDLHJONGOPK, ::MoleMole::StaticVectorMaterialModifier& AOBNJBCBHAK)
	{
		return ((::System::Boolean(*)(::PVOID, ::LGBIMGEFJCE, ::MoleMole::StaticVectorMaterialModifier&))((::PBYTE)hIl2Cpp + BBKAOPJCMHC_DBBANBPGPAE_4_OFFSET))(this, MDLHJONGOPK, AOBNJBCBHAK);
	}

	::System::Boolean DBBANBPGPAE_5(::LGBIMGEFJCE MDLHJONGOPK, ::MoleMole::StaticKeywordFloatMaterialModifier& AOBNJBCBHAK)
	{
		return ((::System::Boolean(*)(::PVOID, ::LGBIMGEFJCE, ::MoleMole::StaticKeywordFloatMaterialModifier&))((::PBYTE)hIl2Cpp + BBKAOPJCMHC_DBBANBPGPAE_5_OFFSET))(this, MDLHJONGOPK, AOBNJBCBHAK);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBKAOPJCMHC_DISPOSE_OFFSET))(this);
	}
};
