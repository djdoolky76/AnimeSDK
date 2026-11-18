#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FFEOMOMFAKP;
class HHBFOPNELHO;
class OPCGCFHAMIP;
namespace MoleMole { class UIActivityHotPotLevelEndPopWindowController; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIACTIVITYHOTPOTLEVELENDPOPWINDOWCONTROLLER___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0x14BFD3D0)
#define MOLEMOLE_UIACTIVITYHOTPOTLEVELENDPOPWINDOWCONTROLLER___C__DISPLAYCLASS6_0__ONUIOPEN_B__0_OFFSET UNITYSDK_OFFSET(0x14BFD3E0)
#define MOLEMOLE_UIACTIVITYHOTPOTLEVELENDPOPWINDOWCONTROLLER___C__DISPLAYCLASS6_0__ONUIOPEN_B__1_OFFSET UNITYSDK_OFFSET(0x14BFD520)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityHotPotLevelEndPopWindowController___c__DisplayClass6_0_TypeDefinitionIndex = 73710;

	class UIActivityHotPotLevelEndPopWindowController___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::FFEOMOMFAKP* curLevelConfig; // 0x10
		::HHBFOPNELHO* model; // 0x18
		::System::Action_1<::OPCGCFHAMIP*>* __9__1; // 0x20
		::MoleMole::UIActivityHotPotLevelEndPopWindowController* __4__this; // 0x28
		::System::Int32 generalLevelID; // 0x30
		::System::Int32 rankID; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTLEVELENDPOPWINDOWCONTROLLER___C__DISPLAYCLASS6_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnUIOpen_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTLEVELENDPOPWINDOWCONTROLLER___C__DISPLAYCLASS6_0__ONUIOPEN_B__0_OFFSET))(this);
		}

		::System::Void _OnUIOpen_b__1(::OPCGCFHAMIP* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::OPCGCFHAMIP*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTLEVELENDPOPWINDOWCONTROLLER___C__DISPLAYCLASS6_0__ONUIOPEN_B__1_OFFSET))(this, rsp);
		}
	};
}
