#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GIFEKLIPAJD;
class ICIJJJLDLBM;
class OAEFGCLEHHO;
namespace System { class Action; }

#define MOLEMOLE_UIBASECHATPLAYCONTROLLER___C__DISPLAYCLASS53_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1704C060)
#define MOLEMOLE_UIBASECHATPLAYCONTROLLER___C__DISPLAYCLASS53_0__TRYOPTIONSYNCINTERACTIONTOSERVER_B__0_OFFSET UNITYSDK_OFFSET(0x1704C070)
#define MOLEMOLE_UIBASECHATPLAYCONTROLLER___C__DISPLAYCLASS53_0__TRYOPTIONSYNCINTERACTIONTOSERVER_B__1_OFFSET UNITYSDK_OFFSET(0x1704C0B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBaseChatPlayController___c__DisplayClass53_0_TypeDefinitionIndex = 85906;

	class UIBaseChatPlayController___c__DisplayClass53_0 : public ::System::Object
	{
	public:
		::System::Action* afterSync; // 0x10
		::ICIJJJLDLBM* runningInteraction; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLAYCONTROLLER___C__DISPLAYCLASS53_0__CTOR_OFFSET))(this);
		}

		::System::Void _TryOptionSyncInteractionToServer_b__0(::GIFEKLIPAJD* msg)
		{
			return ((::System::Void(*)(::PVOID, ::GIFEKLIPAJD*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLAYCONTROLLER___C__DISPLAYCLASS53_0__TRYOPTIONSYNCINTERACTIONTOSERVER_B__0_OFFSET))(this, msg);
		}

		::System::Void _TryOptionSyncInteractionToServer_b__1(::OAEFGCLEHHO* msg)
		{
			return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLAYCONTROLLER___C__DISPLAYCLASS53_0__TRYOPTIONSYNCINTERACTIONTOSERVER_B__1_OFFSET))(this, msg);
		}
	};
}
