#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AEMAPGKPPJA;
class BMCNDLNONMO;
class LMNCBIDKHLF;
class MOOKMKEKMKC;
namespace RPG::Client { class ChessRogueAeonDataItem; }
namespace RPG::Client { class ChessRogueModifierDataItem; }
namespace RPG::Client { class RogueAeonBuffInfo; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHESSROGUEAEONINFO_ADDAEONMODIFIER_OFFSET UNITYSDK_OFFSET(0x1D88EA20)
#define RPG_CLIENT_CHESSROGUEAEONINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D88F000)
#define RPG_CLIENT_CHESSROGUEAEONINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D88E360)
#define RPG_CLIENT_CHESSROGUEAEONINFO_GETCHESSROGUEAEONSORTEDDATA_OFFSET UNITYSDK_OFFSET(0x1D88EB80)
#define RPG_CLIENT_CHESSROGUEAEONINFO_GET_AEONBUFFINFO_OFFSET UNITYSDK_OFFSET(0x1D88EE50)
#define RPG_CLIENT_CHESSROGUEAEONINFO_GET_AEONMODIFIERS_OFFSET UNITYSDK_OFFSET(0x1D88EE30)
#define RPG_CLIENT_CHESSROGUEAEONINFO_GET_CHESSROGUEAEONDATADICT_OFFSET UNITYSDK_OFFSET(0x1D88EDB0)
#define RPG_CLIENT_CHESSROGUEAEONINFO_GET_CURAEONMODIFIERVALUE_OFFSET UNITYSDK_OFFSET(0x1D88EE10)
#define RPG_CLIENT_CHESSROGUEAEONINFO_GET_SELECTABLEAEONIDLIST_OFFSET UNITYSDK_OFFSET(0x1D88EDD0)
#define RPG_CLIENT_CHESSROGUEAEONINFO_GET_SELECTEDAEONDATA_OFFSET UNITYSDK_OFFSET(0x1D88EF30)
#define RPG_CLIENT_CHESSROGUEAEONINFO_GET_SELECTEDAEONID_OFFSET UNITYSDK_OFFSET(0x1D88EDF0)
#define RPG_CLIENT_CHESSROGUEAEONINFO_INIT_OFFSET UNITYSDK_OFFSET(0x1D88E0A0)
#define RPG_CLIENT_CHESSROGUEAEONINFO_RESETPARAMS_OFFSET UNITYSDK_OFFSET(0x1D88E970)
#define RPG_CLIENT_CHESSROGUEAEONINFO_SET_AEONMODIFIERS_OFFSET UNITYSDK_OFFSET(0x1D88EE40)
#define RPG_CLIENT_CHESSROGUEAEONINFO_SET_CHESSROGUEAEONDATADICT_OFFSET UNITYSDK_OFFSET(0x1D88EDC0)
#define RPG_CLIENT_CHESSROGUEAEONINFO_SET_CURAEONMODIFIERVALUE_OFFSET UNITYSDK_OFFSET(0x1D88EE20)
#define RPG_CLIENT_CHESSROGUEAEONINFO_SET_SELECTABLEAEONIDLIST_OFFSET UNITYSDK_OFFSET(0x1D88EDE0)
#define RPG_CLIENT_CHESSROGUEAEONINFO_SET_SELECTEDAEONID_OFFSET UNITYSDK_OFFSET(0x1D88EE00)
#define RPG_CLIENT_CHESSROGUEAEONINFO_SYNCCHESSROGUEAEONINFO_OFFSET UNITYSDK_OFFSET(0x1D88E680)
#define RPG_CLIENT_CHESSROGUEAEONINFO_SYNCCHESSROGUEAEONMODIFIERVALUE_OFFSET UNITYSDK_OFFSET(0x1D88E9C0)
#define RPG_CLIENT_CHESSROGUEAEONINFO_SYNCROGUENOUSBRANCH_OFFSET UNITYSDK_OFFSET(0x1D88EB30)
#define RPG_CLIENT_CHESSROGUEAEONINFO__INITCHESSROGUEAEONDATAS_OFFSET UNITYSDK_OFFSET(0x1D88E0F0)
#define RPG_CLIENT_CHESSROGUEAEONINFO__REFRESHAEONMODIFIERS_OFFSET UNITYSDK_OFFSET(0x1D88E7C0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChessRogueAeonInfo_TypeDefinitionIndex = 68845;

