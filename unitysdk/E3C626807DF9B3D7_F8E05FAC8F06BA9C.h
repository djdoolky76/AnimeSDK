#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }
namespace System { class String; }

#define E3C626807DF9B3D7_F8E05FAC8F06BA9C_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CF4AC0)
#define E3C626807DF9B3D7_F8E05FAC8F06BA9C__CTOR_OFFSET UNITYSDK_OFFSET(0x22B96A0)

inline static constexpr unsigned int E3C626807DF9B3D7_F8E05FAC8F06BA9C_TypeDefinitionIndex = 15763;

class E3C626807DF9B3D7_F8E05FAC8F06BA9C : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + E3C626807DF9B3D7_F8E05FAC8F06BA9C__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Void Invoke(::System::String* B083BE7841B347C4)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + E3C626807DF9B3D7_F8E05FAC8F06BA9C_INVOKE_OFFSET))(this, B083BE7841B347C4);
	}
};
