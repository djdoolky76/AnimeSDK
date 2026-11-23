#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }

#define F9874422644484EC_A4BB00D6A9FBAF48_INVOKE_OFFSET UNITYSDK_OFFSET(0x1F7B8B0)
#define F9874422644484EC_A4BB00D6A9FBAF48__CTOR_OFFSET UNITYSDK_OFFSET(0x2936C90)

inline static constexpr unsigned int F9874422644484EC_A4BB00D6A9FBAF48_TypeDefinitionIndex = 15344;

class F9874422644484EC_A4BB00D6A9FBAF48 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + F9874422644484EC_A4BB00D6A9FBAF48__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Void Invoke(::System::Int32 A3BDDE9D1F2C8C6A, ::Il2CppArray<::System::Byte>* E83E519C5C42896F, ::System::UInt32 A96B867D8BBB8B00)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::Byte>*, ::System::UInt32))((::PBYTE)hIl2Cpp + F9874422644484EC_A4BB00D6A9FBAF48_INVOKE_OFFSET))(this, A3BDDE9D1F2C8C6A, E83E519C5C42896F, A96B867D8BBB8B00);
	}
};
