#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KOIDMLPJGML;
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UIBATTLEINFOWIDGETCONTROLLERBASE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16EAE300)
#define MOLEMOLE_UIBATTLEINFOWIDGETCONTROLLERBASE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16EAE340)
#define MOLEMOLE_UIBATTLEINFOWIDGETCONTROLLERBASE___C__INTERNALREFRESHVIEW_B__24_0_OFFSET UNITYSDK_OFFSET(0x16EAE350)

namespace MoleMole
{
	inline static constexpr unsigned int UIBattleInfoWidgetControllerBase___c_TypeDefinitionIndex = 81284;

	class UIBattleInfoWidgetControllerBase___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIBattleInfoWidgetControllerBase___c_TypeDefinitionIndex)->GetStaticField(0x4D930);
		}
		static ::System::Func_2<::KOIDMLPJGML*, ::System::Boolean>** StaticGet___9__24_0()
		{
			return (::System::Func_2<::KOIDMLPJGML*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UIBattleInfoWidgetControllerBase___c_TypeDefinitionIndex)->GetStaticField(0x4D938);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIBATTLEINFOWIDGETCONTROLLERBASE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBATTLEINFOWIDGETCONTROLLERBASE___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _InternalRefreshView_b__24_0(::KOIDMLPJGML* t)
		{
			return ((::System::Boolean(*)(::PVOID, ::KOIDMLPJGML*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBATTLEINFOWIDGETCONTROLLERBASE___C__INTERNALREFRESHVIEW_B__24_0_OFFSET))(this, t);
		}
	};
}
