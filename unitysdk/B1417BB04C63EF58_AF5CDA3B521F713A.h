#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class B1417BB04C63EF58;
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define B1417BB04C63EF58_AF5CDA3B521F713A_BB32DC8294ECC880_OFFSET UNITYSDK_OFFSET(0x3976020)
#define B1417BB04C63EF58_AF5CDA3B521F713A__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int B1417BB04C63EF58_AF5CDA3B521F713A_TypeDefinitionIndex = 12482;

class B1417BB04C63EF58_AF5CDA3B521F713A : public ::System::Object
{
public:
	::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* E04D2BE64FCE9814; // 0x10
	::B1417BB04C63EF58* A544919C800E2923; // 0x18
	::System::String* BC44D01FDCF9D2D6; // 0x20
	::System::String* AE11B914AE12D7B2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B1417BB04C63EF58_AF5CDA3B521F713A__CTOR_OFFSET))(this);
	}

	::System::Void BB32DC8294ECC880(::System::String* AD4834887E87082A)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + B1417BB04C63EF58_AF5CDA3B521F713A_BB32DC8294ECC880_OFFSET))(this, AD4834887E87082A);
	}
};
