#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/F9F08C8A38C9E957_E5AC5ECA04617186.h"
#include "unitysdk/F9F08C8A38C9E957_EBF6D6D9DB1FBAE1.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define F9F08C8A38C9E957_A1E97155B145443C_OFFSET UNITYSDK_OFFSET(0x181FA30)
#define F9F08C8A38C9E957_EC22F59F2C588175_OFFSET UNITYSDK_OFFSET(0x181FD70)
#define F9F08C8A38C9E957_FCC7443573DD0222_OFFSET UNITYSDK_OFFSET(0x181F990)
#define F9F08C8A38C9E957_FCEF2F02917C8BAE_OFFSET UNITYSDK_OFFSET(0x181FAA0)
#define F9F08C8A38C9E957__CTOR_OFFSET UNITYSDK_OFFSET(0x181FE10)

inline static constexpr unsigned int F9F08C8A38C9E957_TypeDefinitionIndex = 1087;

class F9F08C8A38C9E957 : public ::System::Object
{
public:
	::F9F08C8A38C9E957_E5AC5ECA04617186 BE4992BADB082B07; // 0x10
	::System::Single FF49DAB3CDC0F786; // 0x14
	::F9F08C8A38C9E957_EBF6D6D9DB1FBAE1 FE5554D935A874ED; // 0x18
	::System::Single FA207CD36E3CC82D; // 0x1C
	::System::Int32 A7D337F256CE6F93; // 0x20
	::System::Int32 FC73008F52DC56EC; // 0x24
	::System::Int32 BC3C3441E5E7B864; // 0x28
	::System::Single FAA67964D7833A34; // 0x2C
	::System::Action_2<::System::Int32, ::System::Int32>* A6398D0B226DE3F7; // 0x30
	::System::Action* F9282BFF7DE75802; // 0x38
	::System::Action* F66EB3F8BEFBEF8A; // 0x40
	::System::Action* AE5748B7957237BE; // 0x48
	::System::Boolean AB03F76C7C2CE0D4; // 0x50

	::System::Void EC22F59F2C588175(::System::Single EB5670302F34D4B7)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + F9F08C8A38C9E957_EC22F59F2C588175_OFFSET))(this, EB5670302F34D4B7);
	}

	::System::Void FCC7443573DD0222()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F9F08C8A38C9E957_FCC7443573DD0222_OFFSET))(this);
	}

	::System::Void FCEF2F02917C8BAE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F9F08C8A38C9E957_FCEF2F02917C8BAE_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F9F08C8A38C9E957__CTOR_OFFSET))(this);
	}

	::System::Void A1E97155B145443C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F9F08C8A38C9E957_A1E97155B145443C_OFFSET))(this);
	}
};
