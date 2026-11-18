#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::GalGame { class AudioEventItem; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS184_1__CTOR_OFFSET UNITYSDK_OFFSET(0x19C26A60)

namespace MoleMole
{
	inline static constexpr unsigned int UIGalgamePageController___c__DisplayClass184_1_TypeDefinitionIndex = 44758;

	template <typename T>
	class UIGalgamePageController___c__DisplayClass184_1 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::GalGame::AudioEventItem*>* audioEventItemList; // 0x10
		::System::Object* CS___8__locals1; // 0x18
		::System::String* voiceKey; // 0x20
		::System::Single textSpeed; // 0x28
		::System::Boolean isTypeWriter; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS184_1__CTOR_OFFSET))(this);
		}
	};
}
