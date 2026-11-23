#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace ABC::CustomRenderPipeline { class WindField; }
namespace System { class Object; }

#define E07BC0D8ADF98E7E_E3FE15C0FC755BBF_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CF4AC0)
#define E07BC0D8ADF98E7E_E3FE15C0FC755BBF__CTOR_OFFSET UNITYSDK_OFFSET(0x27E21E0)

inline static constexpr unsigned int E07BC0D8ADF98E7E_E3FE15C0FC755BBF_TypeDefinitionIndex = 16699;

class E07BC0D8ADF98E7E_E3FE15C0FC755BBF : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + E07BC0D8ADF98E7E_E3FE15C0FC755BBF__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Void Invoke(::ABC::CustomRenderPipeline::WindField* BD6B41F9AE7589F3)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::CustomRenderPipeline::WindField*))((::PBYTE)hIl2Cpp + E07BC0D8ADF98E7E_E3FE15C0FC755BBF_INVOKE_OFFSET))(this, BD6B41F9AE7589F3);
	}
};
