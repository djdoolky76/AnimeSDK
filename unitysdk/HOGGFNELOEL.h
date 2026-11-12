#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define HOGGFNELOEL_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6B41D0)
#define HOGGFNELOEL_OGFHOGEFBJF_OFFSET UNITYSDK_OFFSET(0x1D6B4090)

inline static constexpr unsigned int HOGGFNELOEL_TypeDefinitionIndex = 42582;

	class HOGGFNELOEL : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOGGFNELOEL_CTOR_OFFSET))(this);
		}

		::System::String* OGFHOGEFBJF(::System::Int32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HOGGFNELOEL_OGFHOGEFBJF_OFFSET))(this, a1);
		}

	};
