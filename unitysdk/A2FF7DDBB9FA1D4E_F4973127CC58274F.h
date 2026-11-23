#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class A2FF7DDBB9FA1D4E_A4716A6823B5DE54;
namespace System { class Object; }
namespace System { class String; }

#define A2FF7DDBB9FA1D4E_F4973127CC58274F_INVOKE_OFFSET UNITYSDK_OFFSET(0x1FE7F90)
#define A2FF7DDBB9FA1D4E_F4973127CC58274F__CTOR_OFFSET UNITYSDK_OFFSET(0x29BD7B0)

inline static constexpr unsigned int A2FF7DDBB9FA1D4E_F4973127CC58274F_TypeDefinitionIndex = 12614;

class A2FF7DDBB9FA1D4E_F4973127CC58274F : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + A2FF7DDBB9FA1D4E_F4973127CC58274F__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Void Invoke(::System::String* BC39742B384E6AC5, ::A2FF7DDBB9FA1D4E_A4716A6823B5DE54* E04D2BE64FCE9814)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::A2FF7DDBB9FA1D4E_A4716A6823B5DE54*))((::PBYTE)hIl2Cpp + A2FF7DDBB9FA1D4E_F4973127CC58274F_INVOKE_OFFSET))(this, BC39742B384E6AC5, E04D2BE64FCE9814);
	}
};
