#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AEKEIBNBMDJ;
namespace System { class Object; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define BJOKMIGAPGA_CTOR_OFFSET UNITYSDK_OFFSET(0xB7AABD0)
#define BJOKMIGAPGA_PKADDEPKJFN_OFFSET UNITYSDK_OFFSET(0xB7AAB70)

inline static constexpr unsigned int BJOKMIGAPGA_TypeDefinitionIndex = 49548;

	class BJOKMIGAPGA : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJOKMIGAPGA_CTOR_OFFSET))(this);
		}

		::System::Void PKADDEPKJFN(::UnityEngine::Rendering::CommandBuffer* a1, ::AEKEIBNBMDJ* a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::AEKEIBNBMDJ*, ::System::Object*))((::PBYTE)hIl2Cpp + BJOKMIGAPGA_PKADDEPKJFN_OFFSET))(this, a1, a2, a3);
		}

	};
