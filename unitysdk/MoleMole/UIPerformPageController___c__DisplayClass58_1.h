#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }

#define MOLEMOLE_UIPERFORMPAGECONTROLLER___C__DISPLAYCLASS58_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1841E510)
#define MOLEMOLE_UIPERFORMPAGECONTROLLER___C__DISPLAYCLASS58_1__ONPLAYCGEND_B__2_OFFSET UNITYSDK_OFFSET(0x1841E520)
#define MOLEMOLE_UIPERFORMPAGECONTROLLER___C__DISPLAYCLASS58_1__ONPLAYCGEND_B__3_OFFSET UNITYSDK_OFFSET(0x1841E5B0)
#define MOLEMOLE_UIPERFORMPAGECONTROLLER___C__DISPLAYCLASS58_1__ONPLAYCGEND_B__4_OFFSET UNITYSDK_OFFSET(0x1841E640)

namespace MoleMole
{
	inline static constexpr unsigned int UIPerformPageController___c__DisplayClass58_1_TypeDefinitionIndex = 78624;

	template <typename T>
	class UIPerformPageController___c__DisplayClass58_1 : public ::System::Object
	{
	public:
		::System::String* fadeout; // 0x10
		::System::Object* CS___8__locals1; // 0x18
		::System::Action* __9__4; // 0x20
		::System::Boolean nextComic; // 0x28
		::System::Boolean nextGalgame; // 0x29

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER___C__DISPLAYCLASS58_1__CTOR_OFFSET))(this);
		}

		::System::Void _OnPlayCGEnd_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER___C__DISPLAYCLASS58_1__ONPLAYCGEND_B__2_OFFSET))(this);
		}

		::System::Void _OnPlayCGEnd_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER___C__DISPLAYCLASS58_1__ONPLAYCGEND_B__3_OFFSET))(this);
		}

		::System::Void _OnPlayCGEnd_b__4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER___C__DISPLAYCLASS58_1__ONPLAYCGEND_B__4_OFFSET))(this);
		}
	};
}
