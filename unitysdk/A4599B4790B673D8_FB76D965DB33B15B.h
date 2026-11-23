#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class A4599B4790B673D8;
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { template <typename T> class Action_1; }

#define A4599B4790B673D8_FB76D965DB33B15B_A28595C1AD48B89A_OFFSET UNITYSDK_OFFSET(0x3AF8990)
#define A4599B4790B673D8_FB76D965DB33B15B_B7E166C27C202873_OFFSET UNITYSDK_OFFSET(0x3AF8F90)
#define A4599B4790B673D8_FB76D965DB33B15B__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int A4599B4790B673D8_FB76D965DB33B15B_TypeDefinitionIndex = 12224;

class A4599B4790B673D8_FB76D965DB33B15B : public ::System::Object
{
public:
	::A4599B4790B673D8* A544919C800E2923; // 0x10
	::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* ABC587902F5F29C7; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A4599B4790B673D8_FB76D965DB33B15B__CTOR_OFFSET))(this);
	}

	::System::Void A28595C1AD48B89A(::MiHoYo::SDK::NetworkResponseModel* A6CAE7339066B0FB)
	{
		return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + A4599B4790B673D8_FB76D965DB33B15B_A28595C1AD48B89A_OFFSET))(this, A6CAE7339066B0FB);
	}

	::System::Void B7E166C27C202873(::MiHoYo::SDK::NetworkResponseModel* A6CAE7339066B0FB)
	{
		return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + A4599B4790B673D8_FB76D965DB33B15B_B7E166C27C202873_OFFSET))(this, A6CAE7339066B0FB);
	}
};
