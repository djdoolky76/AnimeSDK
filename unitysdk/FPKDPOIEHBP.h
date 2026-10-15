#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
namespace System { class String; }

#define FPKDPOIEHBP_CTOR_OFFSET UNITYSDK_OFFSET(0x1CE1AD40)

inline static constexpr unsigned int FPKDPOIEHBP_TypeDefinitionIndex = 25025;

	class FPKDPOIEHBP : public ::System::Attribute
	{
	public:
		::System::String* KGOOAOJLLDA; // 0x10
		::System::String* GMCBNNKJAGJ; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPKDPOIEHBP_CTOR_OFFSET))(this);
		}

	};
