#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AMEIKAGDIFC.h"
#include "unitysdk/System/Object.h"
class OHKCDFGPCKM;
namespace RPG::Client { class ChessRogueBoardCellChangeData; }
namespace RPG::Client { class ChessRogueBoardCellDataItem; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHESSROGUEBOARDCELLCHANGEDATA_CLONEBEFORECELLDATAITEM_OFFSET UNITYSDK_OFFSET(0xCAE1390)
#define RPG_CLIENT_CHESSROGUEBOARDCELLCHANGEDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xCAE11C0)
#define RPG_CLIENT_CHESSROGUEBOARDCELLCHANGEDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCAE1330)
#define RPG_CLIENT_CHESSROGUEBOARDCELLCHANGEDATA_GETBEFORECELLDATAITEM_OFFSET UNITYSDK_OFFSET(0xCAE1AC0)
#define RPG_CLIENT_CHESSROGUEBOARDCELLCHANGEDATA_GET_BEFORECELLDATAITEMLIST_OFFSET UNITYSDK_OFFSET(0xCAE1C10)
#define RPG_CLIENT_CHESSROGUEBOARDCELLCHANGEDATA_GET_CELLIDLIST_OFFSET UNITYSDK_OFFSET(0xCAE1BF0)
#define RPG_CLIENT_CHESSROGUEBOARDCELLCHANGEDATA_GET_MODIFIERSOURCETYPE_OFFSET UNITYSDK_OFFSET(0xCAE1BD0)
#define RPG_CLIENT_CHESSROGUEBOARDCELLCHANGEDATA_MERGE_OFFSET UNITYSDK_OFFSET(0xCAE1750)
#define RPG_CLIENT_CHESSROGUEBOARDCELLCHANGEDATA_SET_BEFORECELLDATAITEMLIST_OFFSET UNITYSDK_OFFSET(0xCAE1C20)
#define RPG_CLIENT_CHESSROGUEBOARDCELLCHANGEDATA_SET_CELLIDLIST_OFFSET UNITYSDK_OFFSET(0xCAE1C00)
#define RPG_CLIENT_CHESSROGUEBOARDCELLCHANGEDATA_SET_MODIFIERSOURCETYPE_OFFSET UNITYSDK_OFFSET(0xCAE1BE0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChessRogueBoardCellChangeData_TypeDefinitionIndex = 66914;

	class ChessRogueBoardCellChangeData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ChessRogueBoardCellDataItem*>* _BeforeCellDataItemList_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* _CellIDList_k__BackingField; // 0x18
		::AMEIKAGDIFC _ModifierSourceType_k__BackingField; // 0x20
		::System::Void _ctor(::OHKCDFGPCKM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OHKCDFGPCKM*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDCELLCHANGEDATA_CTOR_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDCELLCHANGEDATA_DISPOSE_OFFSET))(this);
		}

		::System::Void CloneBeforeCellDataItem(::RPG::Client::ChessRogueBoardCellDataItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChessRogueBoardCellDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDCELLCHANGEDATA_CLONEBEFORECELLDATAITEM_OFFSET))(this, a1);
		}

		::System::Void Merge(::RPG::Client::ChessRogueBoardCellChangeData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChessRogueBoardCellChangeData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDCELLCHANGEDATA_MERGE_OFFSET))(this, a1);
		}

		::RPG::Client::ChessRogueBoardCellDataItem* GetBeforeCellDataItem(::System::UInt32 a1)
		{
			return ((::RPG::Client::ChessRogueBoardCellDataItem*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDCELLCHANGEDATA_GETBEFORECELLDATAITEM_OFFSET))(this, a1);
		}

		::AMEIKAGDIFC get_ModifierSourceType()
		{
			return ((::AMEIKAGDIFC(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDCELLCHANGEDATA_GET_MODIFIERSOURCETYPE_OFFSET))(this);
		}

		::System::Void set_ModifierSourceType(::AMEIKAGDIFC a1)
		{
			return ((::System::Void(*)(::PVOID, ::AMEIKAGDIFC))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDCELLCHANGEDATA_SET_MODIFIERSOURCETYPE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_CellIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDCELLCHANGEDATA_GET_CELLIDLIST_OFFSET))(this);
		}

		::System::Void set_CellIDList(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDCELLCHANGEDATA_SET_CELLIDLIST_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChessRogueBoardCellDataItem*>* get_BeforeCellDataItemList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChessRogueBoardCellDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDCELLCHANGEDATA_GET_BEFORECELLDATAITEMLIST_OFFSET))(this);
		}

		::System::Void set_BeforeCellDataItemList(::System::Collections::Generic::List_1<::RPG::Client::ChessRogueBoardCellDataItem*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ChessRogueBoardCellDataItem*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDCELLCHANGEDATA_SET_BEFORECELLDATAITEMLIST_OFFSET))(this, a1);
		}

	};
}
