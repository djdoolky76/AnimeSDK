#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define KNLKGLCAPGH_HOCJFINLNAJ_EBBDKGIGBGA_OFFSET UNITYSDK_OFFSET(0x16822B00)
#define KNLKGLCAPGH_HOCJFINLNAJ__CTOR_OFFSET UNITYSDK_OFFSET(0x16822AF0)

inline static constexpr unsigned int KNLKGLCAPGH_HOCJFINLNAJ_TypeDefinitionIndex = 41105;

class KNLKGLCAPGH_HOCJFINLNAJ : public ::System::Object
{
public:
	::System::Action* LPFMDKKFMBA; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNLKGLCAPGH_HOCJFINLNAJ__CTOR_OFFSET))(this);
	}

	::System::Void EBBDKGIGBGA(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + KNLKGLCAPGH_HOCJFINLNAJ_EBBDKGIGBGA_OFFSET))(this, BHDNBGLCNOM);
	}
};
