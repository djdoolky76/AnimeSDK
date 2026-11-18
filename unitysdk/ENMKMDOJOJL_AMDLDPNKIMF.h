#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ENMKMDOJOJL;
namespace System { class Action; }

#define ENMKMDOJOJL_AMDLDPNKIMF_FBNBBPGPFHK_OFFSET UNITYSDK_OFFSET(0x157B53F0)
#define ENMKMDOJOJL_AMDLDPNKIMF__CTOR_OFFSET UNITYSDK_OFFSET(0x157B53E0)

inline static constexpr unsigned int ENMKMDOJOJL_AMDLDPNKIMF_TypeDefinitionIndex = 16221;

class ENMKMDOJOJL_AMDLDPNKIMF : public ::System::Object
{
public:
	::ENMKMDOJOJL* KLHPEBKNIFB; // 0x10
	::System::Action* EJGDHCIBCJH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENMKMDOJOJL_AMDLDPNKIMF__CTOR_OFFSET))(this);
	}

	::System::Void FBNBBPGPFHK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENMKMDOJOJL_AMDLDPNKIMF_FBNBBPGPFHK_OFFSET))(this);
	}
};
