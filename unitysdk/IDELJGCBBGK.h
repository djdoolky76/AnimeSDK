#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define IDELJGCBBGK_CTOR_OFFSET UNITYSDK_OFFSET(0x15EC4570)
#define IDELJGCBBGK_GET_ISDISPLAYONLY_OFFSET UNITYSDK_OFFSET(0x15EC4550)
#define IDELJGCBBGK_SET_ISDISPLAYONLY_OFFSET UNITYSDK_OFFSET(0x15EC4560)

inline static constexpr unsigned int IDELJGCBBGK_TypeDefinitionIndex = 51919;

	class IDELJGCBBGK : public ::System::Object
	{
	public:
		::System::Boolean _IsDisplayOnly_k__BackingField; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDELJGCBBGK_CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsDisplayOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IDELJGCBBGK_GET_ISDISPLAYONLY_OFFSET))(this);
		}

		::System::Void set_IsDisplayOnly(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IDELJGCBBGK_SET_ISDISPLAYONLY_OFFSET))(this, a1);
		}

	};
