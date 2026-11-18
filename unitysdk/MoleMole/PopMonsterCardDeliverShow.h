#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AHNCALHIEDM.h"
#include "unitysdk/FAKODLEPJOA.h"
#include "unitysdk/MoleMole/DisplayMessageBase.h"

#define MOLEMOLE_POPMONSTERCARDDELIVERSHOW_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x1249C2D0)
#define MOLEMOLE_POPMONSTERCARDDELIVERSHOW_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x1249C320)
#define MOLEMOLE_POPMONSTERCARDDELIVERSHOW__CTOR_OFFSET UNITYSDK_OFFSET(0x1249C2E0)

namespace MoleMole
{
	inline static constexpr unsigned int PopMonsterCardDeliverShow_TypeDefinitionIndex = 44163;

	class PopMonsterCardDeliverShow : public ::MoleMole::DisplayMessageBase
	{
	public:
		::AHNCALHIEDM _showType; // 0x28

		::System::Void _ctor(::FAKODLEPJOA showPage, ::AHNCALHIEDM showType)
		{
			return ((::System::Void(*)(::PVOID, ::FAKODLEPJOA, ::AHNCALHIEDM))((::PBYTE)hIl2Cpp + MOLEMOLE_POPMONSTERCARDDELIVERSHOW__CTOR_OFFSET))(this, showPage, showType);
		}

		::System::Int32 get_Priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_POPMONSTERCARDDELIVERSHOW_GET_PRIORITY_OFFSET))(this);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_POPMONSTERCARDDELIVERSHOW_ONPROCESS_OFFSET))(this);
		}
	};
}
