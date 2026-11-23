#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define F0163480421EF7C4_F9E068F4F31B795D_E45FCA64C6F34674_OFFSET UNITYSDK_OFFSET(0x3A42FD0)
#define F0163480421EF7C4_F9E068F4F31B795D__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int F0163480421EF7C4_F9E068F4F31B795D_TypeDefinitionIndex = 12944;

class F0163480421EF7C4_F9E068F4F31B795D : public ::System::Object
{
public:
	::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* E04D2BE64FCE9814; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F0163480421EF7C4_F9E068F4F31B795D__CTOR_OFFSET))(this);
	}

	::System::Void E45FCA64C6F34674(::System::String* AD4834887E87082A)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + F0163480421EF7C4_F9E068F4F31B795D_E45FCA64C6F34674_OFFSET))(this, AD4834887E87082A);
	}
};
