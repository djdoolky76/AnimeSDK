#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define UNITYENGINE_A0AA782C4FF26AD2_B0B711293A00D659__CTOR_OFFSET UNITYSDK_OFFSET(0x410CBA0)

namespace UnityEngine
{
	inline static constexpr unsigned int A0AA782C4FF26AD2_B0B711293A00D659_TypeDefinitionIndex = 16999;

	class A0AA782C4FF26AD2_B0B711293A00D659 : public ::System::Object
	{
	public:
		::Il2CppArray<::System::String*>* F6A573CF3263E36B; // 0x10
		::System::Boolean A86B16B227AFC5B4; // 0x18

		::System::Void _ctor(::System::String* A16A4F19B08E04BF)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_A0AA782C4FF26AD2_B0B711293A00D659__CTOR_OFFSET))(this, A16A4F19B08E04BF);
		}
	};
}
