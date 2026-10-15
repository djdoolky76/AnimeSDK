#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MonoTODOAttribute_AA3A9161C5173D10.h"
namespace System { class String; }

#define SYSTEM_MONOLIMITATIONATTRIBUTE_4616CBFEE5F63A91_CTOR_OFFSET UNITYSDK_OFFSET(0x1EE36D60)

namespace System
{
	inline static constexpr unsigned int MonoLimitationAttribute_4616CBFEE5F63A91_TypeDefinitionIndex = 3098;

	class MonoLimitationAttribute_4616CBFEE5F63A91 : public ::System::MonoTODOAttribute_AA3A9161C5173D10
	{
	public:
		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_MONOLIMITATIONATTRIBUTE_4616CBFEE5F63A91_CTOR_OFFSET))(this, a1);
		}

	};
}
