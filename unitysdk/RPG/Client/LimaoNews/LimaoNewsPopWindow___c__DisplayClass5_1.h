#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOPWINDOW___C__DISPLAYCLASS5_1_CTOR_OFFSET UNITYSDK_OFFSET(0xDE0A5F0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOPWINDOW___C__DISPLAYCLASS5_1___SHOWFROM_B__0_OFFSET UNITYSDK_OFFSET(0xDE0A600)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsPopWindow___c__DisplayClass5_1_TypeDefinitionIndex = 83130;

	template <typename T>
	class LimaoNewsPopWindow___c__DisplayClass5_1 : public ::System::Object
	{
	public:
		::System::Object* CS___8__locals1; // 0x10
		::System::Int32 nextIndex; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOPWINDOW___C__DISPLAYCLASS5_1_CTOR_OFFSET))(this);
		}

		::System::Void __ShowFrom_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOPWINDOW___C__DISPLAYCLASS5_1___SHOWFROM_B__0_OFFSET))(this);
		}

	};
}
