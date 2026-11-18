#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HGAJKHIMKJP;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIAREAGOODSSUBWIDGETCONTROLLER___C__DISPLAYCLASS8_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1886BAB0)
#define MOLEMOLE_UIAREAGOODSSUBWIDGETCONTROLLER___C__DISPLAYCLASS8_0__REFRESHCARDNUM_B__1_OFFSET UNITYSDK_OFFSET(0x1886BAC0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAreaGoodsSubWidgetController___c__DisplayClass8_0_TypeDefinitionIndex = 39821;

	class UIAreaGoodsSubWidgetController___c__DisplayClass8_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* sameGenreList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAREAGOODSSUBWIDGETCONTROLLER___C__DISPLAYCLASS8_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _RefreshCardNum_b__1(::HGAJKHIMKJP* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::HGAJKHIMKJP*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAREAGOODSSUBWIDGETCONTROLLER___C__DISPLAYCLASS8_0__REFRESHCARDNUM_B__1_OFFSET))(this, x);
		}
	};
}
