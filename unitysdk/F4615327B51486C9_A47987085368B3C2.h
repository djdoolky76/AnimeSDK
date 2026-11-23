#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class F4615327B51486C9;
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define F4615327B51486C9_A47987085368B3C2_E45FCA64C6F34674_OFFSET UNITYSDK_OFFSET(0x39CD7F0)
#define F4615327B51486C9_A47987085368B3C2__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int F4615327B51486C9_A47987085368B3C2_TypeDefinitionIndex = 12608;

class F4615327B51486C9_A47987085368B3C2 : public ::System::Object
{
public:
	::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* E04D2BE64FCE9814; // 0x10
	::F4615327B51486C9* A544919C800E2923; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F4615327B51486C9_A47987085368B3C2__CTOR_OFFSET))(this);
	}

	::System::Void E45FCA64C6F34674(::System::String* AD4834887E87082A)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + F4615327B51486C9_A47987085368B3C2_E45FCA64C6F34674_OFFSET))(this, AD4834887E87082A);
	}
};
