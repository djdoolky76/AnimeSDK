#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/LKMLFIAKFOO_KCCKEPMAEFC.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UIURBANMAPEROSIONPROGRESSWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x12C00950)
#define MOLEMOLE_UIURBANMAPEROSIONPROGRESSWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x12C00990)
#define MOLEMOLE_UIURBANMAPEROSIONPROGRESSWIDGETCONTROLLER___C__REFRESHBYDATA_B__9_0_OFFSET UNITYSDK_OFFSET(0x12C009A0)
#define MOLEMOLE_UIURBANMAPEROSIONPROGRESSWIDGETCONTROLLER___C__REFRESHNODES_B__13_0_OFFSET UNITYSDK_OFFSET(0x12C009B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapErosionProgressWidgetController___c_TypeDefinitionIndex = 71383;

	class UIUrbanMapErosionProgressWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Object*, ::System::UInt32>** StaticGet___9__9_0()
		{
			return (::System::Func_2<::System::Object*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(UIUrbanMapErosionProgressWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x50E00);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIUrbanMapErosionProgressWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x50E08);
		}
		static ::System::Func_2<::System::Object*, ::System::UInt32>** StaticGet___9__13_0()
		{
			return (::System::Func_2<::System::Object*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(UIUrbanMapErosionProgressWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x50E10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPEROSIONPROGRESSWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPEROSIONPROGRESSWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::UInt32 _RefreshByData_b__9_0(::LKMLFIAKFOO_KCCKEPMAEFC x)
		{
			return ((::System::UInt32(*)(::PVOID, ::LKMLFIAKFOO_KCCKEPMAEFC))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPEROSIONPROGRESSWIDGETCONTROLLER___C__REFRESHBYDATA_B__9_0_OFFSET))(this, x);
		}

		::System::UInt32 _RefreshNodes_b__13_0(::LKMLFIAKFOO_KCCKEPMAEFC x)
		{
			return ((::System::UInt32(*)(::PVOID, ::LKMLFIAKFOO_KCCKEPMAEFC))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPEROSIONPROGRESSWIDGETCONTROLLER___C__REFRESHNODES_B__13_0_OFFSET))(this, x);
		}
	};
}
