#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define E9E81D8677537399_MARKETINGPROTOCOLMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int E9E81D8677537399_MarketingProtocolModel_TypeDefinitionIndex = 11863;

class E9E81D8677537399_MarketingProtocolModel : public ::System::Object
{
public:
	::System::UInt32 agreement_id; // 0x10
	::System::Int32 agreement_version; // 0x14
	::System::String* content_url; // 0x18
	::System::String* show_dialog_reason; // 0x20
	::System::String* title; // 0x28
	::System::String* user_status; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E9E81D8677537399_MARKETINGPROTOCOLMODEL__CTOR_OFFSET))(this);
	}
};
