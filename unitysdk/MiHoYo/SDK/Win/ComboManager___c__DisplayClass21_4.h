#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK { class JSONNode; }
namespace System { class Object; }

#define MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS21_4_CTOR_OFFSET UNITYSDK_OFFSET(0x1BD2FD20)
#define MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS21_4__LOGIN_B__14_OFFSET UNITYSDK_OFFSET(0x1BD30360)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int ComboManager___c__DisplayClass21_4_TypeDefinitionIndex = 9421;

	template <typename T1, typename T2, typename T3, typename T4>
	class ComboManager___c__DisplayClass21_4 : public ::System::Object
	{
	public:
		::System::Object* CS___8__locals4; // 0x10
		::MiHoYo::SDK::JSONNode* extInfo; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS21_4_CTOR_OFFSET))(this);
		}

		::System::Void _Login_b__14()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS21_4__LOGIN_B__14_OFFSET))(this);
		}

	};
}
