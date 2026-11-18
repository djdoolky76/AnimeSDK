#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UITIMEREGIONSWITCHING___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x167E96C0)
#define MOLEMOLE_UITIMEREGIONSWITCHING___C__CTOR_OFFSET UNITYSDK_OFFSET(0x167E9700)
#define MOLEMOLE_UITIMEREGIONSWITCHING___C__ONPROCESS_B__1_0_OFFSET UNITYSDK_OFFSET(0x167E9710)

namespace MoleMole
{
	inline static constexpr unsigned int UITimeRegionSwitching___c_TypeDefinitionIndex = 48504;

	class UITimeRegionSwitching___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UITimeRegionSwitching___c_TypeDefinitionIndex)->GetStaticField(0x48DE0);
		}
		static ::System::Action** StaticGet___9__1_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UITimeRegionSwitching___c_TypeDefinitionIndex)->GetStaticField(0x48DE8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UITIMEREGIONSWITCHING___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITIMEREGIONSWITCHING___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnProcess_b__1_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITIMEREGIONSWITCHING___C__ONPROCESS_B__1_0_OFFSET))(this);
		}
	};
}
