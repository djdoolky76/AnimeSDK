#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace UnityEngine { class Transform; }

#define DJECDMCCEBM_CTOR_OFFSET UNITYSDK_OFFSET(0xFFAFA30)
#define DJECDMCCEBM_GKCBKLLPLMO_OFFSET UNITYSDK_OFFSET(0xFFAF9E0)

inline static constexpr unsigned int DJECDMCCEBM_TypeDefinitionIndex = 65946;

	class DJECDMCCEBM : public ::System::Object
	{
	public:
		::UnityEngine::Transform* BKLBJFJHOLF; // 0x10
		::System::UInt32 JCMHOLDHPPH; // 0x18
		::System::Void _ctor(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + DJECDMCCEBM_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean GKCBKLLPLMO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DJECDMCCEBM_GKCBKLLPLMO_OFFSET))(this);
		}

	};
