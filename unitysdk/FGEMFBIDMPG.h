#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
namespace System { class String; }

#define FGEMFBIDMPG_CTOR_OFFSET UNITYSDK_OFFSET(0x15759540)

inline static constexpr unsigned int FGEMFBIDMPG_TypeDefinitionIndex = 73660;

	class FGEMFBIDMPG : public ::System::Attribute
	{
	public:
		::System::String* AJEIIKMEIMF; // 0x10
		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FGEMFBIDMPG_CTOR_OFFSET))(this, a1);
		}

	};
