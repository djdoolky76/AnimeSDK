#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/KibanaLogLevel.h"
#include "unitysdk/System/MulticastDelegate.h"

class F00D975466190277;
namespace System { class Object; }
namespace System { class String; }

#define E5B7314F7B68FF7C_F079F84D92EAE8B0_INVOKE_OFFSET UNITYSDK_OFFSET(0x1F7B8B0)
#define E5B7314F7B68FF7C_F079F84D92EAE8B0__CTOR_OFFSET UNITYSDK_OFFSET(0x2EEF610)

inline static constexpr unsigned int E5B7314F7B68FF7C_F079F84D92EAE8B0_TypeDefinitionIndex = 12834;

class E5B7314F7B68FF7C_F079F84D92EAE8B0 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + E5B7314F7B68FF7C_F079F84D92EAE8B0__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Void Invoke(::MiHoYo::SDK::KibanaLogLevel F3851C787B08F75B, ::System::String* A5C299C395D3E1B2, ::F00D975466190277* AEA717119D013F50)
	{
		return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::KibanaLogLevel, ::System::String*, ::F00D975466190277*))((::PBYTE)hIl2Cpp + E5B7314F7B68FF7C_F079F84D92EAE8B0_INVOKE_OFFSET))(this, F3851C787B08F75B, A5C299C395D3E1B2, AEA717119D013F50);
	}
};
