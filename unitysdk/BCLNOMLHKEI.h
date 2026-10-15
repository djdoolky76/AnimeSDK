#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define BCLNOMLHKEI_CTOR_OFFSET UNITYSDK_OFFSET(0x162E3C60)

inline static constexpr unsigned int BCLNOMLHKEI_TypeDefinitionIndex = 56441;

	class BCLNOMLHKEI : public ::System::Object
	{
	public:
		::System::String* IPKCFNKIDMB; // 0x10
		::System::String* KBEPAIAFLHL; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCLNOMLHKEI_CTOR_OFFSET))(this);
		}

	};
