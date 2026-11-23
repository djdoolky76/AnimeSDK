#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }
namespace System { class String; }

#define EAABD91D6BB5AE13_EAB49044E6E975F9_INVOKE_OFFSET UNITYSDK_OFFSET(0x1F7B8B0)
#define EAABD91D6BB5AE13_EAB49044E6E975F9__CTOR_OFFSET UNITYSDK_OFFSET(0x3908670)

inline static constexpr unsigned int EAABD91D6BB5AE13_EAB49044E6E975F9_TypeDefinitionIndex = 12301;

class EAABD91D6BB5AE13_EAB49044E6E975F9 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EAABD91D6BB5AE13_EAB49044E6E975F9__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Void Invoke(::System::String* FE7614695D25B78A, ::System::Int32 E7B2D56979C20620, ::System::String* B960AC235824C6C8)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + EAABD91D6BB5AE13_EAB49044E6E975F9_INVOKE_OFFSET))(this, FE7614695D25B78A, E7B2D56979C20620, B960AC235824C6C8);
	}
};
