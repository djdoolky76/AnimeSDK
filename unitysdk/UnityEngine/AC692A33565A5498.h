#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/AC692A33565A5498_Type.h"

#define UNITYENGINE_AC692A33565A5498__CTOR_OFFSET UNITYSDK_OFFSET(0x2D66A00)

namespace UnityEngine
{
	inline static constexpr unsigned int AC692A33565A5498_TypeDefinitionIndex = 20100;

	class AC692A33565A5498 : public ::System::Object
	{
	public:
		::UnityEngine::AC692A33565A5498_Type F90267B6A9827A79; // 0x10
		::System::Byte _padding0[0x4];
		::System::Object* F87AC9213B686801; // 0x18

		::System::Void _ctor(::UnityEngine::AC692A33565A5498_Type A288CB28FC2A6DA3, ::System::Object* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AC692A33565A5498_Type, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_AC692A33565A5498__CTOR_OFFSET))(this, A288CB28FC2A6DA3, E937D4885DAA1AE8);
		}
	};
}
