#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
namespace RPG::Client { class FuncEntranceData; }
namespace RPG::Client { class WheelItem; }
namespace RPG::GameCore { class WheelSelectConfigRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_WHEELITEM_CREATEALL_OFFSET UNITYSDK_OFFSET(0x1BC8B3A0)
#define RPG_CLIENT_WHEELITEM_CREATE_1_OFFSET UNITYSDK_OFFSET(0x1BC8B5D0)
#define RPG_CLIENT_WHEELITEM_CREATE_OFFSET UNITYSDK_OFFSET(0x1BC8B6D0)
#define RPG_CLIENT_WHEELITEM_CTOR_OFFSET UNITYSDK_OFFSET(0x1BC8B730)
#define RPG_CLIENT_WHEELITEM_GETEIGHTWHEELDEFAULTINDEXBYORDER_OFFSET UNITYSDK_OFFSET(0x1BC8B740)
#define RPG_CLIENT_WHEELITEM_GETFOURWHEELDEFAULTINDEXBYORDER_OFFSET UNITYSDK_OFFSET(0x1BC8B8E0)
#define RPG_CLIENT_WHEELITEM_GET_FOURSLOTORDER_OFFSET UNITYSDK_OFFSET(0x1BC8B220)
#define RPG_CLIENT_WHEELITEM_GET_FUNCNAME_OFFSET UNITYSDK_OFFSET(0x1BC8B190)
#define RPG_CLIENT_WHEELITEM_GET_GOTOID_OFFSET UNITYSDK_OFFSET(0x1BC8B2C0)
#define RPG_CLIENT_WHEELITEM_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x1BC8B240)
#define RPG_CLIENT_WHEELITEM_GET_INDEXID_OFFSET UNITYSDK_OFFSET(0x1BC8B170)
#define RPG_CLIENT_WHEELITEM_GET_ISCANSHOW_OFFSET UNITYSDK_OFFSET(0x1BC8B380)
#define RPG_CLIENT_WHEELITEM_GET_ORDER_OFFSET UNITYSDK_OFFSET(0x1BC8B200)
#define RPG_CLIENT_WHEELITEM_GET_REDDOT_OFFSET UNITYSDK_OFFSET(0x1BC8B320)
#define RPG_CLIENT_WHEELITEM_GET_UNLOCKID_OFFSET UNITYSDK_OFFSET(0x1BC8B260)

namespace RPG::Client
{
	inline static constexpr unsigned int WheelItem_TypeDefinitionIndex = 62733;

	class WheelItem : public ::System::Object
	{
	public:
		::RPG::Client::FuncEntranceData* _FunctionEntrance; // 0x10
		::RPG::GameCore::WheelSelectConfigRow* _Meta; // 0x18
		::System::Void _ctor(::RPG::GameCore::WheelSelectConfigRow* a1, ::RPG::Client::FuncEntranceData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::WheelSelectConfigRow*, ::RPG::Client::FuncEntranceData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_WHEELITEM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::UInt32 get_IndexID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WHEELITEM_GET_INDEXID_OFFSET))(this);
		}

		::RPG::Client::TextID get_FuncName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WHEELITEM_GET_FUNCNAME_OFFSET))(this);
		}

		::System::UInt32 get_Order()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WHEELITEM_GET_ORDER_OFFSET))(this);
		}

		::System::UInt32 get_FourSlotOrder()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WHEELITEM_GET_FOURSLOTORDER_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WHEELITEM_GET_ICONPATH_OFFSET))(this);
		}

		::System::UInt32 get_UnlockID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WHEELITEM_GET_UNLOCKID_OFFSET))(this);
		}

		::System::UInt32 get_GotoID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WHEELITEM_GET_GOTOID_OFFSET))(this);
		}

		::System::String* get_RedDot()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WHEELITEM_GET_REDDOT_OFFSET))(this);
		}

		::System::Boolean get_IsCanShow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WHEELITEM_GET_ISCANSHOW_OFFSET))(this);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::WheelItem*>* CreateAll()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::WheelItem*>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_WHEELITEM_CREATEALL_OFFSET))();
		}

		static ::RPG::Client::WheelItem* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::WheelItem*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_WHEELITEM_CREATE_OFFSET))(a1);
		}

		static ::RPG::Client::WheelItem* Create_1(::RPG::GameCore::WheelSelectConfigRow* a1)
		{
			return ((::RPG::Client::WheelItem*(*)(::RPG::GameCore::WheelSelectConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_WHEELITEM_CREATE_1_OFFSET))(a1);
		}

		static ::System::Int32 GetEightWheelDefaultIndexByOrder(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_WHEELITEM_GETEIGHTWHEELDEFAULTINDEXBYORDER_OFFSET))(a1);
		}

		static ::System::Int32 GetFourWheelDefaultIndexByOrder(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_WHEELITEM_GETFOURWHEELDEFAULTINDEXBYORDER_OFFSET))(a1);
		}

	};
}
