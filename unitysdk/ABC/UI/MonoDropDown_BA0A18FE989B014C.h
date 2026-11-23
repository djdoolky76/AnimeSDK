#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace ABC::UI { class MonoDropDown; }
namespace ABC::UI { class MonoDropDown_DropdownItem; }
namespace ABC::UI { class MonoDropDown_OptionData; }

#define ABC_UI_MONODROPDOWN_BA0A18FE989B014C_BF3138F24160F012_OFFSET UNITYSDK_OFFSET(0x1FDB5A0)
#define ABC_UI_MONODROPDOWN_BA0A18FE989B014C_F0B92CA147ADB067_OFFSET UNITYSDK_OFFSET(0x1FDB5F0)
#define ABC_UI_MONODROPDOWN_BA0A18FE989B014C__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace ABC::UI
{
	inline static constexpr unsigned int MonoDropDown_BA0A18FE989B014C_TypeDefinitionIndex = 8017;

	class MonoDropDown_BA0A18FE989B014C : public ::System::Object
	{
	public:
		::ABC::UI::MonoDropDown_OptionData* F220A2D27F7C6B6C; // 0x10
		::ABC::UI::MonoDropDown_DropdownItem* EC35F88C87A83BEB; // 0x18
		::ABC::UI::MonoDropDown* A544919C800E2923; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_UI_MONODROPDOWN_BA0A18FE989B014C__CTOR_OFFSET))(this);
		}

		::System::Void BF3138F24160F012()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_UI_MONODROPDOWN_BA0A18FE989B014C_BF3138F24160F012_OFFSET))(this);
		}

		::System::Void F0B92CA147ADB067()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_UI_MONODROPDOWN_BA0A18FE989B014C_F0B92CA147ADB067_OFFSET))(this);
		}
	};
}
