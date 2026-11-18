#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LGBIMGEFJCE.h"
#include "unitysdk/MoleMole/StaticBoolMaterialModifier.h"
#include "unitysdk/MoleMole/StaticColorMaterialModifier.h"
#include "unitysdk/NOHOGHGPBAG.h"
#include "unitysdk/MoleMole/StaticFloatMaterialModifier.h"
#include "unitysdk/MoleMole/StaticKeywordFloatMaterialModifier.h"
#include "unitysdk/MoleMole/StaticTextureMaterialModifier.h"
#include "unitysdk/MoleMole/StaticVectorMaterialModifier.h"

class MOELDGPPDPM;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define HFBAHAIGPOP_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x14A05FD0)
#define HFBAHAIGPOP_BKBFHIEKHOO_OFFSET UNITYSDK_OFFSET(0x14A06240)
#define HFBAHAIGPOP_BOFKBCGJJAB_OFFSET UNITYSDK_OFFSET(0x14A06930)
#define HFBAHAIGPOP_DBBANBPGPAE_1_OFFSET UNITYSDK_OFFSET(0x14A07870)
#define HFBAHAIGPOP_DBBANBPGPAE_2_OFFSET UNITYSDK_OFFSET(0x14A07880)
#define HFBAHAIGPOP_DBBANBPGPAE_3_OFFSET UNITYSDK_OFFSET(0x14A07900)
#define HFBAHAIGPOP_DBBANBPGPAE_4_OFFSET UNITYSDK_OFFSET(0x14A07920)
#define HFBAHAIGPOP_DBBANBPGPAE_5_OFFSET UNITYSDK_OFFSET(0x14A07940)
#define HFBAHAIGPOP_DBBANBPGPAE_OFFSET UNITYSDK_OFFSET(0x14A07830)
#define HFBAHAIGPOP_DISPOSE_OFFSET UNITYSDK_OFFSET(0x14A07960)
#define HFBAHAIGPOP_HHPAMHKEFAF_OFFSET UNITYSDK_OFFSET(0x14A07230)
#define HFBAHAIGPOP_KMFGMEDKCCC_OFFSET UNITYSDK_OFFSET(0x14A075C0)
#define HFBAHAIGPOP_NEMLLNEFLBO_OFFSET UNITYSDK_OFFSET(0x14A070E0)
#define HFBAHAIGPOP_PPPCNKJGPPJ_OFFSET UNITYSDK_OFFSET(0x14A06EA0)
#define HFBAHAIGPOP__CTOR_OFFSET UNITYSDK_OFFSET(0x14A07A40)

inline static constexpr unsigned int HFBAHAIGPOP_TypeDefinitionIndex = 52090;

