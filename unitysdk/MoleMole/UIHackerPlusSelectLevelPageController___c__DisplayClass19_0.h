#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class JGNCILNLFEE;
namespace MoleMole { class UIHackerPlusSelectLevelPageController; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIHACKERPLUSSELECTLEVELPAGECONTROLLER___C__DISPLAYCLASS19_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16EEEED0)
#define MOLEMOLE_UIHACKERPLUSSELECTLEVELPAGECONTROLLER___C__DISPLAYCLASS19_0__ONPROGRESSCHANGE_B__0_OFFSET UNITYSDK_OFFSET(0x16EEEEE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHackerPlusSelectLevelPageController___c__DisplayClass19_0_TypeDefinitionIndex = 75886;

	class UIHackerPlusSelectLevelPageController___c__DisplayClass19_0 : public ::System::Object
	{
	public:
		::MoleMole::UIHackerPlusSelectLevelPageController* __4__this; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* maincityGameIdList; // 0x18
		::System::Int32 generalLevelID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKERPLUSSELECTLEVELPAGECONTROLLER___C__DISPLAYCLASS19_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnProgressChange_b__0(::JGNCILNLFEE* _)
		{
			return ((::System::Void(*)(::PVOID, ::JGNCILNLFEE*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKERPLUSSELECTLEVELPAGECONTROLLER___C__DISPLAYCLASS19_0__ONPROGRESSCHANGE_B__0_OFFSET))(this, _);
		}
	};
}
