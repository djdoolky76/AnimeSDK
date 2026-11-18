#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define MOLEMOLE_UISUIBIANTEMPLEMAINPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17DB0820)
#define MOLEMOLE_UISUIBIANTEMPLEMAINPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17DB0860)
#define MOLEMOLE_UISUIBIANTEMPLEMAINPAGECONTROLLER___C__REFRESHTRACK_B__43_0_OFFSET UNITYSDK_OFFSET(0x17DB0870)

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianTempleMainPageController___c_TypeDefinitionIndex = 42373;

	class UISuibianTempleMainPageController___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UISuibianTempleMainPageController___c_TypeDefinitionIndex)->GetStaticField(0x3C6D0);
		}
		static ::System::Func_1<::System::Boolean>** StaticGet___9__43_0()
		{
			return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UISuibianTempleMainPageController___c_TypeDefinitionIndex)->GetStaticField(0x3C6D8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEMAINPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEMAINPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _RefreshTrack_b__43_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEMAINPAGECONTROLLER___C__REFRESHTRACK_B__43_0_OFFSET))(this);
		}
	};
}
