#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BPHGNMNLLHF;
namespace System { class String; }

#define DMNLFMHBHAE__CTOR_OFFSET UNITYSDK_OFFSET(0x16978DB0)

inline static constexpr unsigned int DMNLFMHBHAE_TypeDefinitionIndex = 39714;

class DMNLFMHBHAE : public ::System::Object
{
public:
	::BPHGNMNLLHF* BDHOILPIGKB; // 0x10
	::System::String* PDMDAGGIDON; // 0x18
	::System::String* KPCIADBLCEL; // 0x20
	::System::Boolean FIPHFGHNNBE; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMNLFMHBHAE__CTOR_OFFSET))(this);
	}
};
