#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Animation; }

#define MOLEMOLE_UIINTERKNOTPOSTROWWIDGETCONTROLLER___C__DISPLAYCLASS26_1__CTOR_OFFSET UNITYSDK_OFFSET(0x173F1DD0)
#define MOLEMOLE_UIINTERKNOTPOSTROWWIDGETCONTROLLER___C__DISPLAYCLASS26_1__PLAYIMAGEANIMATION_B__1_OFFSET UNITYSDK_OFFSET(0x173F1DE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIInterKnotPostRowWidgetController___c__DisplayClass26_1_TypeDefinitionIndex = 63668;

	template <typename T>
	class UIInterKnotPostRowWidgetController___c__DisplayClass26_1 : public ::System::Object
	{
	public:
		::System::Object* CS___8__locals1; // 0x10
		::UnityEngine::Animation* anim; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTPOSTROWWIDGETCONTROLLER___C__DISPLAYCLASS26_1__CTOR_OFFSET))(this);
		}

		::System::Void _PlayImageAnimation_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTPOSTROWWIDGETCONTROLLER___C__DISPLAYCLASS26_1__PLAYIMAGEANIMATION_B__1_OFFSET))(this);
		}
	};
}
