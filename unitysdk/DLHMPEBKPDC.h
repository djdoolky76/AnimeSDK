#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LGBIMGEFJCE.h"
#include "unitysdk/MoleMole/StaticBoolMaterialModifier.h"
#include "unitysdk/MoleMole/StaticColorMaterialModifier.h"
#include "unitysdk/MoleMole/StaticFloatMaterialModifier.h"
#include "unitysdk/NOHOGHGPBAG.h"
#include "unitysdk/MoleMole/StaticKeywordFloatMaterialModifier.h"
#include "unitysdk/MoleMole/StaticTextureMaterialModifier.h"
#include "unitysdk/MoleMole/StaticVectorMaterialModifier.h"

class MOELDGPPDPM;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define DLHMPEBKPDC_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x15A580D0)
#define DLHMPEBKPDC_BKBFHIEKHOO_OFFSET UNITYSDK_OFFSET(0x15A583F0)
#define DLHMPEBKPDC_BOFKBCGJJAB_OFFSET UNITYSDK_OFFSET(0x15A58C70)
#define DLHMPEBKPDC_DBBANBPGPAE_1_OFFSET UNITYSDK_OFFSET(0x15A59FC0)
#define DLHMPEBKPDC_DBBANBPGPAE_2_OFFSET UNITYSDK_OFFSET(0x15A5A000)
#define DLHMPEBKPDC_DBBANBPGPAE_3_OFFSET UNITYSDK_OFFSET(0x15A5A080)
#define DLHMPEBKPDC_DBBANBPGPAE_4_OFFSET UNITYSDK_OFFSET(0x15A5A0A0)
#define DLHMPEBKPDC_DBBANBPGPAE_5_OFFSET UNITYSDK_OFFSET(0x15A5A0C0)
#define DLHMPEBKPDC_DBBANBPGPAE_OFFSET UNITYSDK_OFFSET(0x15A59F80)
#define DLHMPEBKPDC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15A5A0E0)
#define DLHMPEBKPDC_HHPAMHKEFAF_OFFSET UNITYSDK_OFFSET(0x15A597E0)
#define DLHMPEBKPDC_KMFGMEDKCCC_OFFSET UNITYSDK_OFFSET(0x15A59C90)
#define DLHMPEBKPDC_NEMLLNEFLBO_OFFSET UNITYSDK_OFFSET(0x15A59650)
#define DLHMPEBKPDC_PPPCNKJGPPJ_OFFSET UNITYSDK_OFFSET(0x15A59380)
#define DLHMPEBKPDC__CTOR_OFFSET UNITYSDK_OFFSET(0x15A5A1E0)

inline static constexpr unsigned int DLHMPEBKPDC_TypeDefinitionIndex = 77387;

