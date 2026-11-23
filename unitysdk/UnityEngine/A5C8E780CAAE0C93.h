#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }
namespace System { class Type; }

#define UNITYENGINE_A5C8E780CAAE0C93_AE6A5BA1D4E2F839_OFFSET UNITYSDK_OFFSET(0x4199720)

namespace UnityEngine
{
	inline static constexpr unsigned int A5C8E780CAAE0C93_TypeDefinitionIndex = 20118;

	class A5C8E780CAAE0C93 : public ::System::Attribute
	{
	public:
		::System::Int32 A69FBD28E278628C; // 0x10

		static ::System::Int32 AE6A5BA1D4E2F839(::System::Type* E638E67D3A0124A7, ::System::String* FC1D29B360A1527E)
		{
			return ((::System::Int32(*)(::System::Type*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_A5C8E780CAAE0C93_AE6A5BA1D4E2F839_OFFSET))(E638E67D3A0124A7, FC1D29B360A1527E);
		}
	};
}
