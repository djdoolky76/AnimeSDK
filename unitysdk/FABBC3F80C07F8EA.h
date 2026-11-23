#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"
#include "unitysdk/E7CA89B6690BA989.h"

class FB3503DB193F1274;
template <typename T> class FA9B773E8C9B97E9;

#define FABBC3F80C07F8EA__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int FABBC3F80C07F8EA_TypeDefinitionIndex = 2045;

class FABBC3F80C07F8EA : public ::E379DE61A548837D
{
public:
	::System::Boolean FBD08428AD1DE417; // 0x38
	::System::Boolean BE68A1F16F868200; // 0x39
	::System::Byte _padding0[0x6];
	::E7CA89B6690BA989 EF0F9D8D794F0A3C; // 0x40
	::FB3503DB193F1274* FD9AAD34E5DF25A0; // 0x88
	::FA9B773E8C9B97E9<::FB3503DB193F1274*>* AFF083B1B28237B5; // 0x90

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FABBC3F80C07F8EA__CTOR_OFFSET))(this);
	}
};
