#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GNFLPMACOFA.h"
class DFKMNLIJMFB;
namespace System { class Tuple; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHESSROGUEBOARDCELLBOSSSELECTDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xCAE8BF0)
#define RPG_CLIENT_CHESSROGUEBOARDCELLBOSSSELECTDATA_GET_ISSELECTED_OFFSET UNITYSDK_OFFSET(0xCAE9170)
#define RPG_CLIENT_CHESSROGUEBOARDCELLBOSSSELECTDATA_GET_SELECTEDMONSTERID_OFFSET UNITYSDK_OFFSET(0xCAE9190)
#define RPG_CLIENT_CHESSROGUEBOARDCELLBOSSSELECTDATA_GET_TOSELECTLIST_OFFSET UNITYSDK_OFFSET(0xCAE91B0)
#define RPG_CLIENT_CHESSROGUEBOARDCELLBOSSSELECTDATA_SET_ISSELECTED_OFFSET UNITYSDK_OFFSET(0xCAE9180)
#define RPG_CLIENT_CHESSROGUEBOARDCELLBOSSSELECTDATA_SET_SELECTEDMONSTERID_OFFSET UNITYSDK_OFFSET(0xCAE91A0)
#define RPG_CLIENT_CHESSROGUEBOARDCELLBOSSSELECTDATA_SET_TOSELECTLIST_OFFSET UNITYSDK_OFFSET(0xCAE91C0)
#define RPG_CLIENT_CHESSROGUEBOARDCELLBOSSSELECTDATA__SYNCEXTRAINFO_OFFSET UNITYSDK_OFFSET(0xCAE8C00)

namespace RPG::Client
{
	class ChessRogueBoardCellBossSelectData : public ::GNFLPMACOFA
	{
	public:
		::System::Collections::Generic::List_1<::System::Tuple*>* _ToSelectList_k__BackingField; // 0x10
		::System::UInt32 _SelectedMonsterID_k__BackingField; // 0x18
		::System::Boolean _IsSelected_k__BackingField; // 0x1C
		::System::Void _ctor(::DFKMNLIJMFB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DFKMNLIJMFB*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDCELLBOSSSELECTDATA_CTOR_OFFSET))(this, a1);
		}

		::System::Void _SyncExtraInfo(::DFKMNLIJMFB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DFKMNLIJMFB*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDCELLBOSSSELECTDATA__SYNCEXTRAINFO_OFFSET))(this, a1);
		}

		::System::Boolean get_IsSelected()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDCELLBOSSSELECTDATA_GET_ISSELECTED_OFFSET))(this);
		}

		::System::Void set_IsSelected(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDCELLBOSSSELECTDATA_SET_ISSELECTED_OFFSET))(this, a1);
		}

		::System::UInt32 get_SelectedMonsterID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDCELLBOSSSELECTDATA_GET_SELECTEDMONSTERID_OFFSET))(this);
		}

		::System::Void set_SelectedMonsterID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDCELLBOSSSELECTDATA_SET_SELECTEDMONSTERID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::Tuple*>* get_ToSelectList()
		{
			return ((::System::Collections::Generic::List_1<::System::Tuple*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDCELLBOSSSELECTDATA_GET_TOSELECTLIST_OFFSET))(this);
		}

		::System::Void set_ToSelectList(::System::Collections::Generic::List_1<::System::Tuple*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Tuple*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDCELLBOSSSELECTDATA_SET_TOSELECTLIST_OFFSET))(this, a1);
		}

	};
}
