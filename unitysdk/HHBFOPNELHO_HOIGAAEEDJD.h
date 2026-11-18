#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HHBFOPNELHO;
class OAEFGCLEHHO;
class PNPFJKPGEHF;
namespace System { class Action; }

#define HHBFOPNELHO_HOIGAAEEDJD_EBJHOPCPKOC_OFFSET UNITYSDK_OFFSET(0x17E48E80)
#define HHBFOPNELHO_HOIGAAEEDJD_EJKIGBOPIJB_OFFSET UNITYSDK_OFFSET(0x17E48E40)
#define HHBFOPNELHO_HOIGAAEEDJD__CTOR_OFFSET UNITYSDK_OFFSET(0x17E48E30)

inline static constexpr unsigned int HHBFOPNELHO_HOIGAAEEDJD_TypeDefinitionIndex = 40616;

class HHBFOPNELHO_HOIGAAEEDJD : public ::System::Object
{
public:
	::HHBFOPNELHO* KLHPEBKNIFB; // 0x10
	::System::Action* OLBAKFLBNIG; // 0x18
	::System::Action* EDNJGMKPFHG; // 0x20
	::System::Int32 EHDMGHBOJJM; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHBFOPNELHO_HOIGAAEEDJD__CTOR_OFFSET))(this);
	}

	::System::Void EJKIGBOPIJB(::PNPFJKPGEHF* DJCNCELJPOM)
	{
		return ((::System::Void(*)(::PVOID, ::PNPFJKPGEHF*))((::PBYTE)hIl2Cpp + HHBFOPNELHO_HOIGAAEEDJD_EJKIGBOPIJB_OFFSET))(this, DJCNCELJPOM);
	}

	::System::Void EBJHOPCPKOC(::OAEFGCLEHHO* NFFNEFLKPDG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + HHBFOPNELHO_HOIGAAEEDJD_EBJHOPCPKOC_OFFSET))(this, NFFNEFLKPDG);
	}
};
