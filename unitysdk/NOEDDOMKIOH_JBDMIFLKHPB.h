#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class NOEDDOMKIOH;
namespace System { class Action; }
namespace System { class String; }

#define NOEDDOMKIOH_JBDMIFLKHPB_JMLCMKNMHIN_OFFSET UNITYSDK_OFFSET(0x1376F240)
#define NOEDDOMKIOH_JBDMIFLKHPB_JPCAKPKPGLN_OFFSET UNITYSDK_OFFSET(0x1376F270)
#define NOEDDOMKIOH_JBDMIFLKHPB_OMEDOGKIIOO_OFFSET UNITYSDK_OFFSET(0x1376F220)
#define NOEDDOMKIOH_JBDMIFLKHPB__CTOR_OFFSET UNITYSDK_OFFSET(0x1376F210)

inline static constexpr unsigned int NOEDDOMKIOH_JBDMIFLKHPB_TypeDefinitionIndex = 63605;

class NOEDDOMKIOH_JBDMIFLKHPB : public ::System::Object
{
public:
	::System::String* HLFFCMIFFIB; // 0x10
	::System::Action* FFMGICPLKFB; // 0x18
	::NOEDDOMKIOH* KLHPEBKNIFB; // 0x20
	::System::Action* DLMJCFBENGB; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOEDDOMKIOH_JBDMIFLKHPB__CTOR_OFFSET))(this);
	}

	::System::Void OMEDOGKIIOO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOEDDOMKIOH_JBDMIFLKHPB_OMEDOGKIIOO_OFFSET))(this);
	}

	::System::Void JMLCMKNMHIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOEDDOMKIOH_JBDMIFLKHPB_JMLCMKNMHIN_OFFSET))(this);
	}

	::System::Void JPCAKPKPGLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOEDDOMKIOH_JBDMIFLKHPB_JPCAKPKPGLN_OFFSET))(this);
	}
};
