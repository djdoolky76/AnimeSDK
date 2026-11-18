#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LGBIMGEFJCE.h"
#include "unitysdk/MoleMole/StaticBoolMaterialModifier.h"
#include "unitysdk/MoleMole/StaticFloatMaterialModifier.h"
#include "unitysdk/NOHOGHGPBAG.h"
#include "unitysdk/MoleMole/StaticColorMaterialModifier.h"
#include "unitysdk/MoleMole/StaticKeywordFloatMaterialModifier.h"
#include "unitysdk/MoleMole/StaticTextureMaterialModifier.h"
#include "unitysdk/MoleMole/StaticVectorMaterialModifier.h"

class MOELDGPPDPM;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define BFJEFBLDNMJ_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x12D21460)
#define BFJEFBLDNMJ_BKBFHIEKHOO_OFFSET UNITYSDK_OFFSET(0x12D21610)
#define BFJEFBLDNMJ_BOFKBCGJJAB_OFFSET UNITYSDK_OFFSET(0x12D21B40)
#define BFJEFBLDNMJ_DBBANBPGPAE_1_OFFSET UNITYSDK_OFFSET(0x12D226C0)
#define BFJEFBLDNMJ_DBBANBPGPAE_2_OFFSET UNITYSDK_OFFSET(0x12D22700)
#define BFJEFBLDNMJ_DBBANBPGPAE_3_OFFSET UNITYSDK_OFFSET(0x12D22720)
#define BFJEFBLDNMJ_DBBANBPGPAE_4_OFFSET UNITYSDK_OFFSET(0x12D22740)
#define BFJEFBLDNMJ_DBBANBPGPAE_5_OFFSET UNITYSDK_OFFSET(0x12D22760)
#define BFJEFBLDNMJ_DBBANBPGPAE_OFFSET UNITYSDK_OFFSET(0x12D22680)
#define BFJEFBLDNMJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12D22780)
#define BFJEFBLDNMJ_HHPAMHKEFAF_OFFSET UNITYSDK_OFFSET(0x12D221F0)
#define BFJEFBLDNMJ_KMFGMEDKCCC_OFFSET UNITYSDK_OFFSET(0x12D22470)
#define BFJEFBLDNMJ_NEMLLNEFLBO_OFFSET UNITYSDK_OFFSET(0x12D220E0)
#define BFJEFBLDNMJ_PPPCNKJGPPJ_OFFSET UNITYSDK_OFFSET(0x12D21F20)
#define BFJEFBLDNMJ__CTOR_OFFSET UNITYSDK_OFFSET(0x12D22840)

inline static constexpr unsigned int BFJEFBLDNMJ_TypeDefinitionIndex = 90542;

class BFJEFBLDNMJ : public ::NOHOGHGPBAG
{
public:
	::MOELDGPPDPM* BLLOHJKINAO; // 0x48
	::MOELDGPPDPM* MJBMMEBEJNI; // 0x50
	::MoleMole::StaticBoolMaterialModifier AOICFDCEAJE; // 0x58
	::MoleMole::StaticFloatMaterialModifier HNJCFBOCKBN; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFJEFBLDNMJ__CTOR_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFJEFBLDNMJ_BBOMJDBNHIC_OFFSET))(this);
	}

	::System::Void BKBFHIEKHOO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFJEFBLDNMJ_BKBFHIEKHOO_OFFSET))(this);
	}

	::System::Void BOFKBCGJJAB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFJEFBLDNMJ_BOFKBCGJJAB_OFFSET))(this);
	}

	::System::Void PPPCNKJGPPJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFJEFBLDNMJ_PPPCNKJGPPJ_OFFSET))(this);
	}

	::System::Void NEMLLNEFLBO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFJEFBLDNMJ_NEMLLNEFLBO_OFFSET))(this);
	}

	::System::Void HHPAMHKEFAF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFJEFBLDNMJ_HHPAMHKEFAF_OFFSET))(this);
	}

	::System::Void KMFGMEDKCCC(::System::Collections::Generic::HashSet_1<::System::Int32>* DAONJLPKIEA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::Int32>*))((::PBYTE)hIl2Cpp + BFJEFBLDNMJ_KMFGMEDKCCC_OFFSET))(this, DAONJLPKIEA);
	}

	::System::Boolean DBBANBPGPAE(::LGBIMGEFJCE MDLHJONGOPK, ::MoleMole::StaticBoolMaterialModifier& AOBNJBCBHAK)
	{
		return ((::System::Boolean(*)(::PVOID, ::LGBIMGEFJCE, ::MoleMole::StaticBoolMaterialModifier&))((::PBYTE)hIl2Cpp + BFJEFBLDNMJ_DBBANBPGPAE_OFFSET))(this, MDLHJONGOPK, AOBNJBCBHAK);
	}

	::System::Boolean DBBANBPGPAE_1(::LGBIMGEFJCE MDLHJONGOPK, ::MoleMole::StaticFloatMaterialModifier& AOBNJBCBHAK)
	{
		return ((::System::Boolean(*)(::PVOID, ::LGBIMGEFJCE, ::MoleMole::StaticFloatMaterialModifier&))((::PBYTE)hIl2Cpp + BFJEFBLDNMJ_DBBANBPGPAE_1_OFFSET))(this, MDLHJONGOPK, AOBNJBCBHAK);
	}

	::System::Boolean DBBANBPGPAE_2(::LGBIMGEFJCE MDLHJONGOPK, ::MoleMole::StaticColorMaterialModifier& AOBNJBCBHAK)
	{
		return ((::System::Boolean(*)(::PVOID, ::LGBIMGEFJCE, ::MoleMole::StaticColorMaterialModifier&))((::PBYTE)hIl2Cpp + BFJEFBLDNMJ_DBBANBPGPAE_2_OFFSET))(this, MDLHJONGOPK, AOBNJBCBHAK);
	}

	::System::Boolean DBBANBPGPAE_3(::LGBIMGEFJCE MDLHJONGOPK, ::MoleMole::StaticTextureMaterialModifier& AOBNJBCBHAK)
	{
		return ((::System::Boolean(*)(::PVOID, ::LGBIMGEFJCE, ::MoleMole::StaticTextureMaterialModifier&))((::PBYTE)hIl2Cpp + BFJEFBLDNMJ_DBBANBPGPAE_3_OFFSET))(this, MDLHJONGOPK, AOBNJBCBHAK);
	}

	::System::Boolean DBBANBPGPAE_4(::LGBIMGEFJCE MDLHJONGOPK, ::MoleMole::StaticVectorMaterialModifier& AOBNJBCBHAK)
	{
		return ((::System::Boolean(*)(::PVOID, ::LGBIMGEFJCE, ::MoleMole::StaticVectorMaterialModifier&))((::PBYTE)hIl2Cpp + BFJEFBLDNMJ_DBBANBPGPAE_4_OFFSET))(this, MDLHJONGOPK, AOBNJBCBHAK);
	}

	::System::Boolean DBBANBPGPAE_5(::LGBIMGEFJCE MDLHJONGOPK, ::MoleMole::StaticKeywordFloatMaterialModifier& AOBNJBCBHAK)
	{
		return ((::System::Boolean(*)(::PVOID, ::LGBIMGEFJCE, ::MoleMole::StaticKeywordFloatMaterialModifier&))((::PBYTE)hIl2Cpp + BFJEFBLDNMJ_DBBANBPGPAE_5_OFFSET))(this, MDLHJONGOPK, AOBNJBCBHAK);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFJEFBLDNMJ_DISPOSE_OFFSET))(this);
	}
};
