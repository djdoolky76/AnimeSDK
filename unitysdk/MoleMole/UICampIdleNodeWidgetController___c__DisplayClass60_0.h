#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/DEDDPKGLKHI_LODLFMBCLAH.h"

class KOIDMLPJGML;

#define MOLEMOLE_UICAMPIDLENODEWIDGETCONTROLLER___C__DISPLAYCLASS60_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1966BD20)
#define MOLEMOLE_UICAMPIDLENODEWIDGETCONTROLLER___C__DISPLAYCLASS60_0__REFRESHEXPNODE_B__0_OFFSET UNITYSDK_OFFSET(0x1966BD30)
#define MOLEMOLE_UICAMPIDLENODEWIDGETCONTROLLER___C__DISPLAYCLASS60_0__REFRESHEXPNODE_B__1_OFFSET UNITYSDK_OFFSET(0x1966BE90)

namespace MoleMole
{
	inline static constexpr unsigned int UICampIdleNodeWidgetController___c__DisplayClass60_0_TypeDefinitionIndex = 72262;

	class UICampIdleNodeWidgetController___c__DisplayClass60_0 : public ::System::Object
	{
	public:
		::System::Boolean normalTaken; // 0x10
		::System::Boolean upTaken; // 0x11

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMPIDLENODEWIDGETCONTROLLER___C__DISPLAYCLASS60_0__CTOR_OFFSET))(this);
		}

		::KOIDMLPJGML* _RefreshExpNode_b__0(::DEDDPKGLKHI_LODLFMBCLAH x)
		{
			return ((::KOIDMLPJGML*(*)(::PVOID, ::DEDDPKGLKHI_LODLFMBCLAH))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMPIDLENODEWIDGETCONTROLLER___C__DISPLAYCLASS60_0__REFRESHEXPNODE_B__0_OFFSET))(this, x);
		}

		::KOIDMLPJGML* _RefreshExpNode_b__1(::DEDDPKGLKHI_LODLFMBCLAH x)
		{
			return ((::KOIDMLPJGML*(*)(::PVOID, ::DEDDPKGLKHI_LODLFMBCLAH))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMPIDLENODEWIDGETCONTROLLER___C__DISPLAYCLASS60_0__REFRESHEXPNODE_B__1_OFFSET))(this, x);
		}
	};
}
