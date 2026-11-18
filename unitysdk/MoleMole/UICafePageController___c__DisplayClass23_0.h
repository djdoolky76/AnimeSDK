#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EFCCPGCGLIE;
namespace MoleMole { class UICafePageController; }

#define MOLEMOLE_UICAFEPAGECONTROLLER___C__DISPLAYCLASS23_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18D40030)
#define MOLEMOLE_UICAFEPAGECONTROLLER___C__DISPLAYCLASS23_0__STARTSHOWGETCAFECUTSCENE_B__0_OFFSET UNITYSDK_OFFSET(0x18D40040)

namespace MoleMole
{
	inline static constexpr unsigned int UICafePageController___c__DisplayClass23_0_TypeDefinitionIndex = 52444;

	class UICafePageController___c__DisplayClass23_0 : public ::System::Object
	{
	public:
		::MoleMole::UICafePageController* __4__this; // 0x10
		::EFCCPGCGLIE* cafeItem; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAFEPAGECONTROLLER___C__DISPLAYCLASS23_0__CTOR_OFFSET))(this);
		}

		::System::Void _StartShowGetCafeCutScene_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAFEPAGECONTROLLER___C__DISPLAYCLASS23_0__STARTSHOWGETCAFECUTSCENE_B__0_OFFSET))(this);
		}
	};
}
