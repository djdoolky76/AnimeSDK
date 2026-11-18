#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CNOMKEKNFBF.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowChessboardUID.h"

class EAAIIJHJGBH;
class FMNAIOANOLK;

#define CNEHHDDKHIH_FHINMKAEADG_OFFSET UNITYSDK_OFFSET(0x145D90C0)
#define CNEHHDDKHIH__CTOR_OFFSET UNITYSDK_OFFSET(0x145D90A0)

inline static constexpr unsigned int CNEHHDDKHIH_TypeDefinitionIndex = 39813;

class CNEHHDDKHIH : public ::CNOMKEKNFBF
{
public:
	::EAAIIJHJGBH* AFCLJHCNFAC; // 0x20
	::EAAIIJHJGBH* GDJDAMEBNKL; // 0x28

	::System::Void _ctor(::System::Int32 DKOFFFNEFJC, ::MoleMole::HollowChessboard::HollowChessboardUID BONICGBNDAA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::MoleMole::HollowChessboard::HollowChessboardUID))((::PBYTE)hIl2Cpp + CNEHHDDKHIH__CTOR_OFFSET))(this, DKOFFFNEFJC, BONICGBNDAA);
	}

	::System::Boolean FHINMKAEADG(::FMNAIOANOLK* HMMMOCJAEOA, ::MoleMole::HollowChessboard::HollowCell OHOGDOMNHNK, ::EAAIIJHJGBH*& MHJBBOJKPNF)
	{
		return ((::System::Boolean(*)(::PVOID, ::FMNAIOANOLK*, ::MoleMole::HollowChessboard::HollowCell, ::EAAIIJHJGBH*&))((::PBYTE)hIl2Cpp + CNEHHDDKHIH_FHINMKAEADG_OFFSET))(this, HMMMOCJAEOA, OHOGDOMNHNK, MHJBBOJKPNF);
	}
};
