#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/F9B785E1140FD828.h"

namespace System { class String; }
namespace System { class Type; }

#define UNITYENGINE_E4B0C95703CCE89F__CTOR_OFFSET UNITYSDK_OFFSET(0x16591D0)

namespace UnityEngine
{
	inline static constexpr unsigned int E4B0C95703CCE89F_TypeDefinitionIndex = 17228;

	class E4B0C95703CCE89F : public ::UnityEngine::F9B785E1140FD828
	{
	public:
		::System::String* F4023882DA698C8F; // 0x20
		::System::Type* FB5BE30AB5E0DCBB; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_E4B0C95703CCE89F__CTOR_OFFSET))(this);
		}
	};
}
