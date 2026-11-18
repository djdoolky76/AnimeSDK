#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class PCMENEMPLGF_LEMMFMICDFD;

#define PCMENEMPLGF_BIPIFLOMLNI_GCELPLHBLBI_OFFSET UNITYSDK_OFFSET(0x14B90C40)
#define PCMENEMPLGF_BIPIFLOMLNI__CTOR_OFFSET UNITYSDK_OFFSET(0x14B6D470)

inline static constexpr unsigned int PCMENEMPLGF_BIPIFLOMLNI_TypeDefinitionIndex = 62848;

class PCMENEMPLGF_BIPIFLOMLNI : public ::System::Object
{
public:
	::PCMENEMPLGF_LEMMFMICDFD* FGBNBFHOKAA; // 0x10
	::System::Int32 IPBFNIPPMBJ; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCMENEMPLGF_BIPIFLOMLNI__CTOR_OFFSET))(this);
	}

	::System::Void GCELPLHBLBI(::System::Int32 PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PCMENEMPLGF_BIPIFLOMLNI_GCELPLHBLBI_OFFSET))(this, PIIPCLCCOIG);
	}
};
