#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class F9874422644484EC_BA4936FCEAFCB5FD;
namespace System { class Object; }

#define F9874422644484EC_FB955E5591470456_INVOKE_OFFSET UNITYSDK_OFFSET(0x1FE7F90)
#define F9874422644484EC_FB955E5591470456__CTOR_OFFSET UNITYSDK_OFFSET(0x20F9A50)

inline static constexpr unsigned int F9874422644484EC_FB955E5591470456_TypeDefinitionIndex = 15343;

class F9874422644484EC_FB955E5591470456 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + F9874422644484EC_FB955E5591470456__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Void Invoke(::System::Boolean B75915AECF63B300, ::F9874422644484EC_BA4936FCEAFCB5FD* BB256CB098E6DDEC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::F9874422644484EC_BA4936FCEAFCB5FD*))((::PBYTE)hIl2Cpp + F9874422644484EC_FB955E5591470456_INVOKE_OFFSET))(this, B75915AECF63B300, BB256CB098E6DDEC);
	}
};
