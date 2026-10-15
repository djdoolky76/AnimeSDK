#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_WIN_NOTICEMANAGER___C__DISPLAYCLASS7_1_CTOR_OFFSET UNITYSDK_OFFSET(0x1BD768F0)
#define MIHOYO_SDK_WIN_NOTICEMANAGER___C__DISPLAYCLASS7_1__CHECKPOPNOTICE_B__0_OFFSET UNITYSDK_OFFSET(0x1BD7DE30)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int NoticeManager___c__DisplayClass7_1_TypeDefinitionIndex = 9399;

	template <typename T>
	class NoticeManager___c__DisplayClass7_1 : public ::System::Object
	{
	public:
		::System::Object* CS___8__locals1; // 0x10
		::System::String* requestLang; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_NOTICEMANAGER___C__DISPLAYCLASS7_1_CTOR_OFFSET))(this);
		}

		::System::Void _CheckPopNotice_b__0(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_NOTICEMANAGER___C__DISPLAYCLASS7_1__CHECKPOPNOTICE_B__0_OFFSET))(this, a1);
		}

	};
}
