#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define OOHIKDKFGFF_CTOR_OFFSET UNITYSDK_OFFSET(0xBF848C0)

inline static constexpr unsigned int OOHIKDKFGFF_TypeDefinitionIndex = 48934;

	class OOHIKDKFGFF : public ::System::Object
	{
	public:
		::System::String* Additional; // 0x10
		::System::String* Theme; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOHIKDKFGFF_CTOR_OFFSET))(this);
		}

	};
