#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define KNLPPPOKJJM_KNOAMAMAMJJ_EJCFPNPPOCP_OFFSET UNITYSDK_OFFSET(0x126A9BD0)
#define KNLPPPOKJJM_KNOAMAMAMJJ_NEBEMKFKGDP_OFFSET UNITYSDK_OFFSET(0x126A9BC0)
#define KNLPPPOKJJM_KNOAMAMAMJJ__CTOR_OFFSET UNITYSDK_OFFSET(0x126A9BB0)

inline static constexpr unsigned int KNLPPPOKJJM_KNOAMAMAMJJ_TypeDefinitionIndex = 67494;

class KNLPPPOKJJM_KNOAMAMAMJJ : public ::System::Object
{
public:
	::System::Action* EJGDHCIBCJH; // 0x10
	::System::Action_1<::System::Int32>* NKGCDDCMBCF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNLPPPOKJJM_KNOAMAMAMJJ__CTOR_OFFSET))(this);
	}

	::System::Void NEBEMKFKGDP(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + KNLPPPOKJJM_KNOAMAMAMJJ_NEBEMKFKGDP_OFFSET))(this, BHDNBGLCNOM);
	}

	::System::Void EJCFPNPPOCP(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + KNLPPPOKJJM_KNOAMAMAMJJ_EJCFPNPPOCP_OFFSET))(this, BHDNBGLCNOM);
	}
};
