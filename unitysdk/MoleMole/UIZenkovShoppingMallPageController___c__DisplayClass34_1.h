#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BDDCKGJPAPN;
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UIZENKOVSHOPPINGMALLPAGECONTROLLER___C__DISPLAYCLASS34_1__CTOR_OFFSET UNITYSDK_OFFSET(0x18F6E5B0)
#define MOLEMOLE_UIZENKOVSHOPPINGMALLPAGECONTROLLER___C__DISPLAYCLASS34_1__TRYSELECTITEMBYID_B__1_OFFSET UNITYSDK_OFFSET(0x18F6E5C0)
#define MOLEMOLE_UIZENKOVSHOPPINGMALLPAGECONTROLLER___C__DISPLAYCLASS34_1__TRYSELECTITEMBYID_B__2_OFFSET UNITYSDK_OFFSET(0x18F6E650)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovShoppingMallPageController___c__DisplayClass34_1_TypeDefinitionIndex = 92329;

	template <typename T>
	class UIZenkovShoppingMallPageController___c__DisplayClass34_1 : public ::System::Object
	{
	public:
		::System::Object* CS___8__locals1; // 0x10
		::System::Func_2<::BDDCKGJPAPN*, ::System::Boolean>* __9__2; // 0x18
		::System::Int32 targetGoodsId; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVSHOPPINGMALLPAGECONTROLLER___C__DISPLAYCLASS34_1__CTOR_OFFSET))(this);
		}

		::System::Void _TrySelectItemById_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVSHOPPINGMALLPAGECONTROLLER___C__DISPLAYCLASS34_1__TRYSELECTITEMBYID_B__1_OFFSET))(this);
		}

		::System::Boolean _TrySelectItemById_b__2(::BDDCKGJPAPN* good)
		{
			return ((::System::Boolean(*)(::PVOID, ::BDDCKGJPAPN*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVSHOPPINGMALLPAGECONTROLLER___C__DISPLAYCLASS34_1__TRYSELECTITEMBYID_B__2_OFFSET))(this, good);
		}
	};
}
