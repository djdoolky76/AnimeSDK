#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Nap::NapECS { class EcsEntity; }

#define NEGKPFEAMNK_PNPILJCMHJI_CLPDJMFFPPD_OFFSET UNITYSDK_OFFSET(0xE5768A0)
#define NEGKPFEAMNK_PNPILJCMHJI__CTOR_OFFSET UNITYSDK_OFFSET(0xE576890)

inline static constexpr unsigned int NEGKPFEAMNK_PNPILJCMHJI_TypeDefinitionIndex = 90571;

class NEGKPFEAMNK_PNPILJCMHJI : public ::System::Object
{
public:
	::Nap::NapECS::EcsEntity* KECKGDFIALJ; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEGKPFEAMNK_PNPILJCMHJI__CTOR_OFFSET))(this);
	}

	::System::Void CLPDJMFFPPD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEGKPFEAMNK_PNPILJCMHJI_CLPDJMFFPPD_OFFSET))(this);
	}
};
