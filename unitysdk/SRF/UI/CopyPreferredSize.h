#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UI/LayoutElement.h"
namespace UnityEngine { class RectTransform; }

#define SRF_UI_COPYPREFERREDSIZE_CTOR_OFFSET UNITYSDK_OFFSET(0x2002A850)
#define SRF_UI_COPYPREFERREDSIZE_GET_LAYOUTPRIORITY_OFFSET UNITYSDK_OFFSET(0x2002A840)
#define SRF_UI_COPYPREFERREDSIZE_GET_PREFERREDHEIGHT_OFFSET UNITYSDK_OFFSET(0x2002A7D0)
#define SRF_UI_COPYPREFERREDSIZE_GET_PREFERREDWIDTH_OFFSET UNITYSDK_OFFSET(0x2002A760)

namespace SRF::UI
{
	inline static constexpr unsigned int CopyPreferredSize_TypeDefinitionIndex = 36305;

	class CopyPreferredSize : public ::UnityEngine::UI::LayoutElement
	{
	public:
		::UnityEngine::RectTransform* CopySource; // 0x60
		::System::Single PaddingHeight; // 0x68
		::System::Single PaddingWidth; // 0x6C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_COPYPREFERREDSIZE_CTOR_OFFSET))(this);
		}

		::System::Single get_preferredWidth()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_COPYPREFERREDSIZE_GET_PREFERREDWIDTH_OFFSET))(this);
		}

		::System::Single get_preferredHeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_COPYPREFERREDSIZE_GET_PREFERREDHEIGHT_OFFSET))(this);
		}

		::System::Int32 get_layoutPriority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_COPYPREFERREDSIZE_GET_LAYOUTPRIORITY_OFFSET))(this);
		}

	};
}
