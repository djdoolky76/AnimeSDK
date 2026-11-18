#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MEEMMPKAFKL_ACMOGBEHFOJ_OCDNIFCHJEP_OFFSET UNITYSDK_OFFSET(0x1404BC50)
#define MEEMMPKAFKL_ACMOGBEHFOJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1404BC40)

inline static constexpr unsigned int MEEMMPKAFKL_ACMOGBEHFOJ_TypeDefinitionIndex = 63984;

class MEEMMPKAFKL_ACMOGBEHFOJ : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10
	::System::Int32 HBINAGPODHA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEEMMPKAFKL_ACMOGBEHFOJ__CTOR_OFFSET))(this);
	}

	::System::Void OCDNIFCHJEP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEEMMPKAFKL_ACMOGBEHFOJ_OCDNIFCHJEP_OFFSET))(this);
	}
};
