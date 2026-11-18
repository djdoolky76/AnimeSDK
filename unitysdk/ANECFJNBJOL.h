#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/System/ValueType.h"

#define ANECFJNBJOL__CCTOR_OFFSET UNITYSDK_OFFSET(0x16D97D20)

inline static constexpr unsigned int ANECFJNBJOL_TypeDefinitionIndex = 43463;

struct alignas(4) ANECFJNBJOL
{
	static ::ANECFJNBJOL* StaticGet_DDGNFJDLOKA()
	{
		return (::ANECFJNBJOL*)Il2CppClass::FromTypeDefinitionIndex(ANECFJNBJOL_TypeDefinitionIndex)->GetStaticField(0xEF20);
	}
	::System::Boolean MGCGDMLOHNG; // 0x10
	::System::Boolean FGAIAOHGNFJ; // 0x11
	::System::Byte _padding0[0x2];
	::MoleMole::HollowChessboard::HollowCell OLNJKJBFPPK; // 0x14

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ANECFJNBJOL__CCTOR_OFFSET))();
	}
};
