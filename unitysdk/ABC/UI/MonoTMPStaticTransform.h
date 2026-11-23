#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E68AA4EB51923C98/E4B55EE0EC5CC11E.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace TMPro { class TextMeshProUGUI; }

#define ABC_UI_MONOTMPSTATICTRANSFORM_E6D2EC58C9A33F06_OFFSET UNITYSDK_OFFSET(0x1EEECB0)
#define ABC_UI_MONOTMPSTATICTRANSFORM_FF46B8617C3F9473_OFFSET UNITYSDK_OFFSET(0x1EEEAD0)
#define ABC_UI_MONOTMPSTATICTRANSFORM__CTOR_OFFSET UNITYSDK_OFFSET(0x1EEEB60)

namespace ABC::UI
{
	inline static constexpr unsigned int MonoTMPStaticTransform_TypeDefinitionIndex = 7423;

	class MonoTMPStaticTransform
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* TransformDatas; // 0x28
		::System::Collections::Generic::List_1<::E68AA4EB51923C98::E4B55EE0EC5CC11E>* SupportedLanguages; // 0x30
		::System::Boolean Loop; // 0x38
		::System::Byte _padding0[0x7];
		::TMPro::TextMeshProUGUI* BE6E0D3D487E1FA8; // 0x40

		::TMPro::TextMeshProUGUI* E6D2EC58C9A33F06()
		{
			return ((::TMPro::TextMeshProUGUI*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_UI_MONOTMPSTATICTRANSFORM_E6D2EC58C9A33F06_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_UI_MONOTMPSTATICTRANSFORM__CTOR_OFFSET))(this);
		}

		::System::Void FF46B8617C3F9473()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_UI_MONOTMPSTATICTRANSFORM_FF46B8617C3F9473_OFFSET))(this);
		}
	};
}
