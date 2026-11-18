#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FBAMLABJMKF_NJICNBPHKCE.h"
#include "unitysdk/MoleMole/HollowPieceRepresentType.h"
#include "unitysdk/BFPMCMIKJII_GELBGGBPBMD.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/System/ValueTuple_2.h"

class FBAMLABJMKF;
class FBJGGPABDIH;
class FMNAIOANOLK;
class IPMBELDBAJK;
class PNJDGHBEMLK;
namespace MoleMole::Config { class ConfigHollowChessboard; }

#define BFPMCMIKJII_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11502D40)
#define BFPMCMIKJII_NNMABIPKEEC_OFFSET UNITYSDK_OFFSET(0x11502DA0)
#define BFPMCMIKJII_OAIELCOKIAJ_OFFSET UNITYSDK_OFFSET(0x11502F70)
#define BFPMCMIKJII_OIPFFPKPGCI_OFFSET UNITYSDK_OFFSET(0x11503610)
#define BFPMCMIKJII__CTOR_OFFSET UNITYSDK_OFFSET(0x11502D80)

inline static constexpr unsigned int BFPMCMIKJII_TypeDefinitionIndex = 41008;

class BFPMCMIKJII
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFPMCMIKJII__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFPMCMIKJII_DISPOSE_OFFSET))(this);
	}

	static ::System::Single NNMABIPKEEC(::BFPMCMIKJII_GELBGGBPBMD& param_0)
	{
		return ((::System::Single(*)(::BFPMCMIKJII_GELBGGBPBMD&))((::PBYTE)hIl2Cpp + BFPMCMIKJII_NNMABIPKEEC_OFFSET))(param_0);
	}

	::PNJDGHBEMLK* OAIELCOKIAJ(::MoleMole::HollowChessboard::HollowCell LEBOPOFFPOF, ::FMNAIOANOLK* MLCFEGOMFGH, ::System::Boolean NNGMJOGAJDG, ::FBAMLABJMKF_NJICNBPHKCE EJEEMPKJEND, ::System::ValueTuple_2<::MoleMole::HollowPieceRepresentType, ::MoleMole::HollowChessboard::HollowCell> JMBDBELDLGM, ::MoleMole::Config::ConfigHollowChessboard* LCFNEAHDMHH, ::FBAMLABJMKF* IHHHIDMPIFD, ::FBJGGPABDIH* AIJCDDCEJFC, ::System::Boolean FJKEHCFOOPP)
	{
		return ((::PNJDGHBEMLK*(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell, ::FMNAIOANOLK*, ::System::Boolean, ::FBAMLABJMKF_NJICNBPHKCE, ::System::ValueTuple_2<::MoleMole::HollowPieceRepresentType, ::MoleMole::HollowChessboard::HollowCell>, ::MoleMole::Config::ConfigHollowChessboard*, ::FBAMLABJMKF*, ::FBJGGPABDIH*, ::System::Boolean))((::PBYTE)hIl2Cpp + BFPMCMIKJII_OAIELCOKIAJ_OFFSET))(this, LEBOPOFFPOF, MLCFEGOMFGH, NNGMJOGAJDG, EJEEMPKJEND, JMBDBELDLGM, LCFNEAHDMHH, IHHHIDMPIFD, AIJCDDCEJFC, FJKEHCFOOPP);
	}

	static ::IPMBELDBAJK* OIPFFPKPGCI(::BFPMCMIKJII_GELBGGBPBMD& param_0)
	{
		return ((::IPMBELDBAJK*(*)(::BFPMCMIKJII_GELBGGBPBMD&))((::PBYTE)hIl2Cpp + BFPMCMIKJII_OIPFFPKPGCI_OFFSET))(param_0);
	}
};
