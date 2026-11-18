#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIHACKERPLUSSELECTLEVELPAGECONTROLLER___C__DISPLAYCLASS18_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16EEED90)
#define MOLEMOLE_UIHACKERPLUSSELECTLEVELPAGECONTROLLER___C__DISPLAYCLASS18_0__ONCLICKLEVEL_B__0_OFFSET UNITYSDK_OFFSET(0x16EEEDA0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHackerPlusSelectLevelPageController___c__DisplayClass18_0_TypeDefinitionIndex = 75885;

	class UIHackerPlusSelectLevelPageController___c__DisplayClass18_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* gameIDList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKERPLUSSELECTLEVELPAGECONTROLLER___C__DISPLAYCLASS18_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnClickLevel_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKERPLUSSELECTLEVELPAGECONTROLLER___C__DISPLAYCLASS18_0__ONCLICKLEVEL_B__0_OFFSET))(this);
		}
	};
}
