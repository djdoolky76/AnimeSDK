#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CJNGKDMBMDA;
class IKHNMFDNANI;

#define MOLEMOLE_UIINLEVELPAUSERIDUSGOTBOOWIDGETCONTROLLER___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0x183C9570)
#define MOLEMOLE_UIINLEVELPAUSERIDUSGOTBOOWIDGETCONTROLLER___C__DISPLAYCLASS2_0__ONUIOPEN_B__0_OFFSET UNITYSDK_OFFSET(0x183C9580)
#define MOLEMOLE_UIINLEVELPAUSERIDUSGOTBOOWIDGETCONTROLLER___C__DISPLAYCLASS2_0__ONUIOPEN_B__1_OFFSET UNITYSDK_OFFSET(0x183C95A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelPauseRidusGotBooWidgetController___c__DisplayClass2_0_TypeDefinitionIndex = 84007;

	class UIInLevelPauseRidusGotBooWidgetController___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::IKHNMFDNANI* buffMap; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSERIDUSGOTBOOWIDGETCONTROLLER___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
		}

		::CJNGKDMBMDA* _OnUIOpen_b__0(::System::Int32 x)
		{
			return ((::CJNGKDMBMDA*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSERIDUSGOTBOOWIDGETCONTROLLER___C__DISPLAYCLASS2_0__ONUIOPEN_B__0_OFFSET))(this, x);
		}

		::CJNGKDMBMDA* _OnUIOpen_b__1(::System::Int32 x)
		{
			return ((::CJNGKDMBMDA*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSERIDUSGOTBOOWIDGETCONTROLLER___C__DISPLAYCLASS2_0__ONUIOPEN_B__1_OFFSET))(this, x);
		}
	};
}
