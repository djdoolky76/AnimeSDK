#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"

class BFJDBLNPJFI;
class OFABBAJJIBL;

#define BFJDBLNPJFI_NGBHGGMDDBP_BFKFHAFLHML_OFFSET UNITYSDK_OFFSET(0x185522C0)
#define BFJDBLNPJFI_NGBHGGMDDBP_BNIEFFPJNAH_OFFSET UNITYSDK_OFFSET(0x185522F0)
#define BFJDBLNPJFI_NGBHGGMDDBP__CTOR_OFFSET UNITYSDK_OFFSET(0x18551920)

inline static constexpr unsigned int BFJDBLNPJFI_NGBHGGMDDBP_TypeDefinitionIndex = 74919;

class BFJDBLNPJFI_NGBHGGMDDBP : public ::System::Object
{
public:
	::BFJDBLNPJFI* KLHPEBKNIFB; // 0x10
	::OFABBAJJIBL* JOBCDKHLCMN; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFJDBLNPJFI_NGBHGGMDDBP__CTOR_OFFSET))(this);
	}

	::System::Void BFKFHAFLHML()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFJDBLNPJFI_NGBHGGMDDBP_BFKFHAFLHML_OFFSET))(this);
	}

	::System::Void BNIEFFPJNAH(::MoleMole::HollowChessboard::HollowCell EJCBEJMGFAJ, ::MoleMole::HollowChessboard::HollowCell EBFCACIEKBC, ::MoleMole::HollowChessboard::HollowCell CBLGCIFLMKL, ::MoleMole::HollowChessboard::HollowCell MKBCMHIAMHF)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + BFJDBLNPJFI_NGBHGGMDDBP_BNIEFFPJNAH_OFFSET))(this, EJCBEJMGFAJ, EBFCACIEKBC, CBLGCIFLMKL, MKBCMHIAMHF);
	}
};
