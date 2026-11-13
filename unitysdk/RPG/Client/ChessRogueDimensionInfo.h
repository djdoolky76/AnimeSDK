#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LLBHIMCMMEH;
namespace RPG::Client { class ChessRogueDimensionDataItem; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHESSROGUEDIMENSIONINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8A10B0)
#define RPG_CLIENT_CHESSROGUEDIMENSIONINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D8A16E0)
#define RPG_CLIENT_CHESSROGUEDIMENSIONINFO_GETCHESSROGUEDIMENSIONDATAITEMLIST_OFFSET UNITYSDK_OFFSET(0x1D8A2920)
#define RPG_CLIENT_CHESSROGUEDIMENSIONINFO_GETCURTOTALDIMENSIONVALUE_OFFSET UNITYSDK_OFFSET(0x1D8A2B70)
#define RPG_CLIENT_CHESSROGUEDIMENSIONINFO_GETMAXTOTALDIMENSIONVALUE_OFFSET UNITYSDK_OFFSET(0x1D8A2A50)
#define RPG_CLIENT_CHESSROGUEDIMENSIONINFO_GET_CHESSROGUEDIMENSIONDICT_OFFSET UNITYSDK_OFFSET(0x1D8A2C90)
#define RPG_CLIENT_CHESSROGUEDIMENSIONINFO_INIT_OFFSET UNITYSDK_OFFSET(0x1D8A1270)
#define RPG_CLIENT_CHESSROGUEDIMENSIONINFO_SET_CHESSROGUEDIMENSIONDICT_OFFSET UNITYSDK_OFFSET(0x1D8A2CA0)
#define RPG_CLIENT_CHESSROGUEDIMENSIONINFO_SYNCPROGRESSWITHDIMENSIONID_OFFSET UNITYSDK_OFFSET(0x1D8A1C00)
#define RPG_CLIENT_CHESSROGUEDIMENSIONINFO_SYNCPROGRESS_OFFSET UNITYSDK_OFFSET(0x1D8A28B0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChessRogueDimensionInfo_TypeDefinitionIndex = 68901;

	class ChessRogueDimensionInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ChessRogueDimensionDataItem*>* _ChessRogueDimensionDict_k__BackingField; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDIMENSIONINFO_CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDIMENSIONINFO_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDIMENSIONINFO_DISPOSE_OFFSET))(this);
		}

		::System::Void SyncProgress(::LLBHIMCMMEH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LLBHIMCMMEH*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDIMENSIONINFO_SYNCPROGRESS_OFFSET))(this, a1);
		}

		::System::Void SyncProgressWithDimensionID(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDIMENSIONINFO_SYNCPROGRESSWITHDIMENSIONID_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChessRogueDimensionDataItem*>* GetChessRogueDimensionDataItemList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChessRogueDimensionDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDIMENSIONINFO_GETCHESSROGUEDIMENSIONDATAITEMLIST_OFFSET))(this);
		}

		::System::UInt32 GetMaxTotalDimensionValue()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDIMENSIONINFO_GETMAXTOTALDIMENSIONVALUE_OFFSET))(this);
		}

		::System::UInt32 GetCurTotalDimensionValue()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDIMENSIONINFO_GETCURTOTALDIMENSIONVALUE_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ChessRogueDimensionDataItem*>* get_ChessRogueDimensionDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ChessRogueDimensionDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDIMENSIONINFO_GET_CHESSROGUEDIMENSIONDICT_OFFSET))(this);
		}

		::System::Void set_ChessRogueDimensionDict(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ChessRogueDimensionDataItem*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ChessRogueDimensionDataItem*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDIMENSIONINFO_SET_CHESSROGUEDIMENSIONDICT_OFFSET))(this, a1);
		}

	};
}
