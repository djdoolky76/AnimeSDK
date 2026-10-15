#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define HLMMGFKEMIN_CTOR_OFFSET UNITYSDK_OFFSET(0x1CAECF00)

inline static constexpr unsigned int HLMMGFKEMIN_TypeDefinitionIndex = 42151;

	class HLMMGFKEMIN : public ::System::Object
	{
	public:
		::System::String* GMDBHJKEAEI; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLMMGFKEMIN_CTOR_OFFSET))(this);
		}

	};
