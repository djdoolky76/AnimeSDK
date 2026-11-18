#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define KNLKGLCAPGH_CHODLAMCCND_INFECOPFNOC_OFFSET UNITYSDK_OFFSET(0x13C85D50)
#define KNLKGLCAPGH_CHODLAMCCND__CTOR_OFFSET UNITYSDK_OFFSET(0x13C85D40)

inline static constexpr unsigned int KNLKGLCAPGH_CHODLAMCCND_TypeDefinitionIndex = 41110;

class KNLKGLCAPGH_CHODLAMCCND : public ::System::Object
{
public:
	::System::Action* LPFMDKKFMBA; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNLKGLCAPGH_CHODLAMCCND__CTOR_OFFSET))(this);
	}

	::System::Void INFECOPFNOC(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + KNLKGLCAPGH_CHODLAMCCND_INFECOPFNOC_OFFSET))(this, BHDNBGLCNOM);
	}
};
