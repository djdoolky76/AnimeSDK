#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLPCAFJKOBK_CTOR_OFFSET UNITYSDK_OFFSET(0xE361400)
#define CLPCAFJKOBK_INTERP_OFFSET UNITYSDK_OFFSET(0xE361480)

inline static constexpr unsigned int CLPCAFJKOBK_TypeDefinitionIndex = 76164;

	class CLPCAFJKOBK
	{
	public:
		::System::Void _ctor(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLPCAFJKOBK_CTOR_OFFSET))(this, a1);
		}

		::System::Void Interp(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLPCAFJKOBK_INTERP_OFFSET))(this, a1, a2, a3);
		}

	};
