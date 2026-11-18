#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_UICOMICPAGECONTROLLER___C__DISPLAYCLASS346_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1598BC20)

namespace MoleMole
{
	inline static constexpr unsigned int UIComicPageController___c__DisplayClass346_1_TypeDefinitionIndex = 84221;

	template <typename T>
	class UIComicPageController___c__DisplayClass346_1 : public ::System::Object
	{
	public:
		::System::Object* CS___8__locals1; // 0x10
		::System::String* pageStartAudioKey; // 0x18
		::System::Single audioDuration; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER___C__DISPLAYCLASS346_1__CTOR_OFFSET))(this);
		}
	};
}
