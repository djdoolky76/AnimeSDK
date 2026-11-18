#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BDDCKGJPAPN;
namespace MoleMole { class UIZenkovShoppingMallPageController; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UIZENKOVSHOPPINGMALLPAGECONTROLLER___C__DISPLAYCLASS34_0__CTOR_OFFSET UNITYSDK_OFFSET(0x120A08F0)
#define MOLEMOLE_UIZENKOVSHOPPINGMALLPAGECONTROLLER___C__DISPLAYCLASS34_0__TRYSELECTITEMBYID_B__0_OFFSET UNITYSDK_OFFSET(0x120A0900)
#define MOLEMOLE_UIZENKOVSHOPPINGMALLPAGECONTROLLER___C__DISPLAYCLASS34_0__TRYSELECTITEMBYID_B__3_OFFSET UNITYSDK_OFFSET(0x120A0990)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovShoppingMallPageController___c__DisplayClass34_0_TypeDefinitionIndex = 92332;

	class UIZenkovShoppingMallPageController___c__DisplayClass34_0 : public ::System::Object
	{
	public:
		::System::Func_2<::BDDCKGJPAPN*, ::System::Boolean>* __9__3; // 0x10
		::MoleMole::UIZenkovShoppingMallPageController* __4__this; // 0x18
		::System::Int32 targetItemId; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVSHOPPINGMALLPAGECONTROLLER___C__DISPLAYCLASS34_0__CTOR_OFFSET))(this);
		}

		::System::Void _TrySelectItemById_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVSHOPPINGMALLPAGECONTROLLER___C__DISPLAYCLASS34_0__TRYSELECTITEMBYID_B__0_OFFSET))(this);
		}

		::System::Boolean _TrySelectItemById_b__3(::BDDCKGJPAPN* good)
		{
			return ((::System::Boolean(*)(::PVOID, ::BDDCKGJPAPN*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVSHOPPINGMALLPAGECONTROLLER___C__DISPLAYCLASS34_0__TRYSELECTITEMBYID_B__3_OFFSET))(this, good);
		}
	};
}
