#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }
namespace System { class String; }

#define F9874422644484EC_E9C31D2F85DA4238_FA500B6415B441AC_INVOKE_OFFSET UNITYSDK_OFFSET(0x1F7B8B0)
#define F9874422644484EC_E9C31D2F85DA4238_FA500B6415B441AC__CTOR_OFFSET UNITYSDK_OFFSET(0x2936D40)

inline static constexpr unsigned int F9874422644484EC_E9C31D2F85DA4238_FA500B6415B441AC_TypeDefinitionIndex = 15327;

class F9874422644484EC_E9C31D2F85DA4238_FA500B6415B441AC : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + F9874422644484EC_E9C31D2F85DA4238_FA500B6415B441AC__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Void Invoke(::System::Boolean B75915AECF63B300, ::Il2CppArray<::System::Byte>* E83E519C5C42896F, ::System::String* E64052930079A4EB)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Il2CppArray<::System::Byte>*, ::System::String*))((::PBYTE)hIl2Cpp + F9874422644484EC_E9C31D2F85DA4238_FA500B6415B441AC_INVOKE_OFFSET))(this, B75915AECF63B300, E83E519C5C42896F, E64052930079A4EB);
	}
};
