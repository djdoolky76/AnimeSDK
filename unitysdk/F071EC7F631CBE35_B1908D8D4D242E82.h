#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }

#define F071EC7F631CBE35_B1908D8D4D242E82_INVOKE_OFFSET UNITYSDK_OFFSET(0x1F7B8B0)
#define F071EC7F631CBE35_B1908D8D4D242E82__CTOR_OFFSET UNITYSDK_OFFSET(0x38A0940)

inline static constexpr unsigned int F071EC7F631CBE35_B1908D8D4D242E82_TypeDefinitionIndex = 20929;

class F071EC7F631CBE35_B1908D8D4D242E82 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + F071EC7F631CBE35_B1908D8D4D242E82__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Int32 Invoke(::Il2CppArray<::System::Byte>* AE40CAA6BBFEAD2C, ::System::Int32 BE9B161B3F3C2937, ::System::Int32 A96B867D8BBB8B00)
	{
		return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + F071EC7F631CBE35_B1908D8D4D242E82_INVOKE_OFFSET))(this, AE40CAA6BBFEAD2C, BE9B161B3F3C2937, A96B867D8BBB8B00);
	}
};
