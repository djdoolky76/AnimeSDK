#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
namespace System { class Type; }

#define AOJGGMJAIPG_CTOR_OFFSET UNITYSDK_OFFSET(0x1CCBC560)

inline static constexpr unsigned int AOJGGMJAIPG_TypeDefinitionIndex = 24993;

	class AOJGGMJAIPG : public ::System::Attribute
	{
	public:
		::System::Type* EPGPJMHNBON; // 0x10
		::System::Void _ctor(::System::Type* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + AOJGGMJAIPG_CTOR_OFFSET))(this, a1);
		}

	};
