#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define FKCLJCIKDJE_CTOR_OFFSET UNITYSDK_OFFSET(0x1EBDAA80)
#define FKCLJCIKDJE_SET_OFFSET UNITYSDK_OFFSET(0x1EBDAA30)

inline static constexpr unsigned int FKCLJCIKDJE_TypeDefinitionIndex = 35216;

	class FKCLJCIKDJE : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKCLJCIKDJE_CTOR_OFFSET))(this);
		}

		::System::Void Set(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FKCLJCIKDJE_SET_OFFSET))(this, a1);
		}

	};
