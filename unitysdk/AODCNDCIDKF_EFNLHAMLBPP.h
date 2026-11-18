#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define AODCNDCIDKF_EFNLHAMLBPP_CMFMGPLBFCF_OFFSET UNITYSDK_OFFSET(0x12D0EFE0)
#define AODCNDCIDKF_EFNLHAMLBPP__CTOR_OFFSET UNITYSDK_OFFSET(0x12D0EFD0)

inline static constexpr unsigned int AODCNDCIDKF_EFNLHAMLBPP_TypeDefinitionIndex = 79595;

class AODCNDCIDKF_EFNLHAMLBPP : public ::System::Object
{
public:
	::System::Action* OLBIFDKONEK; // 0x10
	::System::Boolean NCBGPGHGMOB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AODCNDCIDKF_EFNLHAMLBPP__CTOR_OFFSET))(this);
	}

	::System::Void CMFMGPLBFCF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AODCNDCIDKF_EFNLHAMLBPP_CMFMGPLBFCF_OFFSET))(this);
	}
};
