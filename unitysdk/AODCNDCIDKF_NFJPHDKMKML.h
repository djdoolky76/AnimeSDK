#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define AODCNDCIDKF_NFJPHDKMKML_OKMIFCBJNCI_OFFSET UNITYSDK_OFFSET(0x143BC1D0)
#define AODCNDCIDKF_NFJPHDKMKML__CTOR_OFFSET UNITYSDK_OFFSET(0x143BC1C0)

inline static constexpr unsigned int AODCNDCIDKF_NFJPHDKMKML_TypeDefinitionIndex = 79588;

class AODCNDCIDKF_NFJPHDKMKML : public ::System::Object
{
public:
	::System::String* AELLPLBJELA; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AODCNDCIDKF_NFJPHDKMKML__CTOR_OFFSET))(this);
	}

	::System::Void OKMIFCBJNCI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AODCNDCIDKF_NFJPHDKMKML_OKMIFCBJNCI_OFFSET))(this);
	}
};
