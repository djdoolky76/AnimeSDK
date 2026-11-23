#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class F30685647BD0B802_F9218F9B03924DAA;
namespace System { class Object; }
namespace System { class String; }

#define F30685647BD0B802_E41B3219311EA2FD_INVOKE_OFFSET UNITYSDK_OFFSET(0x1FE7F90)
#define F30685647BD0B802_E41B3219311EA2FD__CTOR_OFFSET UNITYSDK_OFFSET(0x29BD7B0)

inline static constexpr unsigned int F30685647BD0B802_E41B3219311EA2FD_TypeDefinitionIndex = 11834;

class F30685647BD0B802_E41B3219311EA2FD : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + F30685647BD0B802_E41B3219311EA2FD__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Void Invoke(::Il2CppArray<::System::String*>* F3CC9513E519B712, ::F30685647BD0B802_F9218F9B03924DAA* E04D2BE64FCE9814)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::F30685647BD0B802_F9218F9B03924DAA*))((::PBYTE)hIl2Cpp + F30685647BD0B802_E41B3219311EA2FD_INVOKE_OFFSET))(this, F3CC9513E519B712, E04D2BE64FCE9814);
	}
};
