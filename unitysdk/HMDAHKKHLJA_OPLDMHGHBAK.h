#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HMDAHKKHLJA;

#define HMDAHKKHLJA_OPLDMHGHBAK_KNHEKMAEOLH_OFFSET UNITYSDK_OFFSET(0xE9FD950)
#define HMDAHKKHLJA_OPLDMHGHBAK__CTOR_OFFSET UNITYSDK_OFFSET(0xE9FD940)

inline static constexpr unsigned int HMDAHKKHLJA_OPLDMHGHBAK_TypeDefinitionIndex = 85923;

class HMDAHKKHLJA_OPLDMHGHBAK : public ::System::Object
{
public:
	::HMDAHKKHLJA* KLHPEBKNIFB; // 0x10
	::System::Single CIIPCCLOHLH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMDAHKKHLJA_OPLDMHGHBAK__CTOR_OFFSET))(this);
	}

	::System::Boolean KNHEKMAEOLH()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HMDAHKKHLJA_OPLDMHGHBAK_KNHEKMAEOLH_OFFSET))(this);
	}
};
