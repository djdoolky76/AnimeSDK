#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define AOKFPNKJOON_MLILNPMDBBF_JHBDBMEOMHD_OFFSET UNITYSDK_OFFSET(0x113C8590)
#define AOKFPNKJOON_MLILNPMDBBF__CTOR_OFFSET UNITYSDK_OFFSET(0x113C8580)

inline static constexpr unsigned int AOKFPNKJOON_MLILNPMDBBF_TypeDefinitionIndex = 51472;

class AOKFPNKJOON_MLILNPMDBBF : public ::System::Object
{
public:
	::System::Action* AAIILBBHEEH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOKFPNKJOON_MLILNPMDBBF__CTOR_OFFSET))(this);
	}

	::System::Void JHBDBMEOMHD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOKFPNKJOON_MLILNPMDBBF_JHBDBMEOMHD_OFFSET))(this);
	}
};
