#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }
namespace System { class String; }

#define FBE287C479293F16_EB1A5B1401D0D1E5_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CF4AC0)
#define FBE287C479293F16_EB1A5B1401D0D1E5__CTOR_OFFSET UNITYSDK_OFFSET(0x22B96A0)

inline static constexpr unsigned int FBE287C479293F16_EB1A5B1401D0D1E5_TypeDefinitionIndex = 19749;

class FBE287C479293F16_EB1A5B1401D0D1E5 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + FBE287C479293F16_EB1A5B1401D0D1E5__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Void Invoke(::System::String*& BFE2A41533DE34F1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*&))((::PBYTE)hIl2Cpp + FBE287C479293F16_EB1A5B1401D0D1E5_INVOKE_OFFSET))(this, BFE2A41533DE34F1);
	}
};
