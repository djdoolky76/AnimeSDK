#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class Sprite; }

#define UNITYENGINE_UI_DROPDOWN_OPTIONDATA_GET_IMAGE_OFFSET UNITYSDK_OFFSET(0x17F35A0)
#define UNITYENGINE_UI_DROPDOWN_OPTIONDATA_GET_TEXT_OFFSET UNITYSDK_OFFSET(0x17D5EA0)
#define UNITYENGINE_UI_DROPDOWN_OPTIONDATA_SET_IMAGE_OFFSET UNITYSDK_OFFSET(0x17F35D0)
#define UNITYENGINE_UI_DROPDOWN_OPTIONDATA_SET_TEXT_OFFSET UNITYSDK_OFFSET(0x17D6400)
#define UNITYENGINE_UI_DROPDOWN_OPTIONDATA__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1778980)
#define UNITYENGINE_UI_DROPDOWN_OPTIONDATA__CTOR_2_OFFSET UNITYSDK_OFFSET(0x19259E0)
#define UNITYENGINE_UI_DROPDOWN_OPTIONDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int Dropdown_OptionData_TypeDefinitionIndex = 18643;

	class Dropdown_OptionData : public ::System::Object
	{
	public:
		::System::String* m_Text; // 0x10
		::UnityEngine::Sprite* m_Image; // 0x18

		::System::String* get_text()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_OPTIONDATA_GET_TEXT_OFFSET))(this);
		}

		::System::Void set_text(::System::String* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_OPTIONDATA_SET_TEXT_OFFSET))(this, E937D4885DAA1AE8);
		}

		::UnityEngine::Sprite* get_image()
		{
			return ((::UnityEngine::Sprite*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_OPTIONDATA_GET_IMAGE_OFFSET))(this);
		}

		::System::Void set_image(::UnityEngine::Sprite* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Sprite*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_OPTIONDATA_SET_IMAGE_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_OPTIONDATA__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* E97E8D008427A296)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_OPTIONDATA__CTOR_1_OFFSET))(this, E97E8D008427A296);
		}

		::System::Void _ctor_2(::UnityEngine::Sprite* F49848274A97D1B6)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Sprite*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_OPTIONDATA__CTOR_2_OFFSET))(this, F49848274A97D1B6);
		}
	};
}
