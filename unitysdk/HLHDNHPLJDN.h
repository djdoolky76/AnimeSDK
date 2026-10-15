#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
namespace System { class String; }

#define HLHDNHPLJDN_CTOR_OFFSET UNITYSDK_OFFSET(0x15D5FAE0)

inline static constexpr unsigned int HLHDNHPLJDN_TypeDefinitionIndex = 72102;

	class HLHDNHPLJDN : public ::System::Attribute
	{
	public:
		::System::String* AOHMIJNCCLI; // 0x10
		::System::String* BDACPPLKLGL; // 0x18
		::System::Boolean GGCOENFCMOF; // 0x20
		::System::Void _ctor(::System::String* a1, ::System::String* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + HLHDNHPLJDN_CTOR_OFFSET))(this, a1, a2, a3);
		}

	};
