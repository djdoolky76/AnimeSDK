#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E68AA4EB51923C98/E13A0D8F5AE46E00.h"
#include "unitysdk/System/Object.h"

class FB3F404A630B047C;
class FC45E67160ADB9F6;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FC45E67160ADB9F6_A6D60B45C4CAF478_BEFB708641FAF671_OFFSET UNITYSDK_OFFSET(0x1BC01C0)
#define FC45E67160ADB9F6_A6D60B45C4CAF478__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int FC45E67160ADB9F6_A6D60B45C4CAF478_TypeDefinitionIndex = 232;

class FC45E67160ADB9F6_A6D60B45C4CAF478 : public ::System::Object
{
public:
	::FC45E67160ADB9F6* A544919C800E2923; // 0x10
	::System::Int32 B48C66E5FB2449C6; // 0x18
	::System::Byte _padding0[0x4];
	::System::Collections::Generic::Dictionary_2<::E68AA4EB51923C98::E13A0D8F5AE46E00, ::System::UInt32>* F7CA17129A738C5F; // 0x20
	::System::Collections::Generic::Dictionary_2<::E68AA4EB51923C98::E13A0D8F5AE46E00, ::System::UInt32>* AE580807A41CC684; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FC45E67160ADB9F6_A6D60B45C4CAF478__CTOR_OFFSET))(this);
	}

	::System::Void BEFB708641FAF671(::FB3F404A630B047C* BAF8A3E3C5E8EAEF)
	{
		return ((::System::Void(*)(::PVOID, ::FB3F404A630B047C*))((::PBYTE)hIl2Cpp + FC45E67160ADB9F6_A6D60B45C4CAF478_BEFB708641FAF671_OFFSET))(this, BAF8A3E3C5E8EAEF);
	}
};
