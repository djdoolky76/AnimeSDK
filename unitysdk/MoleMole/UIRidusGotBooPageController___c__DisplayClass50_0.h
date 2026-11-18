#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DNDMJGGEAFB;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIRIDUSGOTBOOPAGECONTROLLER___C__DISPLAYCLASS50_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1649B470)
#define MOLEMOLE_UIRIDUSGOTBOOPAGECONTROLLER___C__DISPLAYCLASS50_0__UPDATEFEVERSCORE_B__0_OFFSET UNITYSDK_OFFSET(0x1649B480)

namespace MoleMole
{
	inline static constexpr unsigned int UIRidusGotBooPageController___c__DisplayClass50_0_TypeDefinitionIndex = 45858;

	class UIRidusGotBooPageController___c__DisplayClass50_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::DNDMJGGEAFB*>* toRemoveList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOPAGECONTROLLER___C__DISPLAYCLASS50_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _UpdateFeverScore_b__0(::DNDMJGGEAFB* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::DNDMJGGEAFB*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOPAGECONTROLLER___C__DISPLAYCLASS50_0__UPDATEFEVERSCORE_B__0_OFFSET))(this, x);
		}
	};
}
