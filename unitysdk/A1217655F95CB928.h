#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"

namespace System { class String; }

#define A1217655F95CB928__CTOR_OFFSET UNITYSDK_OFFSET(0x16B7FD0)

inline static constexpr unsigned int A1217655F95CB928_TypeDefinitionIndex = 1602;

class A1217655F95CB928 : public ::E379DE61A548837D
{
public:
	::System::String* E31845CE1465720D; // 0x38
	::System::Single F8E1A58D7D9FD81C; // 0x40
	::System::Boolean B4DADC2BB0AC380D; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A1217655F95CB928__CTOR_OFFSET))(this);
	}
};
