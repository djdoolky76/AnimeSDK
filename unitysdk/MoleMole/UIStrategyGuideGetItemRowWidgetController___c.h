#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UISTRATEGYGUIDEGETITEMROWWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14CD3CD0)
#define MOLEMOLE_UISTRATEGYGUIDEGETITEMROWWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14CD3D10)
#define MOLEMOLE_UISTRATEGYGUIDEGETITEMROWWIDGETCONTROLLER___C__ONSPECIALTRAININGGETBTNCLICK_B__14_1_OFFSET UNITYSDK_OFFSET(0x14CD3D20)

namespace MoleMole
{
	inline static constexpr unsigned int UIStrategyGuideGetItemRowWidgetController___c_TypeDefinitionIndex = 76241;

	class UIStrategyGuideGetItemRowWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Int32, ::System::String*>** StaticGet___9__14_1()
		{
			return (::System::Func_2<::System::Int32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(UIStrategyGuideGetItemRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x39120);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIStrategyGuideGetItemRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x39128);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UISTRATEGYGUIDEGETITEMROWWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTRATEGYGUIDEGETITEMROWWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::String* _OnSpecialTrainingGetBtnClick_b__14_1(::System::Int32 _)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTRATEGYGUIDEGETITEMROWWIDGETCONTROLLER___C__ONSPECIALTRAININGGETBTNCLICK_B__14_1_OFFSET))(this, _);
		}
	};
}
