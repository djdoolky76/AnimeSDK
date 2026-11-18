#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define GPPMPHICDEA_CIGCGIKBNNH_CEICOOJECDC_OFFSET UNITYSDK_OFFSET(0x146D5FB0)
#define GPPMPHICDEA_CIGCGIKBNNH__CTOR_OFFSET UNITYSDK_OFFSET(0x146CFC20)

inline static constexpr unsigned int GPPMPHICDEA_CIGCGIKBNNH_TypeDefinitionIndex = 42658;

class GPPMPHICDEA_CIGCGIKBNNH : public ::System::Object
{
public:
	::System::Action* DMPEOJCCCLO; // 0x10
	::System::Boolean GFFINNGEMLL; // 0x18
	::System::Byte _padding0[0x3];
	::System::UInt32 PKMFBJMJCOO; // 0x1C
	::System::Int32 CGMEOMGAKDN; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPPMPHICDEA_CIGCGIKBNNH__CTOR_OFFSET))(this);
	}

	::System::Void CEICOOJECDC(::System::Int32 DJCNCELJPOM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GPPMPHICDEA_CIGCGIKBNNH_CEICOOJECDC_OFFSET))(this, DJCNCELJPOM);
	}
};
