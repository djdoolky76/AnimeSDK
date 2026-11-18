#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define KNLKGLCAPGH_BICAPPKDKAB_BNDMAAPDHMI_OFFSET UNITYSDK_OFFSET(0x16822AE0)
#define KNLKGLCAPGH_BICAPPKDKAB__CTOR_OFFSET UNITYSDK_OFFSET(0x16822AD0)

inline static constexpr unsigned int KNLKGLCAPGH_BICAPPKDKAB_TypeDefinitionIndex = 41119;

class KNLKGLCAPGH_BICAPPKDKAB : public ::System::Object
{
public:
	::System::Action* NGFDBMGHFCJ; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNLKGLCAPGH_BICAPPKDKAB__CTOR_OFFSET))(this);
	}

	::System::Void BNDMAAPDHMI(::OAEFGCLEHHO* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + KNLKGLCAPGH_BICAPPKDKAB_BNDMAAPDHMI_OFFSET))(this, GLAOEHCGCFO);
	}
};
