#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define MDDJNELCOMK_CTOR_OFFSET UNITYSDK_OFFSET(0xB898FB0)

inline static constexpr unsigned int MDDJNELCOMK_TypeDefinitionIndex = 55540;

	class MDDJNELCOMK : public ::System::Object
	{
	public:
		::System::String* IPKCFNKIDMB; // 0x10
		::System::String* KBEPAIAFLHL; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDDJNELCOMK_CTOR_OFFSET))(this);
		}

	};
