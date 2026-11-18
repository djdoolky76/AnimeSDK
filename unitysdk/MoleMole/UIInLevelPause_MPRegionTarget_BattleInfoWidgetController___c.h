#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ILMKONAJBGC_CFBPHFJJEFC.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UIINLEVELPAUSE_MPREGIONTARGET_BATTLEINFOWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18F581F0)
#define MOLEMOLE_UIINLEVELPAUSE_MPREGIONTARGET_BATTLEINFOWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18F58230)
#define MOLEMOLE_UIINLEVELPAUSE_MPREGIONTARGET_BATTLEINFOWIDGETCONTROLLER___C__REFRESHREGIONINFO_B__5_0_OFFSET UNITYSDK_OFFSET(0x18F58240)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelPause_MPRegionTarget_BattleInfoWidgetController___c_TypeDefinitionIndex = 40224;

	class UIInLevelPause_MPRegionTarget_BattleInfoWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIInLevelPause_MPRegionTarget_BattleInfoWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x4AC80);
		}
		static ::System::Func_2<::System::Object*, ::System::Int32>** StaticGet___9__5_0()
		{
			return (::System::Func_2<::System::Object*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIInLevelPause_MPRegionTarget_BattleInfoWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x4AC88);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSE_MPREGIONTARGET_BATTLEINFOWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSE_MPREGIONTARGET_BATTLEINFOWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _RefreshRegionInfo_b__5_0(::ILMKONAJBGC_CFBPHFJJEFC r)
		{
			return ((::System::Int32(*)(::PVOID, ::ILMKONAJBGC_CFBPHFJJEFC))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSE_MPREGIONTARGET_BATTLEINFOWIDGETCONTROLLER___C__REFRESHREGIONINFO_B__5_0_OFFSET))(this, r);
		}
	};
}
