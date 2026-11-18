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

#define JGNNBAPBBHC_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x1A4763B0)
#define JGNNBAPBBHC_BKBFHIEKHOO_OFFSET UNITYSDK_OFFSET(0x1A476570)
#define JGNNBAPBBHC_BOFKBCGJJAB_OFFSET UNITYSDK_OFFSET(0x1A476AB0)
#define JGNNBAPBBHC_DBBANBPGPAE_1_OFFSET UNITYSDK_OFFSET(0x1A477680)
#define JGNNBAPBBHC_DBBANBPGPAE_2_OFFSET UNITYSDK_OFFSET(0x1A477690)
#define JGNNBAPBBHC_DBBANBPGPAE_3_OFFSET UNITYSDK_OFFSET(0x1A4776F0)
#define JGNNBAPBBHC_DBBANBPGPAE_4_OFFSET UNITYSDK_OFFSET(0x1A477710)
#define JGNNBAPBBHC_DBBANBPGPAE_5_OFFSET UNITYSDK_OFFSET(0x1A477730)
#define JGNNBAPBBHC_DBBANBPGPAE_OFFSET UNITYSDK_OFFSET(0x1A477640)
#define JGNNBAPBBHC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A477750)
#define JGNNBAPBBHC_HHPAMHKEFAF_OFFSET UNITYSDK_OFFSET(0x1A4771A0)
#define JGNNBAPBBHC_KMFGMEDKCCC_OFFSET UNITYSDK_OFFSET(0x1A477430)
#define JGNNBAPBBHC_NEMLLNEFLBO_OFFSET UNITYSDK_OFFSET(0x1A477080)
#define JGNNBAPBBHC_PPPCNKJGPPJ_OFFSET UNITYSDK_OFFSET(0x1A476EA0)
#define JGNNBAPBBHC__CTOR_OFFSET UNITYSDK_OFFSET(0x1A477820)

inline static constexpr unsigned int JGNNBAPBBHC_TypeDefinitionIndex = 73358;

class JGNNBAPBBHC : public ::NOHOGHGPBAG
{
public:
	::MoleMole::StaticColorMaterialModifier LNOOKCLIMCK; // 0x48
	::MoleMole::StaticBoolMaterialModifier PJAFPODCLNP; // 0x80
	::MOELDGPPDPM* PILKLAFOKHM; // 0x98
	::MOELDGPPDPM* OMNLMOLAIMC; // 0xA0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGNNBAPBBHC__CTOR_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGNNBAPBBHC_BBOMJDBNHIC_OFFSET))(this);
	}

	::System::Void BKBFHIEKHOO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGNNBAPBBHC_BKBFHIEKHOO_OFFSET))(this);
	}

	::System::Void BOFKBCGJJAB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGNNBAPBBHC_BOFKBCGJJAB_OFFSET))(this);
	}

	::System::Void PPPCNKJGPPJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGNNBAPBBHC_PPPCNKJGPPJ_OFFSET))(this);
	}

	::System::Void NEMLLNEFLBO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGNNBAPBBHC_NEMLLNEFLBO_OFFSET))(this);
	}

	::System::Void HHPAMHKEFAF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGNNBAPBBHC_HHPAMHKEFAF_OFFSET))(this);
	}

	::System::Void KMFGMEDKCCC(::System::Collections::Generic::HashSet_1<::System::Int32>* DAONJLPKIEA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::Int32>*))((::PBYTE)hIl2Cpp + JGNNBAPBBHC_KMFGMEDKCCC_OFFSET))(this, DAONJLPKIEA);
	}

	::System::Boolean DBBANBPGPAE(::LGBIMGEFJCE MDLHJONGOPK, ::MoleMole::StaticBoolMaterialModifier& AOBNJBCBHAK)
	{
		return ((::System::Boolean(*)(::PVOID, ::LGBIMGEFJCE, ::MoleMole::StaticBoolMaterialModifier&))((::PBYTE)hIl2Cpp + JGNNBAPBBHC_DBBANBPGPAE_OFFSET))(this, MDLHJONGOPK, AOBNJBCBHAK);
	}

	::System::Boolean DBBANBPGPAE_1(::LGBIMGEFJCE MDLHJONGOPK, ::MoleMole::StaticFloatMaterialModifier& AOBNJBCBHAK)
	{
		return ((::System::Boolean(*)(::PVOID, ::LGBIMGEFJCE, ::MoleMole::StaticFloatMaterialModifier&))((::PBYTE)hIl2Cpp + JGNNBAPBBHC_DBBANBPGPAE_1_OFFSET))(this, MDLHJONGOPK, AOBNJBCBHAK);
	}

	::System::Boolean DBBANBPGPAE_2(::LGBIMGEFJCE MDLHJONGOPK, ::MoleMole::StaticColorMaterialModifier& AOBNJBCBHAK)
	{
		return ((::System::Boolean(*)(::PVOID, ::LGBIMGEFJCE, ::MoleMole::StaticColorMaterialModifier&))((::PBYTE)hIl2Cpp + JGNNBAPBBHC_DBBANBPGPAE_2_OFFSET))(this, MDLHJONGOPK, AOBNJBCBHAK);
	}

	::System::Boolean DBBANBPGPAE_3(::LGBIMGEFJCE MDLHJONGOPK, ::MoleMole::StaticTextureMaterialModifier& AOBNJBCBHAK)
	{
		return ((::System::Boolean(*)(::PVOID, ::LGBIMGEFJCE, ::MoleMole::StaticTextureMaterialModifier&))((::PBYTE)hIl2Cpp + JGNNBAPBBHC_DBBANBPGPAE_3_OFFSET))(this, MDLHJONGOPK, AOBNJBCBHAK);
	}

	::System::Boolean DBBANBPGPAE_4(::LGBIMGEFJCE MDLHJONGOPK, ::MoleMole::StaticVectorMaterialModifier& AOBNJBCBHAK)
	{
		return ((::System::Boolean(*)(::PVOID, ::LGBIMGEFJCE, ::MoleMole::StaticVectorMaterialModifier&))((::PBYTE)hIl2Cpp + JGNNBAPBBHC_DBBANBPGPAE_4_OFFSET))(this, MDLHJONGOPK, AOBNJBCBHAK);
	}

	::System::Boolean DBBANBPGPAE_5(::LGBIMGEFJCE MDLHJONGOPK, ::MoleMole::StaticKeywordFloatMaterialModifier& AOBNJBCBHAK)
	{
		return ((::System::Boolean(*)(::PVOID, ::LGBIMGEFJCE, ::MoleMole::StaticKeywordFloatMaterialModifier&))((::PBYTE)hIl2Cpp + JGNNBAPBBHC_DBBANBPGPAE_5_OFFSET))(this, MDLHJONGOPK, AOBNJBCBHAK);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGNNBAPBBHC_DISPOSE_OFFSET))(this);
	}
};
