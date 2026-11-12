#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
namespace RPG::Client { class FuncEntranceData; }
namespace RPG::Client { class WheelItem; }
namespace RPG::GameCore { class WheelSelectConfigRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_WHEELITEM_CREATEALL_OFFSET UNITYSDK_OFFSET(0xEF244E0)
#define RPG_CLIENT_WHEELITEM_CREATE_1_OFFSET UNITYSDK_OFFSET(0xEF24710)
#define RPG_CLIENT_WHEELITEM_CREATE_OFFSET UNITYSDK_OFFSET(0xEF24810)
#define RPG_CLIENT_WHEELITEM_CTOR_OFFSET UNITYSDK_OFFSET(0xEF24870)
#define RPG_CLIENT_WHEELITEM_GETEIGHTWHEELDEFAULTINDEXBYORDER_OFFSET UNITYSDK_OFFSET(0xEF24880)
#define RPG_CLIENT_WHEELITEM_GETFOURWHEELDEFAULTINDEXBYORDER_OFFSET UNITYSDK_OFFSET(0xEF24A20)
#define RPG_CLIENT_WHEELITEM_GET_FOURSLOTORDER_OFFSET UNITYSDK_OFFSET(0xEF24360)
#define RPG_CLIENT_WHEELITEM_GET_FUNCNAME_OFFSET UNITYSDK_OFFSET(0xEF242D0)
#define RPG_CLIENT_WHEELITEM_GET_GOTOID_OFFSET UNITYSDK_OFFSET(0xEF24400)
#define RPG_CLIENT_WHEELITEM_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xEF24380)
#define RPG_CLIENT_WHEELITEM_GET_INDEXID_OFFSET UNITYSDK_OFFSET(0xEF242B0)
#define RPG_CLIENT_WHEELITEM_GET_ISCANSHOW_OFFSET UNITYSDK_OFFSET(0xEF244C0)
#define RPG_CLIENT_WHEELITEM_GET_ORDER_OFFSET UNITYSDK_OFFSET(0xEF24340)
#define RPG_CLIENT_WHEELITEM_GET_REDDOT_OFFSET UNITYSDK_OFFSET(0xEF24460)
#define RPG_CLIENT_WHEELITEM_GET_UNLOCKID_OFFSET UNITYSDK_OFFSET(0xEF243A0)

namespace RPG::Client
{
	inline static constexpr unsigned int WheelItem_TypeDefinitionIndex = 62733;

	class WheelItem : public ::System::Object
	{
	public:
		::RPG::GameCore::WheelSelectConfigRow* _Meta; // 0x10
		::RPG::Client::FuncEntranceData* _FunctionEntrance; // 0x18
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
