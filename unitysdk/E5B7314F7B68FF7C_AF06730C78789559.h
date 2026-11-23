#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }

#define E5B7314F7B68FF7C_AF06730C78789559_INVOKE_OFFSET UNITYSDK_OFFSET(0x1F7B8B0)
#define E5B7314F7B68FF7C_AF06730C78789559__CTOR_OFFSET UNITYSDK_OFFSET(0x1F7B8D0)

inline static constexpr unsigned int E5B7314F7B68FF7C_AF06730C78789559_TypeDefinitionIndex = 12830;

class E5B7314F7B68FF7C_AF06730C78789559 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + E5B7314F7B68FF7C_AF06730C78789559__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Void Invoke(::System::String* F2A9EC2723D2E694, ::System::Action_3<::System::Int32, ::System::String*, ::System::String*>* E04D2BE64FCE9814, ::System::String* F937AFADF857C1DB)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_3<::System::Int32, ::System::String*, ::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + E5B7314F7B68FF7C_AF06730C78789559_INVOKE_OFFSET))(this, F2A9EC2723D2E694, E04D2BE64FCE9814, F937AFADF857C1DB);
	}
};