class HFBAHAIGPOP : public ::NOHOGHGPBAG
{
public:
	::MOELDGPPDPM* OLCBLPHDBKG; // 0x48
	::MOELDGPPDPM* GCLLKIHJKDM; // 0x50
	::MOELDGPPDPM* EOCDAJCDJFA; // 0x58
	::MoleMole::StaticBoolMaterialModifier IKLKNMIFMAG; // 0x60
	::MoleMole::StaticColorMaterialModifier FFCMPPMICPJ; // 0x78
	::MoleMole::StaticColorMaterialModifier PLCJJICIOJC; // 0xB0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFBAHAIGPOP__CTOR_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFBAHAIGPOP_BBOMJDBNHIC_OFFSET))(this);
	}

	::System::Void BKBFHIEKHOO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFBAHAIGPOP_BKBFHIEKHOO_OFFSET))(this);
	}

	::System::Void BOFKBCGJJAB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFBAHAIGPOP_BOFKBCGJJAB_OFFSET))(this);
	}

	::System::Void PPPCNKJGPPJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFBAHAIGPOP_PPPCNKJGPPJ_OFFSET))(this);
	}

	::System::Void NEMLLNEFLBO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFBAHAIGPOP_NEMLLNEFLBO_OFFSET))(this);
	}

	::System::Void HHPAMHKEFAF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFBAHAIGPOP_HHPAMHKEFAF_OFFSET))(this);
	}

	::System::Void KMFGMEDKCCC(::System::Collections::Generic::HashSet_1<::System::Int32>* DAONJLPKIEA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::Int32>*))((::PBYTE)hIl2Cpp + HFBAHAIGPOP_KMFGMEDKCCC_OFFSET))(this, DAONJLPKIEA);
	}

	::System::Boolean DBBANBPGPAE(::LGBIMGEFJCE MDLHJONGOPK, ::MoleMole::StaticBoolMaterialModifier& AOBNJBCBHAK)
	{
		return ((::System::Boolean(*)(::PVOID, ::LGBIMGEFJCE, ::MoleMole::StaticBoolMaterialModifier&))((::PBYTE)hIl2Cpp + HFBAHAIGPOP_DBBANBPGPAE_OFFSET))(this, MDLHJONGOPK, AOBNJBCBHAK);
	}

	::System::Boolean DBBANBPGPAE_1(::LGBIMGEFJCE MDLHJONGOPK, ::MoleMole::StaticFloatMaterialModifier& AOBNJBCBHAK)
	{
		return ((::System::Boolean(*)(::PVOID, ::LGBIMGEFJCE, ::MoleMole::StaticFloatMaterialModifier&))((::PBYTE)hIl2Cpp + HFBAHAIGPOP_DBBANBPGPAE_1_OFFSET))(this, MDLHJONGOPK, AOBNJBCBHAK);
	}

	::System::Boolean DBBANBPGPAE_2(::LGBIMGEFJCE MDLHJONGOPK, ::MoleMole::StaticColorMaterialModifier& AOBNJBCBHAK)
	{
		return ((::System::Boolean(*)(::PVOID, ::LGBIMGEFJCE, ::MoleMole::StaticColorMaterialModifier&))((::PBYTE)hIl2Cpp + HFBAHAIGPOP_DBBANBPGPAE_2_OFFSET))(this, MDLHJONGOPK, AOBNJBCBHAK);
	}

	::System::Boolean DBBANBPGPAE_3(::LGBIMGEFJCE MDLHJONGOPK, ::MoleMole::StaticTextureMaterialModifier& AOBNJBCBHAK)
	{
		return ((::System::Boolean(*)(::PVOID, ::LGBIMGEFJCE, ::MoleMole::StaticTextureMaterialModifier&))((::PBYTE)hIl2Cpp + HFBAHAIGPOP_DBBANBPGPAE_3_OFFSET))(this, MDLHJONGOPK, AOBNJBCBHAK);
	}

	::System::Boolean DBBANBPGPAE_4(::LGBIMGEFJCE MDLHJONGOPK, ::MoleMole::StaticVectorMaterialModifier& AOBNJBCBHAK)
	{
		return ((::System::Boolean(*)(::PVOID, ::LGBIMGEFJCE, ::MoleMole::StaticVectorMaterialModifier&))((::PBYTE)hIl2Cpp + HFBAHAIGPOP_DBBANBPGPAE_4_OFFSET))(this, MDLHJONGOPK, AOBNJBCBHAK);
	}

	::System::Boolean DBBANBPGPAE_5(::LGBIMGEFJCE MDLHJONGOPK, ::MoleMole::StaticKeywordFloatMaterialModifier& AOBNJBCBHAK)
	{
		return ((::System::Boolean(*)(::PVOID, ::LGBIMGEFJCE, ::MoleMole::StaticKeywordFloatMaterialModifier&))((::PBYTE)hIl2Cpp + HFBAHAIGPOP_DBBANBPGPAE_5_OFFSET))(this, MDLHJONGOPK, AOBNJBCBHAK);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFBAHAIGPOP_DISPOSE_OFFSET))(this);
	}
};
