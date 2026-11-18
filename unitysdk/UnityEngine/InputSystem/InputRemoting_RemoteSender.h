#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/InputSystem/Utilities/InternedString.h"

namespace System { class Object; }

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputRemoting_RemoteSender_TypeDefinitionIndex = 31714;

	struct alignas(8) InputRemoting_RemoteSender
	{
		::System::Int32 senderId; // 0x10
		::System::Byte _padding0[0x4];
		::Il2CppArray<::UnityEngine::InputSystem::Utilities::InternedString>* layouts; // 0x18
		::Il2CppArray<::System::Object*>* devices; // 0x20
	};
}
