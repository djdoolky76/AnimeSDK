#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class F3F08B203D851D60;
namespace MiHoYo::SDK { template <typename T> class CallbackModel_1; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define F3F08B203D851D60_F99ADFB061BF627C_EDDADE32D11C68F0_OFFSET UNITYSDK_OFFSET(0x3981E30)
#define F3F08B203D851D60_F99ADFB061BF627C__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int F3F08B203D851D60_F99ADFB061BF627C_TypeDefinitionIndex = 12492;

class F3F08B203D851D60_F99ADFB061BF627C : public ::System::Object
{
public:
	::F3F08B203D851D60* A544919C800E2923; // 0x10
	::System::Action_1<::MiHoYo::SDK::CallbackModel_1<::System::String*>*>* E04D2BE64FCE9814; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F3F08B203D851D60_F99ADFB061BF627C__CTOR_OFFSET))(this);
	}

	::System::Void EDDADE32D11C68F0(::System::String* A6CAE7339066B0FB)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + F3F08B203D851D60_F99ADFB061BF627C_EDDADE32D11C68F0_OFFSET))(this, A6CAE7339066B0FB);
	}
};
