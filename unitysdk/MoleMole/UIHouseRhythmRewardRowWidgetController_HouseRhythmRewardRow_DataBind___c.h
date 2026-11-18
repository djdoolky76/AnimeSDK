#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define MOLEMOLE_UIHOUSERHYTHMREWARDROWWIDGETCONTROLLER_HOUSERHYTHMREWARDROW_DATABIND___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1978E2A0)
#define MOLEMOLE_UIHOUSERHYTHMREWARDROWWIDGETCONTROLLER_HOUSERHYTHMREWARDROW_DATABIND___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1978E2E0)
#define MOLEMOLE_UIHOUSERHYTHMREWARDROWWIDGETCONTROLLER_HOUSERHYTHMREWARDROW_DATABIND___C__ONCREATEPROPERTY_B__16_0_OFFSET UNITYSDK_OFFSET(0x1978E2F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHouseRhythmRewardRowWidgetController_HouseRhythmRewardRow_DataBind___c_TypeDefinitionIndex = 64756;

	class UIHouseRhythmRewardRowWidgetController_HouseRhythmRewardRow_DataBind___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIHouseRhythmRewardRowWidgetController_HouseRhythmRewardRow_DataBind___c_TypeDefinitionIndex)->GetStaticField(0x3EFE0);
		}
		static ::System::Func_1<::System::Boolean>** StaticGet___9__16_0()
		{
			return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UIHouseRhythmRewardRowWidgetController_HouseRhythmRewardRow_DataBind___c_TypeDefinitionIndex)->GetStaticField(0x3EFE8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUSERHYTHMREWARDROWWIDGETCONTROLLER_HOUSERHYTHMREWARDROW_DATABIND___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUSERHYTHMREWARDROWWIDGETCONTROLLER_HOUSERHYTHMREWARDROW_DATABIND___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _OnCreateProperty_b__16_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUSERHYTHMREWARDROWWIDGETCONTROLLER_HOUSERHYTHMREWARDROW_DATABIND___C__ONCREATEPROPERTY_B__16_0_OFFSET))(this);
		}
	};
}
