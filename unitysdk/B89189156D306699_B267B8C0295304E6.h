#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class AB642D1382756991;
class E8FAEA1C3232BFCF;
namespace ABC::Collections::Pooled { template <typename T> class PooledList_1; }

#define B89189156D306699_B267B8C0295304E6_B331B121C62F2740_OFFSET UNITYSDK_OFFSET(0x19FB260)
#define B89189156D306699_B267B8C0295304E6__CTOR_OFFSET UNITYSDK_OFFSET(0x19FB3C0)

inline static constexpr unsigned int B89189156D306699_B267B8C0295304E6_TypeDefinitionIndex = 1803;

struct alignas(8) B89189156D306699_B267B8C0295304E6
{
	::ABC::Collections::Pooled::PooledList_1<::E8FAEA1C3232BFCF*>* BB199CE83F869561; // 0x10

	::System::Void _ctor(::ABC::Collections::Pooled::PooledList_1<::E8FAEA1C3232BFCF*>* AE6F379D49132D4B)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::Collections::Pooled::PooledList_1<::E8FAEA1C3232BFCF*>*))((::PBYTE)hIl2Cpp + B89189156D306699_B267B8C0295304E6__CTOR_OFFSET))(this, AE6F379D49132D4B);
	}

	::System::Void B331B121C62F2740(::AB642D1382756991* B29880F033C1F232)
	{
		return ((::System::Void(*)(::PVOID, ::AB642D1382756991*))((::PBYTE)hIl2Cpp + B89189156D306699_B267B8C0295304E6_B331B121C62F2740_OFFSET))(this, B29880F033C1F232);
	}
};