class DLHMPEBKPDC : public ::NOHOGHGPBAG
{
public:
	::MoleMole::StaticBoolMaterialModifier EBBJDFDHODB; // 0x48
	::MOELDGPPDPM* KMIIDFOKOJG; // 0x60
	::MOELDGPPDPM* LLJCOIPFEDM; // 0x68
	::MoleMole::StaticFloatMaterialModifier ICJJNBEEKFI; // 0x70
	::MoleMole::StaticColorMaterialModifier NCMGBCEKBIG; // 0x90
	::MOELDGPPDPM* MEHDNJDMBJG; // 0xC8
	::MOELDGPPDPM* NLKFGCNNHEE; // 0xD0
	::MoleMole::StaticColorMaterialModifier KHKNNDEBLEB; // 0xD8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLHMPEBKPDC__CTOR_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLHMPEBKPDC_BBOMJDBNHIC_OFFSET))(this);
	}

	::System::Void BKBFHIEKHOO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLHMPEBKPDC_BKBFHIEKHOO_OFFSET))(this);
	}

	::System::Void BOFKBCGJJAB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLHMPEBKPDC_BOFKBCGJJAB_OFFSET))(this);
	}

	::System::Void PPPCNKJGPPJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLHMPEBKPDC_PPPCNKJGPPJ_OFFSET))(this);
	}

	::System::Void NEMLLNEFLBO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLHMPEBKPDC_NEMLLNEFLBO_OFFSET))(this);
	}

	::System::Void HHPAMHKEFAF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLHMPEBKPDC_HHPAMHKEFAF_OFFSET))(this);
	}

	::System::Void KMFGMEDKCCC(::System::Collections::Generic::HashSet_1<::System::Int32>* DAONJLPKIEA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::Int32>*))((::PBYTE)hIl2Cpp + DLHMPEBKPDC_KMFGMEDKCCC_OFFSET))(this, DAONJLPKIEA);
	}

	::System::Boolean DBBANBPGPAE(::LGBIMGEFJCE MDLHJONGOPK, ::MoleMole::StaticBoolMaterialModifier& AOBNJBCBHAK)
	{
		return ((::System::Boolean(*)(::PVOID, ::LGBIMGEFJCE, ::MoleMole::StaticBoolMaterialModifier&))((::PBYTE)hIl2Cpp + DLHMPEBKPDC_DBBANBPGPAE_OFFSET))(this, MDLHJONGOPK, AOBNJBCBHAK);
	}

	::System::Boolean DBBANBPGPAE_1(::LGBIMGEFJCE MDLHJONGOPK, ::MoleMole::StaticFloatMaterialModifier& AOBNJBCBHAK)
	{
		return ((::System::Boolean(*)(::PVOID, ::LGBIMGEFJCE, ::MoleMole::StaticFloatMaterialModifier&))((::PBYTE)hIl2Cpp + DLHMPEBKPDC_DBBANBPGPAE_1_OFFSET))(this, MDLHJONGOPK, AOBNJBCBHAK);
	}

	::System::Boolean DBBANBPGPAE_2(::LGBIMGEFJCE MDLHJONGOPK, ::MoleMole::StaticColorMaterialModifier& AOBNJBCBHAK)
	{
		return ((::System::Boolean(*)(::PVOID, ::LGBIMGEFJCE, ::MoleMole::StaticColorMaterialModifier&))((::PBYTE)hIl2Cpp + DLHMPEBKPDC_DBBANBPGPAE_2_OFFSET))(this, MDLHJONGOPK, AOBNJBCBHAK);
	}

	::System::Boolean DBBANBPGPAE_3(::LGBIMGEFJCE MDLHJONGOPK, ::MoleMole::StaticTextureMaterialModifier& AOBNJBCBHAK)
	{
		return ((::System::Boolean(*)(::PVOID, ::LGBIMGEFJCE, ::MoleMole::StaticTextureMaterialModifier&))((::PBYTE)hIl2Cpp + DLHMPEBKPDC_DBBANBPGPAE_3_OFFSET))(this, MDLHJONGOPK, AOBNJBCBHAK);
	}

	::System::Boolean DBBANBPGPAE_4(::LGBIMGEFJCE MDLHJONGOPK, ::MoleMole::StaticVectorMaterialModifier& AOBNJBCBHAK)
	{
		return ((::System::Boolean(*)(::PVOID, ::LGBIMGEFJCE, ::MoleMole::StaticVectorMaterialModifier&))((::PBYTE)hIl2Cpp + DLHMPEBKPDC_DBBANBPGPAE_4_OFFSET))(this, MDLHJONGOPK, AOBNJBCBHAK);
	}

	::System::Boolean DBBANBPGPAE_5(::LGBIMGEFJCE MDLHJONGOPK, ::MoleMole::StaticKeywordFloatMaterialModifier& AOBNJBCBHAK)
	{
		return ((::System::Boolean(*)(::PVOID, ::LGBIMGEFJCE, ::MoleMole::StaticKeywordFloatMaterialModifier&))((::PBYTE)hIl2Cpp + DLHMPEBKPDC_DBBANBPGPAE_5_OFFSET))(this, MDLHJONGOPK, AOBNJBCBHAK);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLHMPEBKPDC_DISPOSE_OFFSET))(this);
	}
};
