#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/RuntimeTypeHandle.h"
namespace System { class String; }

#define ENTITAS_CONTEXTINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x20850EE0)

namespace Entitas
{
	inline static constexpr unsigned int ContextInfo_TypeDefinitionIndex = 10009;

	class ContextInfo : public ::System::Object
	{
	public:
		::System::String* name; // 0x10
		::Il2CppArray<::System::RuntimeTypeHandle>* componentTypes; // 0x18
		::Il2CppArray<::System::String*>* componentNames; // 0x20
		::System::Void _ctor(::System::String* a1, ::Il2CppArray<::System::String*>* a2, ::Il2CppArray<::System::RuntimeTypeHandle>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::String*>*, ::Il2CppArray<::System::RuntimeTypeHandle>*))((::PBYTE)hIl2Cpp + ENTITAS_CONTEXTINFO_CTOR_OFFSET))(this, a1, a2, a3);
		}

	};
}
