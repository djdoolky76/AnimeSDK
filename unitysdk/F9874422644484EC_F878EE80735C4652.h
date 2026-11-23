#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class F9874422644484EC_BA4936FCEAFCB5FD;
namespace System { class Object; }

#define F9874422644484EC_F878EE80735C4652_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CF4AC0)
#define F9874422644484EC_F878EE80735C4652__CTOR_OFFSET UNITYSDK_OFFSET(0x1FE7D60)

inline static constexpr unsigned int F9874422644484EC_F878EE80735C4652_TypeDefinitionIndex = 15342;

class F9874422644484EC_F878EE80735C4652 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + F9874422644484EC_F878EE80735C4652__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Void Invoke(::F9874422644484EC_BA4936FCEAFCB5FD* BB256CB098E6DDEC)
	{
		return ((::System::Void(*)(::PVOID, ::F9874422644484EC_BA4936FCEAFCB5FD*))((::PBYTE)hIl2Cpp + F9874422644484EC_F878EE80735C4652_INVOKE_OFFSET))(this, BB256CB098E6DDEC);
	}
};
