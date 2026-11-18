#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GIFEKLIPAJD;
class ICIJJJLDLBM;
class OAEFGCLEHHO;
namespace System { class Action; }

#define MOLEMOLE_UIBASECHATPLAYCONTROLLER___C__DISPLAYCLASS54_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18D35130)
#define MOLEMOLE_UIBASECHATPLAYCONTROLLER___C__DISPLAYCLASS54_0__TRYNOOPTIONSYNCINTERACTIONTOSERVER_B__0_OFFSET UNITYSDK_OFFSET(0x18D35140)
#define MOLEMOLE_UIBASECHATPLAYCONTROLLER___C__DISPLAYCLASS54_0__TRYNOOPTIONSYNCINTERACTIONTOSERVER_B__1_OFFSET UNITYSDK_OFFSET(0x18D35180)

namespace MoleMole
{
	inline static constexpr unsigned int UIBaseChatPlayController___c__DisplayClass54_0_TypeDefinitionIndex = 85908;

	class UIBaseChatPlayController___c__DisplayClass54_0 : public ::System::Object
	{
	public:
		::System::Action* afterSync; // 0x10
		::ICIJJJLDLBM* runningInteraction; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLAYCONTROLLER___C__DISPLAYCLASS54_0__CTOR_OFFSET))(this);
		}

		::System::Void _TryNoOptionSyncInteractionToServer_b__0(::GIFEKLIPAJD* msg)
		{
			return ((::System::Void(*)(::PVOID, ::GIFEKLIPAJD*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLAYCONTROLLER___C__DISPLAYCLASS54_0__TRYNOOPTIONSYNCINTERACTIONTOSERVER_B__0_OFFSET))(this, msg);
		}

		::System::Void _TryNoOptionSyncInteractionToServer_b__1(::OAEFGCLEHHO* msg)
		{
			return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLAYCONTROLLER___C__DISPLAYCLASS54_0__TRYNOOPTIONSYNCINTERACTIONTOSERVER_B__1_OFFSET))(this, msg);
		}
	};
}
