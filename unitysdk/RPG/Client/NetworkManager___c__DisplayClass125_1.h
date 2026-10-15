#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define RPG_CLIENT_NETWORKMANAGER___C__DISPLAYCLASS125_1_CTOR_OFFSET UNITYSDK_OFFSET(0xD9D0470)
#define RPG_CLIENT_NETWORKMANAGER___C__DISPLAYCLASS125_1__PINGBYUDP_B__1_OFFSET UNITYSDK_OFFSET(0xD9D0480)

namespace RPG::Client
{
	template <typename T>
	class NetworkManager___c__DisplayClass125_1 : public ::System::Object
	{
	public:
		::System::Collections::Generic::IList_1<::System::UInt64>* rttList; // 0x10
		::System::Object* CS___8__locals1; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKMANAGER___C__DISPLAYCLASS125_1_CTOR_OFFSET))(this);
		}

		::System::Void _PingByUdp_b__1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKMANAGER___C__DISPLAYCLASS125_1__PINGBYUDP_B__1_OFFSET))(this, a1);
		}

	};
}
