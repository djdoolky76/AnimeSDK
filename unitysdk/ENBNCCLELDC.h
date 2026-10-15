#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
namespace System { class String; }

#define ENBNCCLELDC_CTOR_OFFSET UNITYSDK_OFFSET(0x1CDAA1C0)

inline static constexpr unsigned int ENBNCCLELDC_TypeDefinitionIndex = 24991;

	class ENBNCCLELDC : public ::System::Attribute
	{
	public:
		::System::String* DDMIAOHELDE; // 0x10
		::System::String* NGMIIDIIPNA; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENBNCCLELDC_CTOR_OFFSET))(this);
		}

	};
