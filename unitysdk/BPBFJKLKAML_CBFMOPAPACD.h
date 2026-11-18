#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define BPBFJKLKAML_CBFMOPAPACD_ANODOBKKFFI_OFFSET UNITYSDK_OFFSET(0x14C58420)
#define BPBFJKLKAML_CBFMOPAPACD__CTOR_OFFSET UNITYSDK_OFFSET(0x14C58410)

inline static constexpr unsigned int BPBFJKLKAML_CBFMOPAPACD_TypeDefinitionIndex = 51271;

class BPBFJKLKAML_CBFMOPAPACD : public ::System::Object
{
public:
	::System::Action* CLBAEECMNJL; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPBFJKLKAML_CBFMOPAPACD__CTOR_OFFSET))(this);
	}

	::System::Void ANODOBKKFFI(::System::Int32 JKBLDFBGBPK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BPBFJKLKAML_CBFMOPAPACD_ANODOBKKFFI_OFFSET))(this, JKBLDFBGBPK);
	}
};
