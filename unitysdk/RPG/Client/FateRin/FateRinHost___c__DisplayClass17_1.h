#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class UIController; }
namespace System { class Object; }

#define RPG_CLIENT_FATERIN_FATERINHOST___C__DISPLAYCLASS17_1_CTOR_OFFSET UNITYSDK_OFFSET(0xCFA5F10)
#define RPG_CLIENT_FATERIN_FATERINHOST___C__DISPLAYCLASS17_1__SHOWCARDREWARDREPLACEDIALOG_B__1_OFFSET UNITYSDK_OFFSET(0xCFA5F20)
#define RPG_CLIENT_FATERIN_FATERINHOST___C__DISPLAYCLASS17_1__SHOWCARDREWARDREPLACEDIALOG_B__2_OFFSET UNITYSDK_OFFSET(0xCFA5F90)

namespace RPG::Client::FateRin
{
	template <typename T>
	class FateRinHost___c__DisplayClass17_1 : public ::System::Object
	{
	public:
		::System::Object* CS___8__locals1; // 0x10
		::RPG::Client::UIController* view; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_FATERINHOST___C__DISPLAYCLASS17_1_CTOR_OFFSET))(this);
		}

		::System::Void _ShowCardRewardReplaceDialog_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_FATERINHOST___C__DISPLAYCLASS17_1__SHOWCARDREWARDREPLACEDIALOG_B__1_OFFSET))(this);
		}

		::System::Void _ShowCardRewardReplaceDialog_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_FATERINHOST___C__DISPLAYCLASS17_1__SHOWCARDREWARDREPLACEDIALOG_B__2_OFFSET))(this);
		}

	};
}
