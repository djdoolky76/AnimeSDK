#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/TextAnchor.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class ContentSizeFitter; }
namespace UnityEngine::UI { class GridLayoutGroup; }
namespace UnityEngine::UI { class VerticalLayoutGroup; }

#define HLIAOGOFCJP_JCJKACOPIHL_OFFSET UNITYSDK_OFFSET(0x17E55890)
#define HLIAOGOFCJP_JNOHNIFBKHO_OFFSET UNITYSDK_OFFSET(0x17E55AC0)
#define HLIAOGOFCJP_KOKHDFPHGCK_OFFSET UNITYSDK_OFFSET(0x17E55760)
#define HLIAOGOFCJP_LIEJAPEFDKJ_OFFSET UNITYSDK_OFFSET(0x17E56030)
#define HLIAOGOFCJP__CTOR_OFFSET UNITYSDK_OFFSET(0x17E55700)

inline static constexpr unsigned int HLIAOGOFCJP_TypeDefinitionIndex = 79161;

class HLIAOGOFCJP : public ::System::Object
{
public:
	::UnityEngine::RectTransform* HHBMCNKAABB; // 0x10
	::UnityEngine::UI::GridLayoutGroup* BJFHDECOHEE; // 0x18
	::UnityEngine::UI::VerticalLayoutGroup* MNHNMGOLPNN; // 0x20
	::UnityEngine::RectTransform* HOLMBCAIMHJ; // 0x28
	::UnityEngine::UI::ContentSizeFitter* GFMJDPJCKKH; // 0x30
	::UnityEngine::RectTransform* EIDCKGGOHEE; // 0x38
	::System::Single DIOKJFHKLNA; // 0x40
	::System::Boolean DIBNJGKIDPG; // 0x44
	::System::Byte _padding0[0x3];
	::UnityEngine::TextAnchor LINEJGDDOMC; // 0x48
	::UnityEngine::Vector2 FFJHGPPHIDJ; // 0x4C
	::System::Int32 DCMNKDOGGBO; // 0x54

	::System::Void _ctor(::UnityEngine::RectTransform* AFFIOAEMIEK, ::UnityEngine::UI::GridLayoutGroup* PLLKDFGOAGM, ::UnityEngine::RectTransform* OODKJPFOFHH, ::UnityEngine::UI::ContentSizeFitter* CAPMAOCJCEJ, ::UnityEngine::UI::VerticalLayoutGroup* BLHIJHIKKDC, ::UnityEngine::RectTransform* BMDFEEMJGDA, ::System::Boolean EBMILMJJKBK, ::UnityEngine::Vector2 KEFMPOMFNIB, ::System::Int32 FCLIPDCNDHO, ::UnityEngine::TextAnchor FNDOHMBJOOO, ::System::Single MDCOMGGCHLP)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*, ::UnityEngine::UI::GridLayoutGroup*, ::UnityEngine::RectTransform*, ::UnityEngine::UI::ContentSizeFitter*, ::UnityEngine::UI::VerticalLayoutGroup*, ::UnityEngine::RectTransform*, ::System::Boolean, ::UnityEngine::Vector2, ::System::Int32, ::UnityEngine::TextAnchor, ::System::Single))((::PBYTE)hIl2Cpp + HLIAOGOFCJP__CTOR_OFFSET))(this, AFFIOAEMIEK, PLLKDFGOAGM, OODKJPFOFHH, CAPMAOCJCEJ, BLHIJHIKKDC, BMDFEEMJGDA, EBMILMJJKBK, KEFMPOMFNIB, FCLIPDCNDHO, FNDOHMBJOOO, MDCOMGGCHLP);
	}

	::System::Single KOKHDFPHGCK()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HLIAOGOFCJP_KOKHDFPHGCK_OFFSET))(this);
	}

	::System::Void JCJKACOPIHL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLIAOGOFCJP_JCJKACOPIHL_OFFSET))(this);
	}

	::System::Void JNOHNIFBKHO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLIAOGOFCJP_JNOHNIFBKHO_OFFSET))(this);
	}

	static ::System::Single LIEJAPEFDKJ(::UnityEngine::RectTransform* KJOLJCHLHIM, ::UnityEngine::Vector2 KEFMPOMFNIB, ::System::Int32 FCLIPDCNDHO)
	{
		return ((::System::Single(*)(::UnityEngine::RectTransform*, ::UnityEngine::Vector2, ::System::Int32))((::PBYTE)hIl2Cpp + HLIAOGOFCJP_LIEJAPEFDKJ_OFFSET))(KJOLJCHLHIM, KEFMPOMFNIB, FCLIPDCNDHO);
	}
};
