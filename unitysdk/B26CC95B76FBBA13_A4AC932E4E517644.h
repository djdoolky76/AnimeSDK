#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }

#define B26CC95B76FBBA13_A4AC932E4E517644_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CF4AC0)
#define B26CC95B76FBBA13_A4AC932E4E517644__CTOR_OFFSET UNITYSDK_OFFSET(0x2A95C40)

inline static constexpr unsigned int B26CC95B76FBBA13_A4AC932E4E517644_TypeDefinitionIndex = 19168;

class B26CC95B76FBBA13_A4AC932E4E517644 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + B26CC95B76FBBA13_A4AC932E4E517644__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::UInt64 Invoke(::System::IntPtr F5F0982D4A2BF539)
	{
		return ((::System::UInt64(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + B26CC95B76FBBA13_A4AC932E4E517644_INVOKE_OFFSET))(this, F5F0982D4A2BF539);
	}
};
