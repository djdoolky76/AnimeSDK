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

#define MIDDMLEHCNL_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x1A657100)
#define MIDDMLEHCNL_BKBFHIEKHOO_OFFSET UNITYSDK_OFFSET(0x1A6574C0)
#define MIDDMLEHCNL_BOFKBCGJJAB_OFFSET UNITYSDK_OFFSET(0x11A014C0)
#define MIDDMLEHCNL_DBBANBPGPAE_1_OFFSET UNITYSDK_OFFSET(0x11A02BB0)
#define MIDDMLEHCNL_DBBANBPGPAE_2_OFFSET UNITYSDK_OFFSET(0x11A02C30)
#define MIDDMLEHCNL_DBBANBPGPAE_3_OFFSET UNITYSDK_OFFSET(0x11A02CA0)
#define MIDDMLEHCNL_DBBANBPGPAE_4_OFFSET UNITYSDK_OFFSET(0x11A02CC0)
#define MIDDMLEHCNL_DBBANBPGPAE_5_OFFSET UNITYSDK_OFFSET(0x11A02CE0)
#define MIDDMLEHCNL_DBBANBPGPAE_OFFSET UNITYSDK_OFFSET(0x11A02B70)
#define MIDDMLEHCNL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11A02D00)
#define MIDDMLEHCNL_HHPAMHKEFAF_OFFSET UNITYSDK_OFFSET(0x11A02240)
#define MIDDMLEHCNL_KMFGMEDKCCC_OFFSET UNITYSDK_OFFSET(0x11A027E0)
#define MIDDMLEHCNL_NEMLLNEFLBO_OFFSET UNITYSDK_OFFSET(0x11A02080)
#define MIDDMLEHCNL_PPPCNKJGPPJ_OFFSET UNITYSDK_OFFSET(0x11A01D40)
#define MIDDMLEHCNL__CTOR_OFFSET UNITYSDK_OFFSET(0x11A02E10)

inline static constexpr unsigned int MIDDMLEHCNL_TypeDefinitionIndex = 41815;

class MIDDMLEHCNL : public ::NOHOGHGPBAG
{
public:
	::MOELDGPPDPM* KMHKBNKHLNI; // 0x48
	::MOELDGPPDPM* BIFKCNKLMNH; // 0x50
	::MOELDGPPDPM* GNBCGPGDBGD; // 0x58
	::MoleMole::StaticBoolMaterialModifier BLGANJLPGBJ; // 0x60
	::MOELDGPPDPM* MIBMHPINHMA; // 0x78
	::MoleMole::StaticColorMaterialModifier CLDKENIEJNI; // 0x80
	::MoleMole::StaticFloatMaterialModifier CNFPMGGGFHN; // 0xB8
	::MoleMole::StaticFloatMaterialModifier ENCJHEGCCPD; // 0xD8
	::MoleMole::StaticFloatMaterialModifier NBMJMHCOIBP; // 0xF8
	::MOELDGPPDPM* ALMAMCJNPDE; // 0x118

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIDDMLEHCNL__CTOR_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIDDMLEHCNL_BBOMJDBNHIC_OFFSET))(this);
	}

	::System::Void BKBFHIEKHOO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIDDMLEHCNL_BKBFHIEKHOO_OFFSET))(this);
	}

	::System::Void BOFKBCGJJAB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIDDMLEHCNL_BOFKBCGJJAB_OFFSET))(this);
	}

	::System::Void PPPCNKJGPPJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIDDMLEHCNL_PPPCNKJGPPJ_OFFSET))(this);
	}

	::System::Void NEMLLNEFLBO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIDDMLEHCNL_NEMLLNEFLBO_OFFSET))(this);
	}

	::System::Void HHPAMHKEFAF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIDDMLEHCNL_HHPAMHKEFAF_OFFSET))(this);
	}

	::System::Void KMFGMEDKCCC(::System::Collections::Generic::HashSet_1<::System::Int32>* DAONJLPKIEA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MIDDMLEHCNL_KMFGMEDKCCC_OFFSET))(this, DAONJLPKIEA);
	}

	::System::Boolean DBBANBPGPAE(::LGBIMGEFJCE MDLHJONGOPK, ::MoleMole::StaticBoolMaterialModifier& AOBNJBCBHAK)
	{
		return ((::System::Boolean(*)(::PVOID, ::LGBIMGEFJCE, ::MoleMole::StaticBoolMaterialModifier&))((::PBYTE)hIl2Cpp + MIDDMLEHCNL_DBBANBPGPAE_OFFSET))(this, MDLHJONGOPK, AOBNJBCBHAK);
	}

	::System::Boolean DBBANBPGPAE_1(::LGBIMGEFJCE MDLHJONGOPK, ::MoleMole::StaticFloatMaterialModifier& AOBNJBCBHAK)
	{
		return ((::System::Boolean(*)(::PVOID, ::LGBIMGEFJCE, ::MoleMole::StaticFloatMaterialModifier&))((::PBYTE)hIl2Cpp + MIDDMLEHCNL_DBBANBPGPAE_1_OFFSET))(this, MDLHJONGOPK, AOBNJBCBHAK);
	}

	::System::Boolean DBBANBPGPAE_2(::LGBIMGEFJCE MDLHJONGOPK, ::MoleMole::StaticColorMaterialModifier& AOBNJBCBHAK)
	{
		return ((::System::Boolean(*)(::PVOID, ::LGBIMGEFJCE, ::MoleMole::StaticColorMaterialModifier&))((::PBYTE)hIl2Cpp + MIDDMLEHCNL_DBBANBPGPAE_2_OFFSET))(this, MDLHJONGOPK, AOBNJBCBHAK);
	}

	::System::Boolean DBBANBPGPAE_3(::LGBIMGEFJCE MDLHJONGOPK, ::MoleMole::StaticTextureMaterialModifier& AOBNJBCBHAK)
	{
		return ((::System::Boolean(*)(::PVOID, ::LGBIMGEFJCE, ::MoleMole::StaticTextureMaterialModifier&))((::PBYTE)hIl2Cpp + MIDDMLEHCNL_DBBANBPGPAE_3_OFFSET))(this, MDLHJONGOPK, AOBNJBCBHAK);
	}

	::System::Boolean DBBANBPGPAE_4(::LGBIMGEFJCE MDLHJONGOPK, ::MoleMole::StaticVectorMaterialModifier& AOBNJBCBHAK)
	{
		return ((::System::Boolean(*)(::PVOID, ::LGBIMGEFJCE, ::MoleMole::StaticVectorMaterialModifier&))((::PBYTE)hIl2Cpp + MIDDMLEHCNL_DBBANBPGPAE_4_OFFSET))(this, MDLHJONGOPK, AOBNJBCBHAK);
	}

	::System::Boolean DBBANBPGPAE_5(::LGBIMGEFJCE MDLHJONGOPK, ::MoleMole::StaticKeywordFloatMaterialModifier& AOBNJBCBHAK)
	{
		return ((::System::Boolean(*)(::PVOID, ::LGBIMGEFJCE, ::MoleMole::StaticKeywordFloatMaterialModifier&))((::PBYTE)hIl2Cpp + MIDDMLEHCNL_DBBANBPGPAE_5_OFFSET))(this, MDLHJONGOPK, AOBNJBCBHAK);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIDDMLEHCNL_DISPOSE_OFFSET))(this);
	}
};
