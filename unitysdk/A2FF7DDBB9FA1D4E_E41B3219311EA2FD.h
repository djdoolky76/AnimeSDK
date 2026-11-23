#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class A2FF7DDBB9FA1D4E_F9218F9B03924DAA;
namespace System { class Object; }
namespace System { class String; }

#define A2FF7DDBB9FA1D4E_E41B3219311EA2FD_INVOKE_OFFSET UNITYSDK_OFFSET(0x1FE7F90)
#define A2FF7DDBB9FA1D4E_E41B3219311EA2FD__CTOR_OFFSET UNITYSDK_OFFSET(0x29BD7B0)

inline static constexpr unsigned int A2FF7DDBB9FA1D4E_E41B3219311EA2FD_TypeDefinitionIndex = 12624;

class A2FF7DDBB9FA1D4E_E41B3219311EA2FD : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + A2FF7DDBB9FA1D4E_E41B3219311EA2FD__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Void Invoke(::Il2CppArray<::System::String*>* F3CC9513E519B712, ::A2FF7DDBB9FA1D4E_F9218F9B03924DAA* E04D2BE64FCE9814)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::A2FF7DDBB9FA1D4E_F9218F9B03924DAA*))((::PBYTE)hIl2Cpp + A2FF7DDBB9FA1D4E_E41B3219311EA2FD_INVOKE_OFFSET))(this, F3CC9513E519B712, E04D2BE64FCE9814);
	}
};
