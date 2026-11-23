#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"

template <typename T> class FA9B773E8C9B97E9;

#define FFE9438BE3945B32__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int FFE9438BE3945B32_TypeDefinitionIndex = 2000;

class FFE9438BE3945B32 : public ::E379DE61A548837D
{
public:
	::FA9B773E8C9B97E9<::System::UInt32>* A7BEA5CB0FB52345; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFE9438BE3945B32__CTOR_OFFSET))(this);
	}
};
