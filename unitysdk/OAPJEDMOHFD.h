#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/System/Object.h"

class MBJCLLBMALO;
namespace MoleMole::HollowChessboard { class HollowEntity; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OAPJEDMOHFD_EFGOADGCJMA_OFFSET UNITYSDK_OFFSET(0xEECA0A0)
#define OAPJEDMOHFD_FLAJOLIIJDM_OFFSET UNITYSDK_OFFSET(0xEECA270)
#define OAPJEDMOHFD_GIBHIANOEFF_OFFSET UNITYSDK_OFFSET(0xEECA400)
#define OAPJEDMOHFD_MHOKLCEMPMO_OFFSET UNITYSDK_OFFSET(0xEEC9C80)
#define OAPJEDMOHFD_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0xEECA530)
#define OAPJEDMOHFD__CTOR_OFFSET UNITYSDK_OFFSET(0xEEC9B40)

inline static constexpr unsigned int OAPJEDMOHFD_TypeDefinitionIndex = 41217;

class OAPJEDMOHFD : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::HollowCell, ::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowEntity*>*>* KFCGBPBBJMP; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::HollowChessboard::HollowCell>* EMHHBPOPBHD; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAPJEDMOHFD__CTOR_OFFSET))(this);
	}

	::System::Void MHOKLCEMPMO(::MBJCLLBMALO* EFEBFFCEJEF)
	{
		return ((::System::Void(*)(::PVOID, ::MBJCLLBMALO*))((::PBYTE)hIl2Cpp + OAPJEDMOHFD_MHOKLCEMPMO_OFFSET))(this, EFEBFFCEJEF);
	}

	::System::Void EFGOADGCJMA(::MBJCLLBMALO* EFEBFFCEJEF)
	{
		return ((::System::Void(*)(::PVOID, ::MBJCLLBMALO*))((::PBYTE)hIl2Cpp + OAPJEDMOHFD_EFGOADGCJMA_OFFSET))(this, EFEBFFCEJEF);
	}

	::System::Boolean FLAJOLIIJDM(::MoleMole::HollowChessboard::HollowCell CKPGOKHECCH)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + OAPJEDMOHFD_FLAJOLIIJDM_OFFSET))(this, CKPGOKHECCH);
	}

	::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowEntity*>* GIBHIANOEFF(::MoleMole::HollowChessboard::HollowCell CKPGOKHECCH)
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowEntity*>*(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + OAPJEDMOHFD_GIBHIANOEFF_OFFSET))(this, CKPGOKHECCH);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAPJEDMOHFD_PHOADBJGFBE_OFFSET))(this);
	}
};
