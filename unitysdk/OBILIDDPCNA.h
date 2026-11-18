#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define OBILIDDPCNA_GHNLAJICPDI_OFFSET UNITYSDK_OFFSET(0x14F5F600)
#define OBILIDDPCNA_LBODGKNICHM_OFFSET UNITYSDK_OFFSET(0x14F5F6A0)
#define OBILIDDPCNA__CTOR_OFFSET UNITYSDK_OFFSET(0x14F5F5F0)

inline static constexpr unsigned int OBILIDDPCNA_TypeDefinitionIndex = 73363;

class OBILIDDPCNA : public ::System::Object
{
public:
	::System::Action* JHDKLINNADI; // 0x10
	::System::DateTime EFLAOODFHKN; // 0x18

	::System::Void _ctor(::System::DateTime HODAIDNDKHD, ::System::Action* FHJPINMHDEP)
	{
		return ((::System::Void(*)(::PVOID, ::System::DateTime, ::System::Action*))((::PBYTE)hIl2Cpp + OBILIDDPCNA__CTOR_OFFSET))(this, HODAIDNDKHD, FHJPINMHDEP);
	}

	::System::Boolean GHNLAJICPDI()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OBILIDDPCNA_GHNLAJICPDI_OFFSET))(this);
	}

	::System::Void LBODGKNICHM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBILIDDPCNA_LBODGKNICHM_OFFSET))(this);
	}
};