	class ChessRogueAeonInfo : public ::System::Object
	{
	public:
		::RPG::Client::RogueAeonBuffInfo* _AeonBuffInfo; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ChessRogueAeonDataItem*>* _ChessRogueAeonDataDict_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::System::UInt32>* _SelectableAeonIDList_k__BackingField; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::ChessRogueModifierDataItem*>* _AeonModifiers_k__BackingField; // 0x28
		::System::Int32 _CurAeonModifierValue_k__BackingField; // 0x30
		::System::UInt32 _SelectedAeonID_k__BackingField; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAEONINFO_CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAEONINFO_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAEONINFO_DISPOSE_OFFSET))(this);
		}

		::System::Void SyncChessRogueAeonInfo(::AEMAPGKPPJA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AEMAPGKPPJA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAEONINFO_SYNCCHESSROGUEAEONINFO_OFFSET))(this, a1);
		}

		::System::Void ResetParams()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAEONINFO_RESETPARAMS_OFFSET))(this);
		}

		::System::Void SyncChessRogueAeonModifierValue(::System::UInt32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAEONINFO_SYNCCHESSROGUEAEONMODIFIERVALUE_OFFSET))(this, a1, a2);
		}

		::System::Void AddAeonModifier(::BMCNDLNONMO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BMCNDLNONMO*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAEONINFO_ADDAEONMODIFIER_OFFSET))(this, a1);
		}

		::System::Void SyncRogueNousBranch(::MOOKMKEKMKC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MOOKMKEKMKC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAEONINFO_SYNCROGUENOUSBRANCH_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChessRogueAeonDataItem*>* GetChessRogueAeonSortedData()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChessRogueAeonDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAEONINFO_GETCHESSROGUEAEONSORTEDDATA_OFFSET))(this);
		}

		::System::Void _InitChessRogueAeonDatas()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAEONINFO__INITCHESSROGUEAEONDATAS_OFFSET))(this);
		}

		::System::Void _RefreshAeonModifiers(::LMNCBIDKHLF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LMNCBIDKHLF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAEONINFO__REFRESHAEONMODIFIERS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ChessRogueAeonDataItem*>* get_ChessRogueAeonDataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ChessRogueAeonDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAEONINFO_GET_CHESSROGUEAEONDATADICT_OFFSET))(this);
		}

		::System::Void set_ChessRogueAeonDataDict(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ChessRogueAeonDataItem*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ChessRogueAeonDataItem*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAEONINFO_SET_CHESSROGUEAEONDATADICT_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_SelectableAeonIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAEONINFO_GET_SELECTABLEAEONIDLIST_OFFSET))(this);
		}

		::System::Void set_SelectableAeonIDList(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAEONINFO_SET_SELECTABLEAEONIDLIST_OFFSET))(this, a1);
		}

		::System::UInt32 get_SelectedAeonID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAEONINFO_GET_SELECTEDAEONID_OFFSET))(this);
		}

		::System::Void set_SelectedAeonID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAEONINFO_SET_SELECTEDAEONID_OFFSET))(this, a1);
		}

		::System::Int32 get_CurAeonModifierValue()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAEONINFO_GET_CURAEONMODIFIERVALUE_OFFSET))(this);
		}

		::System::Void set_CurAeonModifierValue(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAEONINFO_SET_CURAEONMODIFIERVALUE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChessRogueModifierDataItem*>* get_AeonModifiers()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChessRogueModifierDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAEONINFO_GET_AEONMODIFIERS_OFFSET))(this);
		}

		::System::Void set_AeonModifiers(::System::Collections::Generic::List_1<::RPG::Client::ChessRogueModifierDataItem*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ChessRogueModifierDataItem*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAEONINFO_SET_AEONMODIFIERS_OFFSET))(this, a1);
		}

		::RPG::Client::RogueAeonBuffInfo* get_AeonBuffInfo()
		{
			return ((::RPG::Client::RogueAeonBuffInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAEONINFO_GET_AEONBUFFINFO_OFFSET))(this);
		}

		::RPG::Client::ChessRogueAeonDataItem* get_SelectedAeonData()
		{
			return ((::RPG::Client::ChessRogueAeonDataItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAEONINFO_GET_SELECTEDAEONDATA_OFFSET))(this);
		}

	};
}
