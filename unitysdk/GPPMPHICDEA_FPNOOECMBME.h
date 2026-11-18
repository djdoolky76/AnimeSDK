#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GCIMMDDIFBJ;
namespace System { class Action; }
namespace System { class String; }

#define GPPMPHICDEA_FPNOOECMBME_GKOIABHFNND_OFFSET UNITYSDK_OFFSET(0x16F1A790)
#define GPPMPHICDEA_FPNOOECMBME__CTOR_OFFSET UNITYSDK_OFFSET(0x16F1A780)

inline static constexpr unsigned int GPPMPHICDEA_FPNOOECMBME_TypeDefinitionIndex = 42624;

class GPPMPHICDEA_FPNOOECMBME : public ::System::Object
{
public:
	::System::Action* DIOMMCOEAMP; // 0x10
	::System::String* HMJBMNAAGKB; // 0x18
	::GCIMMDDIFBJ* BKOLCDPOJAL; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPPMPHICDEA_FPNOOECMBME__CTOR_OFFSET))(this);
	}

	::System::Void GKOIABHFNND()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPPMPHICDEA_FPNOOECMBME_GKOIABHFNND_OFFSET))(this);
	}
};
