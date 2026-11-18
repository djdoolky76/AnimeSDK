#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_UICOMICPAGECONTROLLER___C__DISPLAYCLASS362_2__CTOR_OFFSET UNITYSDK_OFFSET(0x180749B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIComicPageController___c__DisplayClass362_2_TypeDefinitionIndex = 84223;

	template <typename T1, typename T2>
	class UIComicPageController___c__DisplayClass362_2 : public ::System::Object
	{
	public:
		::System::Object* CS___8__locals2; // 0x10
		::System::String* endAudioKey; // 0x18
		::System::Single audioDuration; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER___C__DISPLAYCLASS362_2__CTOR_OFFSET))(this);
		}
	};
}
