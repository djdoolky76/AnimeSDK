#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KIBCMAJOLIM;
namespace MoleMole { class UIHIADoubleWeekActivityPageController; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIHIADOUBLEWEEKACTIVITYPAGECONTROLLER___C__DISPLAYCLASS30_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18E66370)
#define MOLEMOLE_UIHIADOUBLEWEEKACTIVITYPAGECONTROLLER___C__DISPLAYCLASS30_0__SHOWBINGOTIP_B__0_OFFSET UNITYSDK_OFFSET(0x18E66380)

namespace MoleMole
{
	inline static constexpr unsigned int UIHIADoubleWeekActivityPageController___c__DisplayClass30_0_TypeDefinitionIndex = 55983;

	class UIHIADoubleWeekActivityPageController___c__DisplayClass30_0 : public ::System::Object
	{
	public:
		::MoleMole::UIHIADoubleWeekActivityPageController* __4__this; // 0x10
		::System::Collections::Generic::List_1<::KIBCMAJOLIM*>* gridList; // 0x18
		::System::Collections::Generic::List_1<::System::Int32>* gridIndexList; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHIADOUBLEWEEKACTIVITYPAGECONTROLLER___C__DISPLAYCLASS30_0__CTOR_OFFSET))(this);
		}

		::System::Void _ShowBingoTip_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHIADOUBLEWEEKACTIVITYPAGECONTROLLER___C__DISPLAYCLASS30_0__SHOWBINGOTIP_B__0_OFFSET))(this);
		}
	};
}
