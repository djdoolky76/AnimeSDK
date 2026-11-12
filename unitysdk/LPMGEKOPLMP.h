#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AEKEIBNBMDJ;
namespace System { class Object; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define LPMGEKOPLMP_CTOR_OFFSET UNITYSDK_OFFSET(0xC085C60)
#define LPMGEKOPLMP_PKADDEPKJFN_OFFSET UNITYSDK_OFFSET(0xC085C00)

inline static constexpr unsigned int LPMGEKOPLMP_TypeDefinitionIndex = 50622;

	class LPMGEKOPLMP : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPMGEKOPLMP_CTOR_OFFSET))(this);
		}

		::System::Void PKADDEPKJFN(::UnityEngine::Rendering::CommandBuffer* a1, ::AEKEIBNBMDJ* a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::AEKEIBNBMDJ*, ::System::Object*))((::PBYTE)hIl2Cpp + LPMGEKOPLMP_PKADDEPKJFN_OFFSET))(this, a1, a2, a3);
		}

	};
