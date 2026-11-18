#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UIBACKENDRELICCOLLECTWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15949310)
#define MOLEMOLE_UIBACKENDRELICCOLLECTWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15949350)
#define MOLEMOLE_UIBACKENDRELICCOLLECTWIDGETCONTROLLER___C__INITSORT_B__4_0_OFFSET UNITYSDK_OFFSET(0x15949360)

namespace MoleMole
{
	inline static constexpr unsigned int UIBackendRelicCollectWidgetController___c_TypeDefinitionIndex = 59301;

	class UIBackendRelicCollectWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIBackendRelicCollectWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x44D90);
		}
		static ::System::Func_2<::System::String*, ::System::String*>** StaticGet___9__4_0()
		{
			return (::System::Func_2<::System::String*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(UIBackendRelicCollectWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x44D98);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIBACKENDRELICCOLLECTWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBACKENDRELICCOLLECTWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::String* _InitSort_b__4_0(::System::String* filter)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBACKENDRELICCOLLECTWIDGETCONTROLLER___C__INITSORT_B__4_0_OFFSET))(this, filter);
		}
	};
}
