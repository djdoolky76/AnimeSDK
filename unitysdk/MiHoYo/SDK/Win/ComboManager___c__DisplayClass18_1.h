#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK { class JSONNode; }
namespace System { class Object; }

#define MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS18_1_CTOR_OFFSET UNITYSDK_OFFSET(0x1BD29140)
#define MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS18_1__ONMDKORAUTHTICKETLOGIN_B__2_OFFSET UNITYSDK_OFFSET(0x1BD298C0)

namespace MiHoYo::SDK::Win
{
	template <typename T>
	class ComboManager___c__DisplayClass18_1 : public ::System::Object
	{
	public:
		::System::Object* CS___8__locals1; // 0x10
		::MiHoYo::SDK::JSONNode* extInfo; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS18_1_CTOR_OFFSET))(this);
		}

		::System::Void _OnMDKOrAuthTicketLogin_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS18_1__ONMDKORAUTHTICKETLOGIN_B__2_OFFSET))(this);
		}

	};
}
