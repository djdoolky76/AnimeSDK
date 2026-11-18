#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BFDAMBNHMFN.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Foundation/Unreal/FGameplayTagContainer.h"
#include "unitysdk/HKMICDOBLCA.h"
#include "unitysdk/MoleMole/HollowChessboard/EffectResult.h"

class BMJKEPAMDBD;
class EHJOEHBIMJG_MFFHHFPCAOA;
class LDDDABNDHEG;
class LHCEEOMENHK;
class MLKKDHPBPNJ;
namespace MoleMole { class ChessboardTextureSheetTagsData; }

#define EHJOEHBIMJG_AOEKGHAPFKD_OFFSET UNITYSDK_OFFSET(0x10F2F470)
#define EHJOEHBIMJG_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x10F30690)
#define EHJOEHBIMJG_CIADEDDHIMA_OFFSET UNITYSDK_OFFSET(0x10F30780)
#define EHJOEHBIMJG_DMNCNINHFBC_OFFSET UNITYSDK_OFFSET(0x10F30640)
#define EHJOEHBIMJG_DOHLPHOBHGM_OFFSET UNITYSDK_OFFSET(0x10F2F8B0)
#define EHJOEHBIMJG_EHGFMNLPFKM_OFFSET UNITYSDK_OFFSET(0x10F305A0)
#define EHJOEHBIMJG__CTOR_OFFSET UNITYSDK_OFFSET(0x10F2F460)

inline static constexpr unsigned int EHJOEHBIMJG_TypeDefinitionIndex = 66927;

class EHJOEHBIMJG : public ::System::Object
{
public:
	::BFDAMBNHMFN LENCGPFMHKJ; // 0x10
	::MoleMole::ChessboardTextureSheetTagsData* FGMFKLAOLEK; // 0xA0
	::EHJOEHBIMJG_MFFHHFPCAOA* JJPMHGNDHAP; // 0xA8
	::LHCEEOMENHK* CKKOFINKMJM; // 0xB0
	::LDDDABNDHEG* BGJCHIHGILO; // 0xB8
	::System::Boolean FLCPLAPPHIP; // 0xC0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHJOEHBIMJG__CTOR_OFFSET))(this);
	}

	::MoleMole::HollowChessboard::EffectResult AOEKGHAPFKD(::MLKKDHPBPNJ* MINGNPLFJBJ, ::HKMICDOBLCA& IGAAKDOIPNN, ::Foundation::Unreal::FGameplayTagContainer& EEHMJDOEDBL)
	{
		return ((::MoleMole::HollowChessboard::EffectResult(*)(::PVOID, ::MLKKDHPBPNJ*, ::HKMICDOBLCA&, ::Foundation::Unreal::FGameplayTagContainer&))((::PBYTE)hIl2Cpp + EHJOEHBIMJG_AOEKGHAPFKD_OFFSET))(this, MINGNPLFJBJ, IGAAKDOIPNN, EEHMJDOEDBL);
	}

	::System::Void DMNCNINHFBC(::LDDDABNDHEG* IAGBNBJFFFG)
	{
		return ((::System::Void(*)(::PVOID, ::LDDDABNDHEG*))((::PBYTE)hIl2Cpp + EHJOEHBIMJG_DMNCNINHFBC_OFFSET))(this, IAGBNBJFFFG);
	}

	::System::Void BBOMJDBNHIC(::LDDDABNDHEG* IAGBNBJFFFG, ::LHCEEOMENHK* CJEKDBFDGID, ::MoleMole::ChessboardTextureSheetTagsData* ICCALLKAOJO)
	{
		return ((::System::Void(*)(::PVOID, ::LDDDABNDHEG*, ::LHCEEOMENHK*, ::MoleMole::ChessboardTextureSheetTagsData*))((::PBYTE)hIl2Cpp + EHJOEHBIMJG_BBOMJDBNHIC_OFFSET))(this, IAGBNBJFFFG, CJEKDBFDGID, ICCALLKAOJO);
	}

	::MoleMole::HollowChessboard::EffectResult EHGFMNLPFKM(::BFDAMBNHMFN& BNPHMKKOOAE, ::BFDAMBNHMFN& AKEOCMBBFDO)
	{
		return ((::MoleMole::HollowChessboard::EffectResult(*)(::PVOID, ::BFDAMBNHMFN&, ::BFDAMBNHMFN&))((::PBYTE)hIl2Cpp + EHJOEHBIMJG_EHGFMNLPFKM_OFFSET))(this, BNPHMKKOOAE, AKEOCMBBFDO);
	}

	::System::Void CIADEDDHIMA(::MoleMole::HollowChessboard::EffectResult ICABHDLBBMH, ::BMJKEPAMDBD* MOMOHDCIECB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::EffectResult, ::BMJKEPAMDBD*))((::PBYTE)hIl2Cpp + EHJOEHBIMJG_CIADEDDHIMA_OFFSET))(this, ICABHDLBBMH, MOMOHDCIECB);
	}

	::BFDAMBNHMFN DOHLPHOBHGM(::MLKKDHPBPNJ* MINGNPLFJBJ, ::HKMICDOBLCA& IGAAKDOIPNN, ::Foundation::Unreal::FGameplayTagContainer& EEHMJDOEDBL)
	{
		return ((::BFDAMBNHMFN(*)(::PVOID, ::MLKKDHPBPNJ*, ::HKMICDOBLCA&, ::Foundation::Unreal::FGameplayTagContainer&))((::PBYTE)hIl2Cpp + EHJOEHBIMJG_DOHLPHOBHGM_OFFSET))(this, MINGNPLFJBJ, IGAAKDOIPNN, EEHMJDOEDBL);
	}
};
