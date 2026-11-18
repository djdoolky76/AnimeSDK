#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGKLEOOEBCA.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_UI_EXTENSION_UITABBUTTONGROUP___C__DISPLAYCLASS49_1__ADDLOCKTAB_B__2_OFFSET UNITYSDK_OFFSET(0x1C6C2480)
#define UNITYENGINE_UI_EXTENSION_UITABBUTTONGROUP___C__DISPLAYCLASS49_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6C2470)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UITabButtonGroup___c__DisplayClass49_1_TypeDefinitionIndex = 57568;

	template <typename T>
	class UITabButtonGroup___c__DisplayClass49_1 : public ::System::Object
	{
	public:
		::CGKLEOOEBCA lockTypeTips; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABBUTTONGROUP___C__DISPLAYCLASS49_1__CTOR_OFFSET))(this);
		}

		::System::Void _AddLockTab_b__2(::System::Int32 _)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABBUTTONGROUP___C__DISPLAYCLASS49_1__ADDLOCKTAB_B__2_OFFSET))(this, _);
		}
	};
}
