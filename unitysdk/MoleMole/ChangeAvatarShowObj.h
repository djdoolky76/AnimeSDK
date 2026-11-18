#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AJKPJABMACO.h"
#include "unitysdk/MoleMole/DisplayMessageBase.h"

class HGAJKHIMKJP;
class HPGBIDMABJP;
class OFABBAJJIBL;

#define MOLEMOLE_CHANGEAVATARSHOWOBJ_EXIT_OFFSET UNITYSDK_OFFSET(0x1C5B0830)
#define MOLEMOLE_CHANGEAVATARSHOWOBJ_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x1C5AF630)
#define MOLEMOLE_CHANGEAVATARSHOWOBJ_SHOWCHANGEANIM_OFFSET UNITYSDK_OFFSET(0x1C5B0A50)
#define MOLEMOLE_CHANGEAVATARSHOWOBJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5AF450)

namespace MoleMole
{
	inline static constexpr unsigned int ChangeAvatarShowObj_TypeDefinitionIndex = 66444;

	class ChangeAvatarShowObj : public ::MoleMole::DisplayMessageBase
	{
	public:
		::HPGBIDMABJP* itemModel; // 0x28
		::OFABBAJJIBL* eventModel; // 0x30
		::System::Int32 slot; // 0x38
		::System::Byte _padding0[0x4];
		::System::UInt64 newUid; // 0x40
		::AJKPJABMACO changeType; // 0x48
		::System::Boolean notip; // 0x4C
		::System::Boolean bottomPerform; // 0x4D
		::System::Boolean hasShow; // 0x4E
		::System::Boolean hasJoin; // 0x4F
		::System::UInt64 lastUid; // 0x50

		::System::Void _ctor(::System::UInt64 lastUid, ::System::UInt64 newUid, ::System::Boolean notip, ::System::Boolean bottomPerform, ::System::Int32 slot, ::AJKPJABMACO changeType)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::UInt64, ::System::Boolean, ::System::Boolean, ::System::Int32, ::AJKPJABMACO))((::PBYTE)hIl2Cpp + MOLEMOLE_CHANGEAVATARSHOWOBJ__CTOR_OFFSET))(this, lastUid, newUid, notip, bottomPerform, slot, changeType);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHANGEAVATARSHOWOBJ_ONPROCESS_OFFSET))(this);
		}

		::System::Void Exit(::HGAJKHIMKJP* itemDataNew)
		{
			return ((::System::Void(*)(::PVOID, ::HGAJKHIMKJP*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHANGEAVATARSHOWOBJ_EXIT_OFFSET))(this, itemDataNew);
		}

		::System::Void ShowChangeAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHANGEAVATARSHOWOBJ_SHOWCHANGEANIM_OFFSET))(this);
		}
	};
}
