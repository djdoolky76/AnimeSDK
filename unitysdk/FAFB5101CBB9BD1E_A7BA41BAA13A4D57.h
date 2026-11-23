#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FAFB5101CBB9BD1E_A3E46275F3D45E11.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }
namespace System { class String; }

#define FAFB5101CBB9BD1E_A7BA41BAA13A4D57_INVOKE_OFFSET UNITYSDK_OFFSET(0x1FE7F90)
#define FAFB5101CBB9BD1E_A7BA41BAA13A4D57__CTOR_OFFSET UNITYSDK_OFFSET(0x2284E60)

inline static constexpr unsigned int FAFB5101CBB9BD1E_A7BA41BAA13A4D57_TypeDefinitionIndex = 20303;

class FAFB5101CBB9BD1E_A7BA41BAA13A4D57 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + FAFB5101CBB9BD1E_A7BA41BAA13A4D57__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Void Invoke(::FAFB5101CBB9BD1E_A3E46275F3D45E11 F3851C787B08F75B, ::System::String* B083BE7841B347C4)
	{
		return ((::System::Void(*)(::PVOID, ::FAFB5101CBB9BD1E_A3E46275F3D45E11, ::System::String*))((::PBYTE)hIl2Cpp + FAFB5101CBB9BD1E_A7BA41BAA13A4D57_INVOKE_OFFSET))(this, F3851C787B08F75B, B083BE7841B347C4);
	}
};
