#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class GameObject; }

#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS512_1__CTOR_OFFSET UNITYSDK_OFFSET(0x180A3BE0)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS512_1__SETAVATARNEW_B__3_OFFSET UNITYSDK_OFFSET(0x180A3BF0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGalgamePageController___c__DisplayClass512_1_TypeDefinitionIndex = 44774;

	template <typename T>
	class UIGalgamePageController___c__DisplayClass512_1 : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* npcGO; // 0x10
		::System::Object* CS___8__locals1; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS512_1__CTOR_OFFSET))(this);
		}

		::System::Void _SetAvatarNew_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS512_1__SETAVATARNEW_B__3_OFFSET))(this);
		}
	};
}
