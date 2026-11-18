#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }

#define AODCNDCIDKF_IACBDNNKFBJ_EBDDEIDFLJM_OFFSET UNITYSDK_OFFSET(0x11BCB510)
#define AODCNDCIDKF_IACBDNNKFBJ__CTOR_OFFSET UNITYSDK_OFFSET(0x11BCB500)

inline static constexpr unsigned int AODCNDCIDKF_IACBDNNKFBJ_TypeDefinitionIndex = 79599;

class AODCNDCIDKF_IACBDNNKFBJ : public ::System::Object
{
public:
	::System::Action* CAAFEGLOALC; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AODCNDCIDKF_IACBDNNKFBJ__CTOR_OFFSET))(this);
	}

	::System::Void EBDDEIDFLJM(::System::String* IGAAKDOIPNN)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + AODCNDCIDKF_IACBDNNKFBJ_EBDDEIDFLJM_OFFSET))(this, IGAAKDOIPNN);
	}
};
