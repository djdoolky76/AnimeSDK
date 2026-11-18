#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BPHCDHABODP;
class KLCLKCPLKHE;
namespace MoleMole { class UIRidusGotBooChangeClothPageController; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIRIDUSGOTBOOCHANGECLOTHPAGECONTROLLER___C__DISPLAYCLASS82_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18FF9E10)
#define MOLEMOLE_UIRIDUSGOTBOOCHANGECLOTHPAGECONTROLLER___C__DISPLAYCLASS82_0__TRYSAVEFASHIONPART_B__0_OFFSET UNITYSDK_OFFSET(0x18FF9E20)

namespace MoleMole
{
	inline static constexpr unsigned int UIRidusGotBooChangeClothPageController___c__DisplayClass82_0_TypeDefinitionIndex = 62999;

	class UIRidusGotBooChangeClothPageController___c__DisplayClass82_0 : public ::System::Object
	{
	public:
		::MoleMole::UIRidusGotBooChangeClothPageController* __4__this; // 0x10
		::System::Action_1<::System::Boolean>* cb; // 0x18
		::System::Boolean showSucceedTips; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOCHANGECLOTHPAGECONTROLLER___C__DISPLAYCLASS82_0__CTOR_OFFSET))(this);
		}

		::System::Void _TrySaveFashionPart_b__0(::BPHCDHABODP* rsp, ::KLCLKCPLKHE* req)
		{
			return ((::System::Void(*)(::PVOID, ::BPHCDHABODP*, ::KLCLKCPLKHE*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOCHANGECLOTHPAGECONTROLLER___C__DISPLAYCLASS82_0__TRYSAVEFASHIONPART_B__0_OFFSET))(this, rsp, req);
		}
	};
}
