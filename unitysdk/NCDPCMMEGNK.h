#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JENJOEAJELD.h"
#include "unitysdk/MoleMole/HollowChessboard/PieceColorModifyRequest.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector4.h"

#define NCDPCMMEGNK_EGGMBMIACGN_OFFSET UNITYSDK_OFFSET(0x12C553B0)
#define NCDPCMMEGNK_EMOELDAGDKK_OFFSET UNITYSDK_OFFSET(0x12C55010)
#define NCDPCMMEGNK_OKJCHFGIKBH_OFFSET UNITYSDK_OFFSET(0x12C55340)
#define NCDPCMMEGNK__CTOR_OFFSET UNITYSDK_OFFSET(0x12C54FB0)

inline static constexpr unsigned int NCDPCMMEGNK_TypeDefinitionIndex = 54113;

class NCDPCMMEGNK : public ::System::Object
{
public:
	::JENJOEAJELD IAFHBCHLBME; // 0x10
	::MoleMole::HollowChessboard::PieceColorModifyRequest BOBJBPEFLND; // 0x20
	::System::Single KIHCFOJIKBA; // 0x90

	::System::Void _ctor(::MoleMole::HollowChessboard::PieceColorModifyRequest& FCEIKAIDHPM, ::JENJOEAJELD PHHDHIBOCKA)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::PieceColorModifyRequest&, ::JENJOEAJELD))((::PBYTE)hIl2Cpp + NCDPCMMEGNK__CTOR_OFFSET))(this, FCEIKAIDHPM, PHHDHIBOCKA);
	}

	::System::Nullable_1<::UnityEngine::Vector4> EMOELDAGDKK()
	{
		return ((::System::Nullable_1<::UnityEngine::Vector4>(*)(::PVOID))((::PBYTE)hIl2Cpp + NCDPCMMEGNK_EMOELDAGDKK_OFFSET))(this);
	}

	::System::Void OKJCHFGIKBH(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NCDPCMMEGNK_OKJCHFGIKBH_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Nullable_1<::UnityEngine::Color> EGGMBMIACGN()
	{
		return ((::System::Nullable_1<::UnityEngine::Color>(*)(::PVOID))((::PBYTE)hIl2Cpp + NCDPCMMEGNK_EGGMBMIACGN_OFFSET))(this);
	}
};
