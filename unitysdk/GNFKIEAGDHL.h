#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EGAKKAGNPFH;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GNFKIEAGDHL_CTOR_OFFSET UNITYSDK_OFFSET(0x15B022C0)
#define GNFKIEAGDHL_GET_BATTLEENDROUND_OFFSET UNITYSDK_OFFSET(0x15B021E0)
#define GNFKIEAGDHL_GET_DEADAVATARIDLIST_OFFSET UNITYSDK_OFFSET(0x15B021C0)
#define GNFKIEAGDHL_GET_ISWIN_OFFSET UNITYSDK_OFFSET(0x15B02180)
#define GNFKIEAGDHL_GET_PROGRESSPERCENT_OFFSET UNITYSDK_OFFSET(0x15B021A0)
#define GNFKIEAGDHL_GET_ROUTEID_OFFSET UNITYSDK_OFFSET(0x15B02160)
#define GNFKIEAGDHL_PLGEBDDNCKC_OFFSET UNITYSDK_OFFSET(0x15B02200)
#define GNFKIEAGDHL_SET_BATTLEENDROUND_OFFSET UNITYSDK_OFFSET(0x15B021F0)
#define GNFKIEAGDHL_SET_DEADAVATARIDLIST_OFFSET UNITYSDK_OFFSET(0x15B021D0)
#define GNFKIEAGDHL_SET_ISWIN_OFFSET UNITYSDK_OFFSET(0x15B02190)
#define GNFKIEAGDHL_SET_PROGRESSPERCENT_OFFSET UNITYSDK_OFFSET(0x15B021B0)
#define GNFKIEAGDHL_SET_ROUTEID_OFFSET UNITYSDK_OFFSET(0x15B02170)

inline static constexpr unsigned int GNFKIEAGDHL_TypeDefinitionIndex = 63882;

	class GNFKIEAGDHL : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _DeadAvatarIdList_k__BackingField; // 0x10
		::System::UInt32 _BattleEndRound_k__BackingField; // 0x18
		::System::UInt32 _ProgressPercent_k__BackingField; // 0x1C
		::System::UInt32 _RouteID_k__BackingField; // 0x20
		::System::Boolean _IsWin_k__BackingField; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNFKIEAGDHL_CTOR_OFFSET))(this);
		}

		::System::UInt32 get_RouteID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GNFKIEAGDHL_GET_ROUTEID_OFFSET))(this);
		}

		::System::Void set_RouteID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GNFKIEAGDHL_SET_ROUTEID_OFFSET))(this, a1);
		}

		::System::Boolean get_IsWin()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GNFKIEAGDHL_GET_ISWIN_OFFSET))(this);
		}

		::System::Void set_IsWin(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GNFKIEAGDHL_SET_ISWIN_OFFSET))(this, a1);
		}

		::System::UInt32 get_ProgressPercent()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GNFKIEAGDHL_GET_PROGRESSPERCENT_OFFSET))(this);
		}

		::System::Void set_ProgressPercent(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GNFKIEAGDHL_SET_PROGRESSPERCENT_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_DeadAvatarIdList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNFKIEAGDHL_GET_DEADAVATARIDLIST_OFFSET))(this);
		}

		::System::Void set_DeadAvatarIdList(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + GNFKIEAGDHL_SET_DEADAVATARIDLIST_OFFSET))(this, a1);
		}

		::System::UInt32 get_BattleEndRound()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GNFKIEAGDHL_GET_BATTLEENDROUND_OFFSET))(this);
		}

		::System::Void set_BattleEndRound(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GNFKIEAGDHL_SET_BATTLEENDROUND_OFFSET))(this, a1);
		}

		::System::Void PLGEBDDNCKC(::EGAKKAGNPFH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EGAKKAGNPFH*))((::PBYTE)hIl2Cpp + GNFKIEAGDHL_PLGEBDDNCKC_OFFSET))(this, a1);
		}

	};
