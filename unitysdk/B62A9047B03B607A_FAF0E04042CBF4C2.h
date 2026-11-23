#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class B62A9047B03B607A;
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define B62A9047B03B607A_FAF0E04042CBF4C2_AD8827CD25D2D6E1_OFFSET UNITYSDK_OFFSET(0x3B0C8B0)
#define B62A9047B03B607A_FAF0E04042CBF4C2__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int B62A9047B03B607A_FAF0E04042CBF4C2_TypeDefinitionIndex = 12263;

class B62A9047B03B607A_FAF0E04042CBF4C2 : public ::System::Object
{
public:
	::B62A9047B03B607A* A544919C800E2923; // 0x10
	::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* E04D2BE64FCE9814; // 0x18
	::System::String* BC44D01FDCF9D2D6; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B62A9047B03B607A_FAF0E04042CBF4C2__CTOR_OFFSET))(this);
	}

	::System::Void AD8827CD25D2D6E1(::MiHoYo::SDK::NetworkResponseModel* A6CAE7339066B0FB)
	{
		return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + B62A9047B03B607A_FAF0E04042CBF4C2_AD8827CD25D2D6E1_OFFSET))(this, A6CAE7339066B0FB);
	}
};
