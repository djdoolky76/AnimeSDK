#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define NBOMGKIBBPG_HJNLGNFGMPP_PNGOHNLELDJ_OFFSET UNITYSDK_OFFSET(0xE56C9C0)
#define NBOMGKIBBPG_HJNLGNFGMPP__CTOR_OFFSET UNITYSDK_OFFSET(0xE56C9B0)

inline static constexpr unsigned int NBOMGKIBBPG_HJNLGNFGMPP_TypeDefinitionIndex = 93022;

class NBOMGKIBBPG_HJNLGNFGMPP : public ::System::Object
{
public:
	::System::String* GDGGMIJHAJJ; // 0x10
	::System::Action_1<::System::String*>* MGAKJHJAGJI; // 0x18
	::System::Action_1<::System::Single>* JOLIEKHCGDJ; // 0x20
	::System::Single HBFKHANEEND; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBOMGKIBBPG_HJNLGNFGMPP__CTOR_OFFSET))(this);
	}

	::System::Void PNGOHNLELDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBOMGKIBBPG_HJNLGNFGMPP_PNGOHNLELDJ_OFFSET))(this);
	}
};
