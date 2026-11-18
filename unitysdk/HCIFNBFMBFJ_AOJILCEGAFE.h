#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define HCIFNBFMBFJ_AOJILCEGAFE_FNHIAHLAEIH_OFFSET UNITYSDK_OFFSET(0x15B3BBF0)
#define HCIFNBFMBFJ_AOJILCEGAFE__CTOR_OFFSET UNITYSDK_OFFSET(0x15B3BBE0)

inline static constexpr unsigned int HCIFNBFMBFJ_AOJILCEGAFE_TypeDefinitionIndex = 50138;

class HCIFNBFMBFJ_AOJILCEGAFE : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10
	::System::Int32 HBINAGPODHA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_AOJILCEGAFE__CTOR_OFFSET))(this);
	}

	::System::Void FNHIAHLAEIH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_AOJILCEGAFE_FNHIAHLAEIH_OFFSET))(this);
	}
};
