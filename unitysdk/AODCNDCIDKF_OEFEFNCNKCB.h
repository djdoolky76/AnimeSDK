#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AODCNDCIDKF;
namespace System { class String; }

#define AODCNDCIDKF_OEFEFNCNKCB_KFOOPBANAFD_OFFSET UNITYSDK_OFFSET(0x1821B670)
#define AODCNDCIDKF_OEFEFNCNKCB__CTOR_OFFSET UNITYSDK_OFFSET(0x1821B660)

inline static constexpr unsigned int AODCNDCIDKF_OEFEFNCNKCB_TypeDefinitionIndex = 79608;

class AODCNDCIDKF_OEFEFNCNKCB : public ::System::Object
{
public:
	::System::String* OLOMNNBBHPJ; // 0x10
	::AODCNDCIDKF* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AODCNDCIDKF_OEFEFNCNKCB__CTOR_OFFSET))(this);
	}

	::System::Void KFOOPBANAFD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AODCNDCIDKF_OEFEFNCNKCB_KFOOPBANAFD_OFFSET))(this);
	}
};
