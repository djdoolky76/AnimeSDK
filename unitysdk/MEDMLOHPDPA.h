#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AEKEIBNBMDJ;
namespace System { class Object; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define MEDMLOHPDPA_CTOR_OFFSET UNITYSDK_OFFSET(0xB8B6DB0)
#define MEDMLOHPDPA_PKADDEPKJFN_OFFSET UNITYSDK_OFFSET(0xB8B6D50)

inline static constexpr unsigned int MEDMLOHPDPA_TypeDefinitionIndex = 49549;

	class MEDMLOHPDPA : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEDMLOHPDPA_CTOR_OFFSET))(this);
		}

		::System::Void PKADDEPKJFN(::UnityEngine::Rendering::CommandBuffer* a1, ::AEKEIBNBMDJ* a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::AEKEIBNBMDJ*, ::System::Object*))((::PBYTE)hIl2Cpp + MEDMLOHPDPA_PKADDEPKJFN_OFFSET))(this, a1, a2, a3);
		}

	};
