#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define CNMJHHJGIAF_CTOR_OFFSET UNITYSDK_OFFSET(0xDA52AA0)

inline static constexpr unsigned int CNMJHHJGIAF_TypeDefinitionIndex = 47621;

	class CNMJHHJGIAF : public ::System::Object
	{
	public:
		::System::String* IPKCFNKIDMB; // 0x10
		::System::String* KBEPAIAFLHL; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNMJHHJGIAF_CTOR_OFFSET))(this);
		}

	};
