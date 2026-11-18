#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::GalGame { class AudioEventItem; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS182_3__CTOR_OFFSET UNITYSDK_OFFSET(0x173C8940)

namespace MoleMole
{
	inline static constexpr unsigned int UIGalgamePageController___c__DisplayClass182_3_TypeDefinitionIndex = 44753;

	template <typename T1, typename T2, typename T3>
	class UIGalgamePageController___c__DisplayClass182_3 : public ::System::Object
	{
	public:
		::System::Object* CS___8__locals3; // 0x10
		::System::Collections::Generic::List_1<::MoleMole::GalGame::AudioEventItem*>* triggerAfterVoAudioList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS182_3__CTOR_OFFSET))(this);
		}
	};
}
