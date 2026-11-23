#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }
namespace System { class String; }

#define EED6B35843181046_F508A3F1658DB06F_INVOKE_OFFSET UNITYSDK_OFFSET(0x1FE7F90)
#define EED6B35843181046_F508A3F1658DB06F__CTOR_OFFSET UNITYSDK_OFFSET(0x29BD7B0)

inline static constexpr unsigned int EED6B35843181046_F508A3F1658DB06F_TypeDefinitionIndex = 11990;

class EED6B35843181046_F508A3F1658DB06F : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EED6B35843181046_F508A3F1658DB06F__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Void Invoke(::System::String* A288CB28FC2A6DA3, ::System::String* ACDE58E97E37D13C)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + EED6B35843181046_F508A3F1658DB06F_INVOKE_OFFSET))(this, A288CB28FC2A6DA3, ACDE58E97E37D13C);
	}
};
