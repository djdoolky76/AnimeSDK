#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIMonoController.h"

class MCDDIIPEIPP;
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }

#define MOLEMOLE_UIVIDEOINFOPROPERTYSINGLEITEMWIDGET_SETDATA_OFFSET UNITYSDK_OFFSET(0x17196CD0)
#define MOLEMOLE_UIVIDEOINFOPROPERTYSINGLEITEMWIDGET__CTOR_OFFSET UNITYSDK_OFFSET(0x17196F50)

namespace MoleMole
{
	inline static constexpr unsigned int UIVideoInfoPropertySingleItemWidget_TypeDefinitionIndex = 57217;

	class UIVideoInfoPropertySingleItemWidget : public ::MoleMole::UIMonoController
	{
	public:
		::MCDDIIPEIPP* m_cfg; // 0x80
		::UnityEngine::UI::Image* m_icon; // 0x88
		::UnityEngine::GameObject* m_bg; // 0x90
		::UnityEngine::GameObject* m_empty; // 0x98
		::UnityEngine::UI::Text* m_text; // 0xA0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOINFOPROPERTYSINGLEITEMWIDGET__CTOR_OFFSET))(this);
		}

		::System::Void SetData(::MCDDIIPEIPP* cfg)
		{
			return ((::System::Void(*)(::PVOID, ::MCDDIIPEIPP*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOINFOPROPERTYSINGLEITEMWIDGET_SETDATA_OFFSET))(this, cfg);
		}
	};
}
