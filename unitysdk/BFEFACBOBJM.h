#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FILGGMBPDJD.h"
#include "unitysdk/MoleMole/Config/ConfigHollowChessboard_BigTVSwitchReason.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"

class FBAMLABJMKF;
class PNJDGHBEMLK;
class POPMPAPKINK;
namespace MoleMole::Config { class ConfigHollowChessboard_ChessEffectBase; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BFEFACBOBJM_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x170231C0)
#define BFEFACBOBJM_DFJPMOOOLHM_OFFSET UNITYSDK_OFFSET(0x17023200)
#define BFEFACBOBJM_HCJGGHLFKKE_OFFSET UNITYSDK_OFFSET(0x17023470)
#define BFEFACBOBJM_KADCMBMOOBI_OFFSET UNITYSDK_OFFSET(0x17023570)
#define BFEFACBOBJM_LCGFOBOHNBL_OFFSET UNITYSDK_OFFSET(0x170234E0)
#define BFEFACBOBJM_MHHJPBJILBJ_OFFSET UNITYSDK_OFFSET(0x17023530)
#define BFEFACBOBJM__CTOR_OFFSET UNITYSDK_OFFSET(0x17023130)

inline static constexpr unsigned int BFEFACBOBJM_TypeDefinitionIndex = 83135;

class BFEFACBOBJM : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::POPMPAPKINK*>* ACDKKCINLON; // 0x10
	::FBAMLABJMKF* GFFCBBDKCGC; // 0x18

	::System::Void _ctor(::FBAMLABJMKF* COBEJJHGMPO)
	{
		return ((::System::Void(*)(::PVOID, ::FBAMLABJMKF*))((::PBYTE)hIl2Cpp + BFEFACBOBJM__CTOR_OFFSET))(this, COBEJJHGMPO);
	}

	::System::Void BBOMJDBNHIC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFEFACBOBJM_BBOMJDBNHIC_OFFSET))(this);
	}

	::System::Void DFJPMOOOLHM(::System::Single PMNLNNGEIFM, ::System::Single BEKLCLFIDKF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + BFEFACBOBJM_DFJPMOOOLHM_OFFSET))(this, PMNLNNGEIFM, BEKLCLFIDKF);
	}

	::System::Void HCJGGHLFKKE(::System::Single PMNLNNGEIFM, ::System::Single BEKLCLFIDKF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + BFEFACBOBJM_HCJGGHLFKKE_OFFSET))(this, PMNLNNGEIFM, BEKLCLFIDKF);
	}

	::System::Void LCGFOBOHNBL(::PNJDGHBEMLK* NLIDNDCGOMK)
	{
		return ((::System::Void(*)(::PVOID, ::PNJDGHBEMLK*))((::PBYTE)hIl2Cpp + BFEFACBOBJM_LCGFOBOHNBL_OFFSET))(this, NLIDNDCGOMK);
	}

	::System::Void MHHJPBJILBJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFEFACBOBJM_MHHJPBJILBJ_OFFSET))(this);
	}

	::POPMPAPKINK* KADCMBMOOBI(::FILGGMBPDJD FGDPOAFBDID, ::MoleMole::HollowChessboard::HollowCell ODMEMDAFINA, ::MoleMole::HollowChessboard::HollowCell EMJCEBIPDBL, ::System::Action* IHLBALNBGKM, ::MoleMole::Config::ConfigHollowChessboard_BigTVSwitchReason FKMHMOELCIO, ::MoleMole::Config::ConfigHollowChessboard_ChessEffectBase* HMLFGMBLKLJ, ::System::Action* NBIBGNHHGBM, ::System::Boolean MOCFACNMCHG)
	{
		return ((::POPMPAPKINK*(*)(::PVOID, ::FILGGMBPDJD, ::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell, ::System::Action*, ::MoleMole::Config::ConfigHollowChessboard_BigTVSwitchReason, ::MoleMole::Config::ConfigHollowChessboard_ChessEffectBase*, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + BFEFACBOBJM_KADCMBMOOBI_OFFSET))(this, FGDPOAFBDID, ODMEMDAFINA, EMJCEBIPDBL, IHLBALNBGKM, FKMHMOELCIO, HMLFGMBLKLJ, NBIBGNHHGBM, MOCFACNMCHG);
	}
};
