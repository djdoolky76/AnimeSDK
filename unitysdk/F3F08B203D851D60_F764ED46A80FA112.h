#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class F3F08B203D851D60;
namespace MiHoYo::SDK { template <typename T> class CallbackModel_1; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define F3F08B203D851D60_F764ED46A80FA112_BCA673668740AAC9_OFFSET UNITYSDK_OFFSET(0x3985300)
#define F3F08B203D851D60_F764ED46A80FA112_FA71D20008B54B22_OFFSET UNITYSDK_OFFSET(0x39850B0)
#define F3F08B203D851D60_F764ED46A80FA112__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int F3F08B203D851D60_F764ED46A80FA112_TypeDefinitionIndex = 12499;

class F3F08B203D851D60_F764ED46A80FA112 : public ::System::Object
{
public:
	::F3F08B203D851D60* A544919C800E2923; // 0x10
	::System::Action_1<::MiHoYo::SDK::CallbackModel_1<::System::String*>*>* E04D2BE64FCE9814; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F3F08B203D851D60_F764ED46A80FA112__CTOR_OFFSET))(this);
	}

	::System::Void FA71D20008B54B22(::System::Boolean B2C7EFC78EE92D9D)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + F3F08B203D851D60_F764ED46A80FA112_FA71D20008B54B22_OFFSET))(this, B2C7EFC78EE92D9D);
	}

	::System::Void BCA673668740AAC9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F3F08B203D851D60_F764ED46A80FA112_BCA673668740AAC9_OFFSET))(this);
	}
};
