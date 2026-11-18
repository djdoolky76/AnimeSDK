#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/System/Object.h"

class FMDPKKAMKAC;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GFNEKDDILHH_BKACDOADKKB_OFFSET UNITYSDK_OFFSET(0x14CE38E0)
#define GFNEKDDILHH_FOKDICONFFP_OFFSET UNITYSDK_OFFSET(0x14CE3550)
#define GFNEKDDILHH_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x14CE3850)
#define GFNEKDDILHH__CTOR_OFFSET UNITYSDK_OFFSET(0x14CE34D0)

inline static constexpr unsigned int GFNEKDDILHH_TypeDefinitionIndex = 57162;

class GFNEKDDILHH : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>* HIDKBLMEAPE; // 0x10
	::System::Collections::Generic::List_1<::FMDPKKAMKAC*>* CMAKBHGDEJF; // 0x18
	::System::Action* EKJEJLDAHLB; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFNEKDDILHH__CTOR_OFFSET))(this);
	}

	::GFNEKDDILHH* FOKDICONFFP(::MoleMole::HollowChessboard::HollowCell HODAIDNDKHD)
	{
		return ((::GFNEKDDILHH*(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + GFNEKDDILHH_FOKDICONFFP_OFFSET))(this, HODAIDNDKHD);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFNEKDDILHH_PHOADBJGFBE_OFFSET))(this);
	}

	::FMDPKKAMKAC* BKACDOADKKB()
	{
		return ((::FMDPKKAMKAC*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFNEKDDILHH_BKACDOADKKB_OFFSET))(this);
	}
};
