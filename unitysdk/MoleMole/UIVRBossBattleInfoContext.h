#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HPFBEABCPEO.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class KDFEBFHFCHO;

#define MOLEMOLE_UIVRBOSSBATTLEINFOCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x12F8F540)

namespace MoleMole
{
	inline static constexpr unsigned int UIVRBossBattleInfoContext_TypeDefinitionIndex = 50249;

	class UIVRBossBattleInfoContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::KDFEBFHFCHO* questTemplate; // 0x28
		::HPFBEABCPEO JumpData; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVRBOSSBATTLEINFOCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
