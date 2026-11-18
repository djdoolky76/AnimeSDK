#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define UNITYENGINE_STRINGIDWRAPPER_INTERNAL_CREATE_OFFSET UNITYSDK_OFFSET(0x2006F9C0)
#define UNITYENGINE_STRINGIDWRAPPER__CTOR_OFFSET UNITYSDK_OFFSET(0x9C4740)

namespace UnityEngine
{
	inline static constexpr unsigned int StringIDWrapper_TypeDefinitionIndex = 37948;

	struct alignas(4) StringIDWrapper
	{
		::System::UInt32 ID; // 0x10

		::System::Void _ctor(::System::String* InName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_STRINGIDWRAPPER__CTOR_OFFSET))(this, InName);
		}

		/*
		static ::System::Void Internal_Create(::System::String* InName, ::UnityEngine::StringIDWrapper& Wrapper)
		{
			return ((::System::Void(*)(::System::String*, ::UnityEngine::StringIDWrapper&))((::PBYTE)hIl2Cpp + UNITYENGINE_STRINGIDWRAPPER_INTERNAL_CREATE_OFFSET))(InName, Wrapper);
		}
		*/
	};
}
