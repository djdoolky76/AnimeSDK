#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define MOLEMOLE_UIGACHAPAGECONTROLLER___C__DISPLAYCLASS28_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1809A590)
#define MOLEMOLE_UIGACHAPAGECONTROLLER___C__DISPLAYCLASS28_0__DOQUICKBUY_B__1_OFFSET UNITYSDK_OFFSET(0x1809A5A0)
#define MOLEMOLE_UIGACHAPAGECONTROLLER___C__DISPLAYCLASS28_0__DOQUICKBUY_B__2_OFFSET UNITYSDK_OFFSET(0x1809A5B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGachaPageController___c__DisplayClass28_0_TypeDefinitionIndex = 58553;

	class UIGachaPageController___c__DisplayClass28_0 : public ::System::Object
	{
	public:
		::System::Action* onFailed; // 0x10
		::System::Action* onSuccess; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPAGECONTROLLER___C__DISPLAYCLASS28_0__CTOR_OFFSET))(this);
		}

		::System::Void _DoQuickBuy_b__1(::OAEFGCLEHHO* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPAGECONTROLLER___C__DISPLAYCLASS28_0__DOQUICKBUY_B__1_OFFSET))(this, rsp);
		}

		::System::Void _DoQuickBuy_b__2(::OAEFGCLEHHO* error)
		{
			return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPAGECONTROLLER___C__DISPLAYCLASS28_0__DOQUICKBUY_B__2_OFFSET))(this, error);
		}
	};
}
