#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
class DPELLHBJGML;
namespace RPG::Client { class ChessRogueBoardDataItem; }
namespace RPG::GameCore { class RogueDLCLayerRow; }

#define RPG_CLIENT_CHESSROGUEAREALAYERDATAITEM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D88F4F0)
#define RPG_CLIENT_CHESSROGUEAREALAYERDATAITEM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D88F2A0)
#define RPG_CLIENT_CHESSROGUEAREALAYERDATAITEM_GET_CURBOARD_OFFSET UNITYSDK_OFFSET(0x1D894690)
#define RPG_CLIENT_CHESSROGUEAREALAYERDATAITEM_GET_CURCHESSBOARDID_OFFSET UNITYSDK_OFFSET(0x1D894670)
#define RPG_CLIENT_CHESSROGUEAREALAYERDATAITEM_GET_LAYERID_OFFSET UNITYSDK_OFFSET(0x1D894630)
#define RPG_CLIENT_CHESSROGUEAREALAYERDATAITEM_GET_LAYERINDEXID_OFFSET UNITYSDK_OFFSET(0x1D894890)
#define RPG_CLIENT_CHESSROGUEAREALAYERDATAITEM_GET_LAYERINDEX_OFFSET UNITYSDK_OFFSET(0x1D894650)
#define RPG_CLIENT_CHESSROGUEAREALAYERDATAITEM_GET_LAYERNAMEID_OFFSET UNITYSDK_OFFSET(0x1D8949E0)
#define RPG_CLIENT_CHESSROGUEAREALAYERDATAITEM_GET_LAYERROW_OFFSET UNITYSDK_OFFSET(0x1D894970)
#define RPG_CLIENT_CHESSROGUEAREALAYERDATAITEM_SET_CURCHESSBOARDID_OFFSET UNITYSDK_OFFSET(0x1D894680)
#define RPG_CLIENT_CHESSROGUEAREALAYERDATAITEM_SET_LAYERID_OFFSET UNITYSDK_OFFSET(0x1D894640)
#define RPG_CLIENT_CHESSROGUEAREALAYERDATAITEM_SET_LAYERINDEX_OFFSET UNITYSDK_OFFSET(0x1D894660)
#define RPG_CLIENT_CHESSROGUEAREALAYERDATAITEM_SYNCCURBOARD_OFFSET UNITYSDK_OFFSET(0x1D88F500)

namespace RPG::Client
{
	inline static constexpr unsigned int ChessRogueAreaLayerDataItem_TypeDefinitionIndex = 68850;

	class ChessRogueAreaLayerDataItem : public ::System::Object
	{
	public:
		::RPG::GameCore::RogueDLCLayerRow* _Row; // 0x10
		::System::UInt32 _LayerID_k__BackingField; // 0x18
		::System::UInt32 _CurChessBoardID_k__BackingField; // 0x1C
		::System::UInt32 _LayerIndex_k__BackingField; // 0x20
		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREALAYERDATAITEM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREALAYERDATAITEM_DISPOSE_OFFSET))(this);
		}

		::System::Void SyncCurBoard(::DPELLHBJGML* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DPELLHBJGML*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREALAYERDATAITEM_SYNCCURBOARD_OFFSET))(this, a1);
		}

		::System::UInt32 get_LayerID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREALAYERDATAITEM_GET_LAYERID_OFFSET))(this);
		}

		::System::Void set_LayerID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREALAYERDATAITEM_SET_LAYERID_OFFSET))(this, a1);
		}

		::System::UInt32 get_LayerIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREALAYERDATAITEM_GET_LAYERINDEX_OFFSET))(this);
		}

		::System::Void set_LayerIndex(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREALAYERDATAITEM_SET_LAYERINDEX_OFFSET))(this, a1);
		}

		::System::UInt32 get_CurChessBoardID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREALAYERDATAITEM_GET_CURCHESSBOARDID_OFFSET))(this);
		}

		::System::Void set_CurChessBoardID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREALAYERDATAITEM_SET_CURCHESSBOARDID_OFFSET))(this, a1);
		}

		::RPG::Client::ChessRogueBoardDataItem* get_CurBoard()
		{
			return ((::RPG::Client::ChessRogueBoardDataItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREALAYERDATAITEM_GET_CURBOARD_OFFSET))(this);
		}

		::RPG::Client::TextID get_LayerIndexID()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREALAYERDATAITEM_GET_LAYERINDEXID_OFFSET))(this);
		}

		::RPG::Client::TextID get_LayerNameID()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREALAYERDATAITEM_GET_LAYERNAMEID_OFFSET))(this);
		}

		::RPG::GameCore::RogueDLCLayerRow* get_LayerRow()
		{
			return ((::RPG::GameCore::RogueDLCLayerRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREALAYERDATAITEM_GET_LAYERROW_OFFSET))(this);
		}

	};
}
