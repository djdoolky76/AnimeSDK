#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/E987842ECE66EDDA.h"

namespace System { class String; }

#define UNITYENGINE_F3AF3A40D5C929B8__CTOR_OFFSET UNITYSDK_OFFSET(0x2759260)

namespace UnityEngine
{
	inline static constexpr unsigned int F3AF3A40D5C929B8_TypeDefinitionIndex = 17304;

	class F3AF3A40D5C929B8 : public ::UnityEngine::E987842ECE66EDDA
	{
	public:
		::System::String* AFA23A575BE488CA; // 0x10

		::System::Void _ctor(::System::String* BF35D9381545B37C)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_F3AF3A40D5C929B8__CTOR_OFFSET))(this, BF35D9381545B37C);
		}
	};
}
