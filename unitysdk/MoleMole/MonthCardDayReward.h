#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JBEPKBJKIFN.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Object.h"

class LCBJDGHHDOO;

#define MOLEMOLE_MONTHCARDDAYREWARD_EMJLBGNLKIH_OFFSET UNITYSDK_OFFSET(0x1249AC20)
#define MOLEMOLE_MONTHCARDDAYREWARD_GET_CARDINDEX_OFFSET UNITYSDK_OFFSET(0x1249A700)
#define MOLEMOLE_MONTHCARDDAYREWARD_GET_DAYINDEX_OFFSET UNITYSDK_OFFSET(0x1249A6E0)
#define MOLEMOLE_MONTHCARDDAYREWARD_GET_DAY_OFFSET UNITYSDK_OFFSET(0x1249A6D0)
#define MOLEMOLE_MONTHCARDDAYREWARD_GET_STATE_OFFSET UNITYSDK_OFFSET(0x1249A720)
#define MOLEMOLE_MONTHCARDDAYREWARD_HDKJFJPFBLK_OFFSET UNITYSDK_OFFSET(0x1249ABA0)
#define MOLEMOLE_MONTHCARDDAYREWARD_IEGBGFAHJIJ_OFFSET UNITYSDK_OFFSET(0x1249A800)
#define MOLEMOLE_MONTHCARDDAYREWARD_SET_CARDINDEX_OFFSET UNITYSDK_OFFSET(0x1249A710)
#define MOLEMOLE_MONTHCARDDAYREWARD_SET_DAYINDEX_OFFSET UNITYSDK_OFFSET(0x1249A6F0)
#define MOLEMOLE_MONTHCARDDAYREWARD_SET_STATE_OFFSET UNITYSDK_OFFSET(0x1249A730)
#define MOLEMOLE_MONTHCARDDAYREWARD__CTOR_OFFSET UNITYSDK_OFFSET(0x1249A740)

namespace MoleMole
{
	inline static constexpr unsigned int MonthCardDayReward_TypeDefinitionIndex = 92386;

	class MonthCardDayReward : public ::System::Object
	{
	public:
		::System::DateTime _day; // 0x10
		::System::Int64 startTime; // 0x18
		::System::Int64 endTime; // 0x20
		::LCBJDGHHDOO* OwnerMonth; // 0x28
		::System::Int32 _DayIndex_k__BackingField; // 0x30
		::System::Int32 _CardIndex_k__BackingField; // 0x34
		::JBEPKBJKIFN _State_k__BackingField; // 0x38
		::System::Int32 weekNumber; // 0x3C

		::System::Void _ctor(::System::DateTime FNIOPKPHDEH, ::System::Int32 LKCPJFFAGAN)
		{
			return ((::System::Void(*)(::PVOID, ::System::DateTime, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONTHCARDDAYREWARD__CTOR_OFFSET))(this, FNIOPKPHDEH, LKCPJFFAGAN);
		}

		::System::DateTime get_Day()
		{
			return ((::System::DateTime(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONTHCARDDAYREWARD_GET_DAY_OFFSET))(this);
		}

		::System::Int32 get_DayIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONTHCARDDAYREWARD_GET_DAYINDEX_OFFSET))(this);
		}

		::System::Void set_DayIndex(::System::Int32 EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONTHCARDDAYREWARD_SET_DAYINDEX_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Int32 get_CardIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONTHCARDDAYREWARD_GET_CARDINDEX_OFFSET))(this);
		}

		::System::Void set_CardIndex(::System::Int32 EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONTHCARDDAYREWARD_SET_CARDINDEX_OFFSET))(this, EGEGIMGMJHN);
		}

		::JBEPKBJKIFN get_State()
		{
			return ((::JBEPKBJKIFN(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONTHCARDDAYREWARD_GET_STATE_OFFSET))(this);
		}

		::System::Void set_State(::JBEPKBJKIFN EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::JBEPKBJKIFN))((::PBYTE)hIl2Cpp + MOLEMOLE_MONTHCARDDAYREWARD_SET_STATE_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Void IEGBGFAHJIJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONTHCARDDAYREWARD_IEGBGFAHJIJ_OFFSET))(this);
		}

		::System::Boolean HDKJFJPFBLK(::LCBJDGHHDOO* AAGJELKHDKN)
		{
			return ((::System::Boolean(*)(::PVOID, ::LCBJDGHHDOO*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONTHCARDDAYREWARD_HDKJFJPFBLK_OFFSET))(this, AAGJELKHDKN);
		}

		::System::Void EMJLBGNLKIH(::LCBJDGHHDOO* OFJCKDMPPFO)
		{
			return ((::System::Void(*)(::PVOID, ::LCBJDGHHDOO*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONTHCARDDAYREWARD_EMJLBGNLKIH_OFFSET))(this, OFJCKDMPPFO);
		}
	};
}
