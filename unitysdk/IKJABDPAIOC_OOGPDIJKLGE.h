#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HJOKDGFPEJA.h"
#include "unitysdk/System/Object.h"

class IKJABDPAIOC;
namespace System { class Action; }

#define IKJABDPAIOC_OOGPDIJKLGE_BKPJLBOOEJO_OFFSET UNITYSDK_OFFSET(0x138118E0)
#define IKJABDPAIOC_OOGPDIJKLGE__CTOR_OFFSET UNITYSDK_OFFSET(0x138118D0)

inline static constexpr unsigned int IKJABDPAIOC_OOGPDIJKLGE_TypeDefinitionIndex = 69328;

class IKJABDPAIOC_OOGPDIJKLGE : public ::System::Object
{
public:
	::System::Action* EJGDHCIBCJH; // 0x10
	::IKJABDPAIOC* KLHPEBKNIFB; // 0x18
	::HJOKDGFPEJA PHHDHIBOCKA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKJABDPAIOC_OOGPDIJKLGE__CTOR_OFFSET))(this);
	}

	::System::Void BKPJLBOOEJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKJABDPAIOC_OOGPDIJKLGE_BKPJLBOOEJO_OFFSET))(this);
	}
};
