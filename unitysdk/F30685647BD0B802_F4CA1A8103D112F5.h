#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class F30685647BD0B802_A04B98F98CC9A607;
namespace System { class Object; }
namespace System { class String; }

#define F30685647BD0B802_F4CA1A8103D112F5_INVOKE_OFFSET UNITYSDK_OFFSET(0x29E6270)
#define F30685647BD0B802_F4CA1A8103D112F5__CTOR_OFFSET UNITYSDK_OFFSET(0x38F3CA0)

inline static constexpr unsigned int F30685647BD0B802_F4CA1A8103D112F5_TypeDefinitionIndex = 11852;

class F30685647BD0B802_F4CA1A8103D112F5 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + F30685647BD0B802_F4CA1A8103D112F5__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Void Invoke(::System::String* B8665B5168DB5A1C, ::System::Boolean F55C11413280FD99, ::System::String* B96568F0005B4255, ::System::String* A82F72570D9C70C2, ::System::UInt64 FDD1F7DFC12B19CA, ::F30685647BD0B802_A04B98F98CC9A607* E04D2BE64FCE9814)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::String*, ::System::String*, ::System::UInt64, ::F30685647BD0B802_A04B98F98CC9A607*))((::PBYTE)hIl2Cpp + F30685647BD0B802_F4CA1A8103D112F5_INVOKE_OFFSET))(this, B8665B5168DB5A1C, F55C11413280FD99, B96568F0005B4255, A82F72570D9C70C2, FDD1F7DFC12B19CA, E04D2BE64FCE9814);
	}
};
