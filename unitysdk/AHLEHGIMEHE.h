#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"
namespace System { class Exception; }
namespace System { class String; }
namespace System::Reflection { class MemberInfo; }

#define AHLEHGIMEHE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EC34E50)
#define AHLEHGIMEHE_CTOR_OFFSET UNITYSDK_OFFSET(0x1EC34E20)

inline static constexpr unsigned int AHLEHGIMEHE_TypeDefinitionIndex = 44302;

	class AHLEHGIMEHE : public ::System::Exception
	{
	public:
		::System::Reflection::MemberInfo* BOODBKJFCAG; // 0x88
		::System::Void _ctor(::System::Reflection::MemberInfo* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::MemberInfo*, ::System::String*))((::PBYTE)hIl2Cpp + AHLEHGIMEHE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::System::Reflection::MemberInfo* a1, ::System::String* a2, ::System::Exception* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::MemberInfo*, ::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + AHLEHGIMEHE_CTOR_1_OFFSET))(this, a1, a2, a3);
		}

	};
