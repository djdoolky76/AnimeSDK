#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Rigidbody; }

#define NLJPKPAIILH_CTOR_OFFSET UNITYSDK_OFFSET(0x1C96FFF0)

inline static constexpr unsigned int NLJPKPAIILH_TypeDefinitionIndex = 42901;

	class NLJPKPAIILH : public ::System::Object
	{
	public:
		::UnityEngine::Rigidbody* LIPAHKEIFOM; // 0x10
		::UnityEngine::Collider* FBPGNCCDEGP; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLJPKPAIILH_CTOR_OFFSET))(this);
		}

	};
