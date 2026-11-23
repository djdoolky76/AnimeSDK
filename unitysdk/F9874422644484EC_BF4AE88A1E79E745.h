#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }
namespace System { class String; }

#define F9874422644484EC_BF4AE88A1E79E745_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CF4AC0)
#define F9874422644484EC_BF4AE88A1E79E745__CTOR_OFFSET UNITYSDK_OFFSET(0x22B96A0)

inline static constexpr unsigned int F9874422644484EC_BF4AE88A1E79E745_TypeDefinitionIndex = 15352;

class F9874422644484EC_BF4AE88A1E79E745 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + F9874422644484EC_BF4AE88A1E79E745__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Void Invoke(::System::String* A7714DE08D5D7E93)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + F9874422644484EC_BF4AE88A1E79E745_INVOKE_OFFSET))(this, A7714DE08D5D7E93);
	}
};
