#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define MOLEMOLE_UIPHOTOWALLPAGECONTROLLER___C__DISPLAYCLASS64_1__CTOR_OFFSET UNITYSDK_OFFSET(0x147EABD0)
#define MOLEMOLE_UIPHOTOWALLPAGECONTROLLER___C__DISPLAYCLASS64_1__LATEUPDATE_B__0_OFFSET UNITYSDK_OFFSET(0x147EABE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIPhotoWallPageController___c__DisplayClass64_1_TypeDefinitionIndex = 46563;

	template <typename T>
	class UIPhotoWallPageController___c__DisplayClass64_1 : public ::System::Object
	{
	public:
		::System::Object* CS___8__locals1; // 0x10
		::UnityEngine::Vector2 currentPos; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALLPAGECONTROLLER___C__DISPLAYCLASS64_1__CTOR_OFFSET))(this);
		}

		::System::Void _LateUpdate_b__0(::System::Single v)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALLPAGECONTROLLER___C__DISPLAYCLASS64_1__LATEUPDATE_B__0_OFFSET))(this, v);
		}
	};
}
