#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"

#define B89606D11CB3D87C__CTOR_OFFSET UNITYSDK_OFFSET(0x17B7790)

inline static constexpr unsigned int B89606D11CB3D87C_TypeDefinitionIndex = 1223;

class B89606D11CB3D87C : public ::E379DE61A548837D
{
public:
	::System::Boolean E580C97C13617576; // 0x38
	::System::Byte _padding0[0x3];
	::System::Single FD9E28B525039E76; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B89606D11CB3D87C__CTOR_OFFSET))(this);
	}
};
