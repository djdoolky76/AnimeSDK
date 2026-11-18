#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Action_2; }

#define MOMLGOPPNHP_FDOGFFJGINF_MLINCAEHHAG_OFFSET UNITYSDK_OFFSET(0x177D78E0)
#define MOMLGOPPNHP_FDOGFFJGINF__CTOR_OFFSET UNITYSDK_OFFSET(0x177D78D0)

inline static constexpr unsigned int MOMLGOPPNHP_FDOGFFJGINF_TypeDefinitionIndex = 50858;

class MOMLGOPPNHP_FDOGFFJGINF : public ::System::Object
{
public:
	::System::Action_2<::System::UInt32, ::System::Boolean>* MMFFAFJBEGN; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOMLGOPPNHP_FDOGFFJGINF__CTOR_OFFSET))(this);
	}

	::System::Void MLINCAEHHAG(::System::UInt32 JCPNDFAEOLI, ::System::Boolean EBFCACIEKBC)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOMLGOPPNHP_FDOGFFJGINF_MLINCAEHHAG_OFFSET))(this, JCPNDFAEOLI, EBFCACIEKBC);
	}
};
