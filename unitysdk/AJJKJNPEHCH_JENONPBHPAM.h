#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FOMJDICEKPN;
namespace System { template <typename T> class Action_1; }

#define AJJKJNPEHCH_JENONPBHPAM_KOOPKOPOICF_OFFSET UNITYSDK_OFFSET(0x134D4E90)
#define AJJKJNPEHCH_JENONPBHPAM_OLCIIGHHPID_OFFSET UNITYSDK_OFFSET(0x134D4EE0)
#define AJJKJNPEHCH_JENONPBHPAM__CTOR_OFFSET UNITYSDK_OFFSET(0x134D4E80)

inline static constexpr unsigned int AJJKJNPEHCH_JENONPBHPAM_TypeDefinitionIndex = 83670;

class AJJKJNPEHCH_JENONPBHPAM : public ::System::Object
{
public:
	::FOMJDICEKPN* CPKIONDDNLJ; // 0x10
	::System::Action_1<::FOMJDICEKPN*>* KIINMAIJHMB; // 0x18
	::FOMJDICEKPN* GEGNMDBEGJM; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJJKJNPEHCH_JENONPBHPAM__CTOR_OFFSET))(this);
	}

	::System::Void KOOPKOPOICF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJJKJNPEHCH_JENONPBHPAM_KOOPKOPOICF_OFFSET))(this);
	}

	::System::Void OLCIIGHHPID()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJJKJNPEHCH_JENONPBHPAM_OLCIIGHHPID_OFFSET))(this);
	}
};
