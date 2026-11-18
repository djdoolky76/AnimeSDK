#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Vector2Int.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER___C__DISPLAYCLASS36_2__CTOR_OFFSET UNITYSDK_OFFSET(0x17B945D0)
#define MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER___C__DISPLAYCLASS36_2__ONSELECTCHILD_B__0_OFFSET UNITYSDK_OFFSET(0x17B945E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIOverlordFeastServePageController___c__DisplayClass36_2_TypeDefinitionIndex = 66420;

	template <typename T1, typename T2>
	class UIOverlordFeastServePageController___c__DisplayClass36_2 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::Vector2Int>* validGrids; // 0x10
		::System::Object* CS___8__locals2; // 0x18
		::UnityEngine::Vector3 pushPos; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER___C__DISPLAYCLASS36_2__CTOR_OFFSET))(this);
		}

		::System::Void _OnSelectChild_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER___C__DISPLAYCLASS36_2__ONSELECTCHILD_B__0_OFFSET))(this);
		}
	};
}
