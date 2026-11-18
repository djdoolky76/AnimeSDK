#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/DEDDPKGLKHI_LODLFMBCLAH.h"

class KOIDMLPJGML;

#define MOLEMOLE_UICAMPIDLEPAGECONTROLLER___C__DISPLAYCLASS196_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18000410)
#define MOLEMOLE_UICAMPIDLEPAGECONTROLLER___C__DISPLAYCLASS196_0__REFRESHEXPREWARDNODEINFO_B__0_OFFSET UNITYSDK_OFFSET(0x18000420)
#define MOLEMOLE_UICAMPIDLEPAGECONTROLLER___C__DISPLAYCLASS196_0__REFRESHEXPREWARDNODEINFO_B__1_OFFSET UNITYSDK_OFFSET(0x18000580)

namespace MoleMole
{
	inline static constexpr unsigned int UICampIdlePageController___c__DisplayClass196_0_TypeDefinitionIndex = 38827;

	class UICampIdlePageController___c__DisplayClass196_0 : public ::System::Object
	{
	public:
		::System::Boolean hasTakeUp; // 0x10
		::System::Boolean hasTakeNormal; // 0x11
		::System::Boolean isUpAvatar; // 0x12

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMPIDLEPAGECONTROLLER___C__DISPLAYCLASS196_0__CTOR_OFFSET))(this);
		}

		::KOIDMLPJGML* _RefreshExpRewardNodeInfo_b__0(::DEDDPKGLKHI_LODLFMBCLAH x)
		{
			return ((::KOIDMLPJGML*(*)(::PVOID, ::DEDDPKGLKHI_LODLFMBCLAH))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMPIDLEPAGECONTROLLER___C__DISPLAYCLASS196_0__REFRESHEXPREWARDNODEINFO_B__0_OFFSET))(this, x);
		}

		::KOIDMLPJGML* _RefreshExpRewardNodeInfo_b__1(::DEDDPKGLKHI_LODLFMBCLAH x)
		{
			return ((::KOIDMLPJGML*(*)(::PVOID, ::DEDDPKGLKHI_LODLFMBCLAH))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMPIDLEPAGECONTROLLER___C__DISPLAYCLASS196_0__REFRESHEXPREWARDNODEINFO_B__1_OFFSET))(this, x);
		}
	};
}
