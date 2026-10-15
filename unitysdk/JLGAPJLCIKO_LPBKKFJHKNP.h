#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define JLGAPJLCIKO_LPBKKFJHKNP_CTOR_OFFSET UNITYSDK_OFFSET(0x117A0)

inline static constexpr unsigned int JLGAPJLCIKO_LPBKKFJHKNP_TypeDefinitionIndex = 70681;

	struct alignas(4) JLGAPJLCIKO_LPBKKFJHKNP
	{
		::System::Int32 HBBBLAMDEFF; // 0x10
		::UnityEngine::Vector3 NPHAFNPMMDF; // 0x14
		::UnityEngine::Vector2 HMAGPLNGNMP; // 0x20
		::UnityEngine::Vector3 NDFPBNPAHNA; // 0x28
		::System::Int32 DDKMLPAPLPE; // 0x34
		::System::Void _ctor(::System::Int32 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector2 a3, ::UnityEngine::Vector3 a4, ::System::Int32 a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3, ::UnityEngine::Vector2, ::UnityEngine::Vector3, ::System::Int32))((::PBYTE)hIl2Cpp + JLGAPJLCIKO_LPBKKFJHKNP_CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

	};
