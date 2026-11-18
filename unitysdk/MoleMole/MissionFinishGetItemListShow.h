#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/DisplayMessageBase.h"

class HGAJKHIMKJP;
class LMNAIILAHBK;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_MISSIONFINISHGETITEMLISTSHOW_DIRECTSHOW_OFFSET UNITYSDK_OFFSET(0x130E3E10)
#define MOLEMOLE_MISSIONFINISHGETITEMLISTSHOW_DOPROCESS_OFFSET UNITYSDK_OFFSET(0x130E3E60)
#define MOLEMOLE_MISSIONFINISHGETITEMLISTSHOW_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x130E39B0)
#define MOLEMOLE_MISSIONFINISHGETITEMLISTSHOW_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x130E3DC0)
#define MOLEMOLE_MISSIONFINISHGETITEMLISTSHOW_SHOWREWARDWINDOW_OFFSET UNITYSDK_OFFSET(0x130E3EB0)
#define MOLEMOLE_MISSIONFINISHGETITEMLISTSHOW__CTOR_OFFSET UNITYSDK_OFFSET(0x130E39C0)

namespace MoleMole
{
	inline static constexpr unsigned int MissionFinishGetItemListShow_TypeDefinitionIndex = 91180;

	class MissionFinishGetItemListShow : public ::MoleMole::DisplayMessageBase
	{
	public:
		::System::Collections::Generic::List_1<::HGAJKHIMKJP*>* items; // 0x28
		::LMNAIILAHBK* _context; // 0x30

		::System::Void _ctor(::LMNAIILAHBK* context)
		{
			return ((::System::Void(*)(::PVOID, ::LMNAIILAHBK*))((::PBYTE)hIl2Cpp + MOLEMOLE_MISSIONFINISHGETITEMLISTSHOW__CTOR_OFFSET))(this, context);
		}

		::System::Int32 get_Priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MISSIONFINISHGETITEMLISTSHOW_GET_PRIORITY_OFFSET))(this);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MISSIONFINISHGETITEMLISTSHOW_ONPROCESS_OFFSET))(this);
		}

		::System::Void DirectShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MISSIONFINISHGETITEMLISTSHOW_DIRECTSHOW_OFFSET))(this);
		}

		::System::Void DoProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MISSIONFINISHGETITEMLISTSHOW_DOPROCESS_OFFSET))(this);
		}

		::System::Void ShowRewardWindow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MISSIONFINISHGETITEMLISTSHOW_SHOWREWARDWINDOW_OFFSET))(this);
		}
	};
}
