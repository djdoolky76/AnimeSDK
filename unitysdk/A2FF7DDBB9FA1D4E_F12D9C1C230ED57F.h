#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define A2FF7DDBB9FA1D4E_F12D9C1C230ED57F_INVOKE_OFFSET UNITYSDK_OFFSET(0x1FE7F90)
#define A2FF7DDBB9FA1D4E_F12D9C1C230ED57F__CTOR_OFFSET UNITYSDK_OFFSET(0x29BD7B0)

inline static constexpr unsigned int A2FF7DDBB9FA1D4E_F12D9C1C230ED57F_TypeDefinitionIndex = 12636;

class A2FF7DDBB9FA1D4E_F12D9C1C230ED57F : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + A2FF7DDBB9FA1D4E_F12D9C1C230ED57F__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Void Invoke(::System::String* A288CB28FC2A6DA3, ::System::Action_1<::System::String*>* E04D2BE64FCE9814)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + A2FF7DDBB9FA1D4E_F12D9C1C230ED57F_INVOKE_OFFSET))(this, A288CB28FC2A6DA3, E04D2BE64FCE9814);
	}
};
