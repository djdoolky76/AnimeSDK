#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define E862790A06128F6F_E4C73CEC88C82378__CTOR_OFFSET UNITYSDK_OFFSET(0x2759260)

namespace E862790A06128F6F
{
	inline static constexpr unsigned int E4C73CEC88C82378_TypeDefinitionIndex = 17057;

	class E4C73CEC88C82378 : public ::System::Attribute
	{
	public:
		::System::String* A3B8CA35D68A58CF; // 0x10

		::System::Void _ctor(::System::String* EB97CD3AFFF73C1C)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + E862790A06128F6F_E4C73CEC88C82378__CTOR_OFFSET))(this, EB97CD3AFFF73C1C);
		}
	};
}
