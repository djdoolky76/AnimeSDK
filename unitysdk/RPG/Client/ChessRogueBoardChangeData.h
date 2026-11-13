#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ModifierEffectType.h"
#include "unitysdk/System/Object.h"
class DPELLHBJGML;
class OFGJFLCBBJP;
namespace RPG::Client { class ChessRogueBoardCellDataItem; }
namespace RPG::Client { class ChessRogueBoardDataItem; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHESSROGUEBOARDCHANGEDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1D897350)
#define RPG_CLIENT_CHESSROGUEBOARDCHANGEDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D897360)
#define RPG_CLIENT_CHESSROGUEBOARDCHANGEDATA_GETBEFOREBOARDDATAITEM_OFFSET UNITYSDK_OFFSET(0x1D8976A0)
#define RPG_CLIENT_CHESSROGUEBOARDCHANGEDATA_GETBEFORECELLDATAITEMLIST_OFFSET UNITYSDK_OFFSET(0x1D897DC0)
#define RPG_CLIENT_CHESSROGUEBOARDCHANGEDATA_GETBEFORECELLDATAITEM_OFFSET UNITYSDK_OFFSET(0x1D8973E0)
#define RPG_CLIENT_CHESSROGUEBOARDCHANGEDATA_GETMODIFIEREFFECTTYPE_OFFSET UNITYSDK_OFFSET(0x1D897550)
#define RPG_CLIENT_CHESSROGUEBOARDCHANGEDATA_HASCELLCHANGE_OFFSET UNITYSDK_OFFSET(0x1D8975F0)
#define RPG_CLIENT_CHESSROGUEBOARDCHANGEDATA_HASMODIFIER_OFFSET UNITYSDK_OFFSET(0x1D8974F0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChessRogueBoardChangeData_TypeDefinitionIndex = 68868;

	class ChessRogueBoardChangeData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ChessRogueBoardCellDataItem*>* _BeforeCellDataList; // 0x10
		::DPELLHBJGML* _ChessBoard; // 0x18
		::OFGJFLCBBJP* _ModifierInfo; // 0x20
		::System::Void _ctor(::OFGJFLCBBJP* a1, ::DPELLHBJGML* a2)
		{
			return ((::System::Void(*)(::PVOID, ::OFGJFLCBBJP*, ::DPELLHBJGML*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDCHANGEDATA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDCHANGEDATA_DISPOSE_OFFSET))(this);
		}

		::RPG::Client::ChessRogueBoardCellDataItem* GetBeforeCellDataItem(::System::UInt32 a1)
		{
			return ((::RPG::Client::ChessRogueBoardCellDataItem*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDCHANGEDATA_GETBEFORECELLDATAITEM_OFFSET))(this, a1);
		}

		::System::Boolean HasModifier()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDCHANGEDATA_HASMODIFIER_OFFSET))(this);
		}

		::RPG::GameCore::ModifierEffectType GetModifierEffectType()
		{
			return ((::RPG::GameCore::ModifierEffectType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDCHANGEDATA_GETMODIFIEREFFECTTYPE_OFFSET))(this);
		}

		::System::Boolean HasCellChange()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDCHANGEDATA_HASCELLCHANGE_OFFSET))(this);
		}

		::RPG::Client::ChessRogueBoardDataItem* GetBeforeBoardDataItem()
		{
			return ((::RPG::Client::ChessRogueBoardDataItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDCHANGEDATA_GETBEFOREBOARDDATAITEM_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChessRogueBoardCellDataItem*>* GetBeforeCellDataItemList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChessRogueBoardCellDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEBOARDCHANGEDATA_GETBEFORECELLDATAITEMLIST_OFFSET))(this);
		}

	};
}
