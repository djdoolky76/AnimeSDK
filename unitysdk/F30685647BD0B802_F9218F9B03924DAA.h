#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/EF9914625B6F8A9E.h"

namespace System { class Object; }

#define F30685647BD0B802_F9218F9B03924DAA_INVOKE_OFFSET UNITYSDK_OFFSET(0x1FE7F90)
#define F30685647BD0B802_F9218F9B03924DAA__CTOR_OFFSET UNITYSDK_OFFSET(0x2284E60)

inline static constexpr unsigned int F30685647BD0B802_F9218F9B03924DAA_TypeDefinitionIndex = 11833;

class F30685647BD0B802_F9218F9B03924DAA : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + F30685647BD0B802_F9218F9B03924DAA__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Void Invoke(::System::Int32 B714679C324FF96E, ::Il2CppArray<::EF9914625B6F8A9E>* A32ED10FB0DD6D42)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::EF9914625B6F8A9E>*))((::PBYTE)hIl2Cpp + F30685647BD0B802_F9218F9B03924DAA_INVOKE_OFFSET))(this, B714679C324FF96E, A32ED10FB0DD6D42);
	}
};
