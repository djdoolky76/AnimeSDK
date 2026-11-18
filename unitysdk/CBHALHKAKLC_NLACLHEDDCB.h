#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CBHALHKAKLC_NLACLHEDDCB_GIAAAKPMBHN_OFFSET UNITYSDK_OFFSET(0x16A0BAF0)
#define CBHALHKAKLC_NLACLHEDDCB_HBLKKDJLIDH_OFFSET UNITYSDK_OFFSET(0x16A0BC80)
#define CBHALHKAKLC_NLACLHEDDCB__CTOR_OFFSET UNITYSDK_OFFSET(0x16A0BAE0)

inline static constexpr unsigned int CBHALHKAKLC_NLACLHEDDCB_TypeDefinitionIndex = 55878;

class CBHALHKAKLC_NLACLHEDDCB : public ::System::Object
{
public:
	::System::Action* DCONHPMJJEB; // 0x10
	::System::Action* JDFOOJCOANC; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBHALHKAKLC_NLACLHEDDCB__CTOR_OFFSET))(this);
	}

	::System::Void GIAAAKPMBHN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBHALHKAKLC_NLACLHEDDCB_GIAAAKPMBHN_OFFSET))(this);
	}

	::System::Void HBLKKDJLIDH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBHALHKAKLC_NLACLHEDDCB_HBLKKDJLIDH_OFFSET))(this);
	}
};
