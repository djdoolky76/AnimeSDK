#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/A970A434E9CC38AD/A6ADD7383B6FABEA.h"
#include "unitysdk/E379DE61A548837D.h"
#include "unitysdk/E7CA89B6690BA989.h"
#include "unitysdk/FB15B066A5E7656D.h"

#define A4F267F38F16692E__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int A4F267F38F16692E_TypeDefinitionIndex = 1093;

class A4F267F38F16692E : public ::E379DE61A548837D
{
public:
	::E7CA89B6690BA989 EF0F9D8D794F0A3C; // 0x38
	::FB15B066A5E7656D A84FB6E2922C5619; // 0x80
	::System::Boolean BCA611733BAC07E9; // 0x88
	::System::Boolean E656A32A1110FAE2; // 0x89
	::System::Byte _padding0[0x2];
	::A970A434E9CC38AD::A6ADD7383B6FABEA A08A71862024EEFA; // 0x8C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A4F267F38F16692E__CTOR_OFFSET))(this);
	}
};
