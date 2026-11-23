#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class F00D975466190277;
class F3F08B203D851D60;
namespace MiHoYo::SDK { class AccountModel; }
namespace MiHoYo::SDK { class NetworkResponseModelEx; }
namespace MiHoYo::SDK { template <typename T> class CallbackModel_1; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define F3F08B203D851D60_FD4E5F5D00F1E2E2_A0215E3EC1085F8E_OFFSET UNITYSDK_OFFSET(0x3988320)
#define F3F08B203D851D60_FD4E5F5D00F1E2E2_FFE7C4F99781C18E_OFFSET UNITYSDK_OFFSET(0x3986960)
#define F3F08B203D851D60_FD4E5F5D00F1E2E2__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int F3F08B203D851D60_FD4E5F5D00F1E2E2_TypeDefinitionIndex = 12502;

class F3F08B203D851D60_FD4E5F5D00F1E2E2 : public ::System::Object
{
public:
	::F3F08B203D851D60* A544919C800E2923; // 0x10
	::System::String* E5ABD378DF0998D3; // 0x18
	::System::String* B818DC27A4B3B150; // 0x20
	::System::String* EC10AF77F34CD102; // 0x28
	::System::Action_1<::MiHoYo::SDK::CallbackModel_1<::MiHoYo::SDK::AccountModel*>*>* E04D2BE64FCE9814; // 0x30
	::F00D975466190277* E199CFD261114F07; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F3F08B203D851D60_FD4E5F5D00F1E2E2__CTOR_OFFSET))(this);
	}

	::System::Void FFE7C4F99781C18E(::MiHoYo::SDK::NetworkResponseModelEx* A6CAE7339066B0FB)
	{
		return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModelEx*))((::PBYTE)hIl2Cpp + F3F08B203D851D60_FD4E5F5D00F1E2E2_FFE7C4F99781C18E_OFFSET))(this, A6CAE7339066B0FB);
	}

	::System::Void A0215E3EC1085F8E(::System::String* A659FB88768169A1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + F3F08B203D851D60_FD4E5F5D00F1E2E2_A0215E3EC1085F8E_OFFSET))(this, A659FB88768169A1);
	}
};
