#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::UI { class Dropdown; }
namespace UnityEngine::UI { class Dropdown_DropdownItem; }

#define UNITYENGINE_UI_DROPDOWN_B1BFBD532996A4EC_E3578CED3D1211BE_OFFSET UNITYSDK_OFFSET(0x43DA5A0)
#define UNITYENGINE_UI_DROPDOWN_B1BFBD532996A4EC__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int Dropdown_B1BFBD532996A4EC_TypeDefinitionIndex = 18646;

	class Dropdown_B1BFBD532996A4EC : public ::System::Object
	{
	public:
		::UnityEngine::UI::Dropdown_DropdownItem* E92CE3F842DA72CE; // 0x10
		::UnityEngine::UI::Dropdown* E57594B99F869E8B; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_B1BFBD532996A4EC__CTOR_OFFSET))(this);
		}

		::System::Void E3578CED3D1211BE(::System::Boolean BB8C609F76620E45)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_B1BFBD532996A4EC_E3578CED3D1211BE_OFFSET))(this, BB8C609F76620E45);
		}
	};
}
