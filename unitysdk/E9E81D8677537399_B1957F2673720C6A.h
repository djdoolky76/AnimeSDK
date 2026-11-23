#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class E9E81D8677537399;
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define E9E81D8677537399_B1957F2673720C6A_A4199979E4DC9A5F_OFFSET UNITYSDK_OFFSET(0x39FEB20)
#define E9E81D8677537399_B1957F2673720C6A__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int E9E81D8677537399_B1957F2673720C6A_TypeDefinitionIndex = 11877;

class E9E81D8677537399_B1957F2673720C6A : public ::System::Object
{
public:
	::E9E81D8677537399* A544919C800E2923; // 0x10
	::System::Action_1<::System::String*>* E04D2BE64FCE9814; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E9E81D8677537399_B1957F2673720C6A__CTOR_OFFSET))(this);
	}

	::System::Void A4199979E4DC9A5F(::MiHoYo::SDK::NetworkResponseModel* A6CAE7339066B0FB)
	{
		return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + E9E81D8677537399_B1957F2673720C6A_A4199979E4DC9A5F_OFFSET))(this, A6CAE7339066B0FB);
	}
};
