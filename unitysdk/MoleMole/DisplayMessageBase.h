#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FAKODLEPJOA.h"
#include "unitysdk/MoleMole/MessageTaskBase.h"

#define MOLEMOLE_DISPLAYMESSAGEBASE_GET_ISBLOCKCENTER_OFFSET UNITYSDK_OFFSET(0x1A06BDC0)
#define MOLEMOLE_DISPLAYMESSAGEBASE_GET_ISPENETRATE_OFFSET UNITYSDK_OFFSET(0x1A06BDD0)
#define MOLEMOLE_DISPLAYMESSAGEBASE_GET_ISTRIGGERINLOADING_OFFSET UNITYSDK_OFFSET(0x1A06BE30)
#define MOLEMOLE_DISPLAYMESSAGEBASE_GET_ISTRIGGER_OFFSET UNITYSDK_OFFSET(0x1A06BDB0)
#define MOLEMOLE_DISPLAYMESSAGEBASE_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x1A06BDA0)
#define MOLEMOLE_DISPLAYMESSAGEBASE_SETPRIORITYWHENSORT_OFFSET UNITYSDK_OFFSET(0x1A06BE90)
#define MOLEMOLE_DISPLAYMESSAGEBASE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A06BEE0)
#define MOLEMOLE_DISPLAYMESSAGEBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A06BED0)

namespace MoleMole
{
	inline static constexpr unsigned int DisplayMessageBase_TypeDefinitionIndex = 51093;

	class DisplayMessageBase : public ::MoleMole::MessageTaskBase
	{
	public:
		::System::Int32 _messagePriority; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DISPLAYMESSAGEBASE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FAKODLEPJOA matchPage)
		{
			return ((::System::Void(*)(::PVOID, ::FAKODLEPJOA))((::PBYTE)hIl2Cpp + MOLEMOLE_DISPLAYMESSAGEBASE__CTOR_1_OFFSET))(this, matchPage);
		}

		::System::Int32 get_Priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DISPLAYMESSAGEBASE_GET_PRIORITY_OFFSET))(this);
		}

		::System::Boolean get_IsTrigger()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DISPLAYMESSAGEBASE_GET_ISTRIGGER_OFFSET))(this);
		}

		::System::Boolean get_IsBlockCenter()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DISPLAYMESSAGEBASE_GET_ISBLOCKCENTER_OFFSET))(this);
		}

		::System::Boolean get_IsPenetrate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DISPLAYMESSAGEBASE_GET_ISPENETRATE_OFFSET))(this);
		}

		::System::Boolean get_IsTriggerInLoading()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DISPLAYMESSAGEBASE_GET_ISTRIGGERINLOADING_OFFSET))(this);
		}

		::System::Void SetPriorityWhenSort()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DISPLAYMESSAGEBASE_SETPRIORITYWHENSORT_OFFSET))(this);
		}
	};
}
