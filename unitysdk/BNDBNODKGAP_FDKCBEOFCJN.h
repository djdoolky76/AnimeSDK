#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BNDBNODKGAP;
class LLAKLLFJAAD;
class PJCFNFFGCPO;

#define BNDBNODKGAP_FDKCBEOFCJN_BAIIEOOAGPA_OFFSET UNITYSDK_OFFSET(0x18DABCC0)
#define BNDBNODKGAP_FDKCBEOFCJN__CTOR_OFFSET UNITYSDK_OFFSET(0x18DABCB0)

inline static constexpr unsigned int BNDBNODKGAP_FDKCBEOFCJN_TypeDefinitionIndex = 78411;

class BNDBNODKGAP_FDKCBEOFCJN : public ::System::Object
{
public:
	::BNDBNODKGAP* KLHPEBKNIFB; // 0x10
	::PJCFNFFGCPO* MNDIBLLFAJI; // 0x18
	::LLAKLLFJAAD* FCHGPPLBGDD; // 0x20
	::System::Int32 KOOHKLJFMBD; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNDBNODKGAP_FDKCBEOFCJN__CTOR_OFFSET))(this);
	}

	::System::Void BAIIEOOAGPA(::PJCFNFFGCPO* OJLLHJHFPHN)
	{
		return ((::System::Void(*)(::PVOID, ::PJCFNFFGCPO*))((::PBYTE)hIl2Cpp + BNDBNODKGAP_FDKCBEOFCJN_BAIIEOOAGPA_OFFSET))(this, OJLLHJHFPHN);
	}
};
