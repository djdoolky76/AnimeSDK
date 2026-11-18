#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HGAJKHIMKJP;
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_UIWHOLEEFFECTWIDGETCONTROLLER___C__DISPLAYCLASS10_1__CTOR_OFFSET UNITYSDK_OFFSET(0x13E7BA20)
#define MOLEMOLE_UIWHOLEEFFECTWIDGETCONTROLLER___C__DISPLAYCLASS10_1__INITCARD_B__1_OFFSET UNITYSDK_OFFSET(0x13E7BA30)

namespace MoleMole
{
	inline static constexpr unsigned int UIWholeEffectWidgetController___c__DisplayClass10_1_TypeDefinitionIndex = 83316;

	template <typename T>
	class UIWholeEffectWidgetController___c__DisplayClass10_1 : public ::System::Object
	{
	public:
		::HGAJKHIMKJP* card; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWHOLEEFFECTWIDGETCONTROLLER___C__DISPLAYCLASS10_1__CTOR_OFFSET))(this);
		}

		::System::Void _InitCard_b__1(::UnityEngine::GameObject* go, ::System::Int32 id)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWHOLEEFFECTWIDGETCONTROLLER___C__DISPLAYCLASS10_1__INITCARD_B__1_OFFSET))(this, go, id);
		}
	};
}
