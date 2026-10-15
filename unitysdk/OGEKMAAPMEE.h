#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AEKEIBNBMDJ;
namespace System { class Object; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define OGEKMAAPMEE_CTOR_OFFSET UNITYSDK_OFFSET(0xBE4FBE0)
#define OGEKMAAPMEE_PKADDEPKJFN_OFFSET UNITYSDK_OFFSET(0xBE4FB80)

inline static constexpr unsigned int OGEKMAAPMEE_TypeDefinitionIndex = 49547;

	class OGEKMAAPMEE : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGEKMAAPMEE_CTOR_OFFSET))(this);
		}

		::System::Void PKADDEPKJFN(::UnityEngine::Rendering::CommandBuffer* a1, ::AEKEIBNBMDJ* a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::AEKEIBNBMDJ*, ::System::Object*))((::PBYTE)hIl2Cpp + OGEKMAAPMEE_PKADDEPKJFN_OFFSET))(this, a1, a2, a3);
		}

	};
