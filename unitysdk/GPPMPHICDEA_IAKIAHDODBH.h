#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class String; }

#define GPPMPHICDEA_IAKIAHDODBH_CHGNAINMKFM_OFFSET UNITYSDK_OFFSET(0x15D91BB0)
#define GPPMPHICDEA_IAKIAHDODBH__CTOR_OFFSET UNITYSDK_OFFSET(0x15D91BA0)

inline static constexpr unsigned int GPPMPHICDEA_IAKIAHDODBH_TypeDefinitionIndex = 42682;

class GPPMPHICDEA_IAKIAHDODBH : public ::System::Object
{
public:
	::System::String* IJDAJMEOFJA; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPPMPHICDEA_IAKIAHDODBH__CTOR_OFFSET))(this);
	}

	::System::Void CHGNAINMKFM(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + GPPMPHICDEA_IAKIAHDODBH_CHGNAINMKFM_OFFSET))(this, BHDNBGLCNOM);
	}
};
