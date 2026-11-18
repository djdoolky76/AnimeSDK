#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define OGGOGMBBFCN__CTOR_OFFSET UNITYSDK_OFFSET(0x1006F2B0)

inline static constexpr unsigned int OGGOGMBBFCN_TypeDefinitionIndex = 40937;

class OGGOGMBBFCN : public ::System::Object
{
public:
	::System::Int32 BBCEDOEOFBL; // 0x10
	::System::Int32 FOLKIBNJNHM; // 0x14
	::System::Int32 FLJCLMOGPAF; // 0x18
	::System::Boolean INBNDPEECPO; // 0x1C
	::System::Boolean JJCGNBCLCOL; // 0x1D
	::System::Boolean NPCCGHNEADK; // 0x1E
	::System::Boolean PAMOCMIHKDO; // 0x1F
	::System::Boolean CAFDIGOMMPI; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGGOGMBBFCN__CTOR_OFFSET))(this);
	}
};
