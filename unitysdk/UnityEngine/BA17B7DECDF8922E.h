#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class AC692A33565A5498; }

#define UNITYENGINE_BA17B7DECDF8922E_B5374EFF9F74D3BD_OFFSET UNITYSDK_OFFSET(0x4195190)
#define UNITYENGINE_BA17B7DECDF8922E_BCCD69AEC7069AD0_OFFSET UNITYSDK_OFFSET(0x4195230)
#define UNITYENGINE_BA17B7DECDF8922E__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace UnityEngine
{
	inline static constexpr unsigned int BA17B7DECDF8922E_TypeDefinitionIndex = 20110;

	class BA17B7DECDF8922E : public ::System::Object
	{
	public:
		static ::UnityEngine::AC692A33565A5498* BCCD69AEC7069AD0(::System::Single F5EF7E29767E03BF)
		{
			return ((::UnityEngine::AC692A33565A5498*(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_BA17B7DECDF8922E_BCCD69AEC7069AD0_OFFSET))(F5EF7E29767E03BF);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BA17B7DECDF8922E__CTOR_OFFSET))(this);
		}

		static ::UnityEngine::AC692A33565A5498* B5374EFF9F74D3BD(::System::Single F0961C93719F7B0D)
		{
			return ((::UnityEngine::AC692A33565A5498*(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_BA17B7DECDF8922E_B5374EFF9F74D3BD_OFFSET))(F0961C93719F7B0D);
		}
	};
}
