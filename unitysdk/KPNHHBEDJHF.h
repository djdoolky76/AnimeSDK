#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define KPNHHBEDJHF_CTOR_OFFSET UNITYSDK_OFFSET(0xB5CDC90)

inline static constexpr unsigned int KPNHHBEDJHF_TypeDefinitionIndex = 47618;

	class KPNHHBEDJHF : public ::System::Object
	{
	public:
		::System::String* KBEPAIAFLHL; // 0x10
		::System::String* IPKCFNKIDMB; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPNHHBEDJHF_CTOR_OFFSET))(this);
		}

	};
