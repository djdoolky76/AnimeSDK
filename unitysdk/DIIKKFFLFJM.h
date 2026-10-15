#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
namespace System { class Type; }

#define DIIKKFFLFJM_CTOR_OFFSET UNITYSDK_OFFSET(0xF205AA0)

inline static constexpr unsigned int DIIKKFFLFJM_TypeDefinitionIndex = 57582;

	class DIIKKFFLFJM : public ::System::Attribute
	{
	public:
		::System::Void _ctor(::System::Type* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + DIIKKFFLFJM_CTOR_OFFSET))(this, a1);
		}

	};
