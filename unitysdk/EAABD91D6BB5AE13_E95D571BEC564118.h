#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }
namespace System { class String; }

#define EAABD91D6BB5AE13_E95D571BEC564118_INVOKE_OFFSET UNITYSDK_OFFSET(0x1FE7C20)
#define EAABD91D6BB5AE13_E95D571BEC564118__CTOR_OFFSET UNITYSDK_OFFSET(0x3908DE0)

inline static constexpr unsigned int EAABD91D6BB5AE13_E95D571BEC564118_TypeDefinitionIndex = 12295;

class EAABD91D6BB5AE13_E95D571BEC564118 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EAABD91D6BB5AE13_E95D571BEC564118__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Void Invoke(::System::Boolean F5B0D16738F8E185, ::System::String* A6ADD22EB8542F2F, ::System::Int32 B28EEC98F0EE180E, ::System::Int32 F6AB295E0DF99635)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + EAABD91D6BB5AE13_E95D571BEC564118_INVOKE_OFFSET))(this, F5B0D16738F8E185, A6ADD22EB8542F2F, B28EEC98F0EE180E, F6AB295E0DF99635);
	}
};
