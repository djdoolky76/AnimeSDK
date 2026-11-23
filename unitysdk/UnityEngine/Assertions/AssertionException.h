#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"

namespace System { class String; }

#define UNITYENGINE_ASSERTIONS_ASSERTIONEXCEPTION_GET_MESSAGE_OFFSET UNITYSDK_OFFSET(0x4124FB0)
#define UNITYENGINE_ASSERTIONS_ASSERTIONEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x4124F30)

namespace UnityEngine::Assertions
{
	inline static constexpr unsigned int AssertionException_TypeDefinitionIndex = 17279;

	class AssertionException : public ::System::Exception
	{
	public:
		::System::String* m_UserMessage; // 0x90

		::System::Void _ctor(::System::String* B083BE7841B347C4, ::System::String* B6A68089052E3785)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSERTIONS_ASSERTIONEXCEPTION__CTOR_OFFSET))(this, B083BE7841B347C4, B6A68089052E3785);
		}

		::System::String* get_Message()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSERTIONS_ASSERTIONEXCEPTION_GET_MESSAGE_OFFSET))(this);
		}
	};
}
