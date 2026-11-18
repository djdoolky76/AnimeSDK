#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FGameplayTag.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BFDAMBNHMFN.h"
#include "unitysdk/MoleMole/HollowChessboard/EffectResult.h"

class EHJOEHBIMJG_MFFHHFPCAOA;
class NLPOOFBMDLC;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LDDDABNDHEG_BIJMCGFGNAB_OFFSET UNITYSDK_OFFSET(0x186566C0)
#define LDDDABNDHEG_DALDEMGFHPC_OFFSET UNITYSDK_OFFSET(0x186568D0)
#define LDDDABNDHEG_GHJBLONNFOE_OFFSET UNITYSDK_OFFSET(0x186566E0)
#define LDDDABNDHEG_IMDEECDNABP_OFFSET UNITYSDK_OFFSET(0x18656920)
#define LDDDABNDHEG_LLFHMDBJGLE_OFFSET UNITYSDK_OFFSET(0x186566D0)
#define LDDDABNDHEG_NMCDMHALHMA_OFFSET UNITYSDK_OFFSET(0x18656970)
#define LDDDABNDHEG_PPGBHNIJOIB_OFFSET UNITYSDK_OFFSET(0x18656930)
#define LDDDABNDHEG__CTOR_OFFSET UNITYSDK_OFFSET(0x186566B0)

inline static constexpr unsigned int LDDDABNDHEG_TypeDefinitionIndex = 84541;

class LDDDABNDHEG : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::NLPOOFBMDLC*>* IACKOFJCGEH; // 0x10
	::Foundation::Unreal::FGameplayTag _BMKNKIIMDMH_k__BackingField; // 0x18
	::System::Boolean JPBMMEEBFCN; // 0x20

	::System::Void _ctor(::System::Collections::Generic::List_1<::NLPOOFBMDLC*>* JOAFIMMDPFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::NLPOOFBMDLC*>*))((::PBYTE)hIl2Cpp + LDDDABNDHEG__CTOR_OFFSET))(this, JOAFIMMDPFM);
	}

	::Foundation::Unreal::FGameplayTag BIJMCGFGNAB()
	{
		return ((::Foundation::Unreal::FGameplayTag(*)(::PVOID))((::PBYTE)hIl2Cpp + LDDDABNDHEG_BIJMCGFGNAB_OFFSET))(this);
	}

	::System::Boolean LLFHMDBJGLE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LDDDABNDHEG_LLFHMDBJGLE_OFFSET))(this);
	}

	::MoleMole::HollowChessboard::EffectResult GHJBLONNFOE(::BFDAMBNHMFN& BNPHMKKOOAE, ::BFDAMBNHMFN& AKEOCMBBFDO, ::EHJOEHBIMJG_MFFHHFPCAOA* AAOCANGHBDG)
	{
		return ((::MoleMole::HollowChessboard::EffectResult(*)(::PVOID, ::BFDAMBNHMFN&, ::BFDAMBNHMFN&, ::EHJOEHBIMJG_MFFHHFPCAOA*))((::PBYTE)hIl2Cpp + LDDDABNDHEG_GHJBLONNFOE_OFFSET))(this, BNPHMKKOOAE, AKEOCMBBFDO, AAOCANGHBDG);
	}

	::System::Void DALDEMGFHPC(::Foundation::Unreal::FGameplayTag NDKGCHILJPA)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::FGameplayTag))((::PBYTE)hIl2Cpp + LDDDABNDHEG_DALDEMGFHPC_OFFSET))(this, NDKGCHILJPA);
	}

	::System::Void IMDEECDNABP(::Foundation::Unreal::FGameplayTag EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::FGameplayTag))((::PBYTE)hIl2Cpp + LDDDABNDHEG_IMDEECDNABP_OFFSET))(this, EGEGIMGMJHN);
	}

	static ::LDDDABNDHEG* PPGBHNIJOIB()
	{
		return ((::LDDDABNDHEG*(*)())((::PBYTE)hIl2Cpp + LDDDABNDHEG_PPGBHNIJOIB_OFFSET))();
	}

	::System::Void NMCDMHALHMA(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LDDDABNDHEG_NMCDMHALHMA_OFFSET))(this, EGEGIMGMJHN);
	}
};
