#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CJPPNKFGIPB;
namespace MoleMole { class UserLocalDataItem; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIMECHBOOPREPPAGECONTROLLER___C__DISPLAYCLASS15_1__CLICKSCRIPTACTION_B__1_OFFSET UNITYSDK_OFFSET(0x17966900)
#define MOLEMOLE_UIMECHBOOPREPPAGECONTROLLER___C__DISPLAYCLASS15_1__CLICKSCRIPTACTION_B__2_OFFSET UNITYSDK_OFFSET(0x17966AB0)
#define MOLEMOLE_UIMECHBOOPREPPAGECONTROLLER___C__DISPLAYCLASS15_1__CLICKSCRIPTACTION_B__5_OFFSET UNITYSDK_OFFSET(0x17966E50)
#define MOLEMOLE_UIMECHBOOPREPPAGECONTROLLER___C__DISPLAYCLASS15_1__CTOR_OFFSET UNITYSDK_OFFSET(0x179668F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMechBooPrepPageController___c__DisplayClass15_1_TypeDefinitionIndex = 43052;

	template <typename T>
	class UIMechBooPrepPageController___c__DisplayClass15_1 : public ::System::Object
	{
	public:
		::MoleMole::UserLocalDataItem* localData; // 0x10
		::System::Action_1<::CJPPNKFGIPB*>* __9__5; // 0x18
		::System::Object* CS___8__locals1; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOPREPPAGECONTROLLER___C__DISPLAYCLASS15_1__CTOR_OFFSET))(this);
		}

		::System::Void _ClickScriptAction_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOPREPPAGECONTROLLER___C__DISPLAYCLASS15_1__CLICKSCRIPTACTION_B__1_OFFSET))(this);
		}

		::System::Void _ClickScriptAction_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOPREPPAGECONTROLLER___C__DISPLAYCLASS15_1__CLICKSCRIPTACTION_B__2_OFFSET))(this);
		}

		::System::Void _ClickScriptAction_b__5(::CJPPNKFGIPB* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::CJPPNKFGIPB*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOPREPPAGECONTROLLER___C__DISPLAYCLASS15_1__CLICKSCRIPTACTION_B__5_OFFSET))(this, rsp);
		}
	};
}
