#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine::UI { class LayoutElement; }

#define MOLEMOLE_SCROLLVIEWDUMMYITEM_AWAKE_OFFSET UNITYSDK_OFFSET(0x14B1CC90)
#define MOLEMOLE_SCROLLVIEWDUMMYITEM_CDNBBPKICKA_OFFSET UNITYSDK_OFFSET(0x14B1D4B0)
#define MOLEMOLE_SCROLLVIEWDUMMYITEM_GETLAYOUTELEMENTSIZE_OFFSET UNITYSDK_OFFSET(0x14B1D100)
#define MOLEMOLE_SCROLLVIEWDUMMYITEM_SETLAYOUTELEMENTSIZE_OFFSET UNITYSDK_OFFSET(0x14B1CD60)
#define MOLEMOLE_SCROLLVIEWDUMMYITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x14B1D450)

namespace MoleMole
{
	inline static constexpr unsigned int ScrollViewDummyItem_TypeDefinitionIndex = 70114;

	class ScrollViewDummyItem : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Int32 DataIndex; // 0x18
		::System::Byte _padding0[0x4];
		::UnityEngine::UI::LayoutElement* GKCBJIHEMCF; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCROLLVIEWDUMMYITEM__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCROLLVIEWDUMMYITEM_AWAKE_OFFSET))(this);
		}

		::System::Void SetLayoutElementSize(::UnityEngine::Vector2 BEPMDFENBMH)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_SCROLLVIEWDUMMYITEM_SETLAYOUTELEMENTSIZE_OFFSET))(this, BEPMDFENBMH);
		}

		::UnityEngine::Vector2 GetLayoutElementSize()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCROLLVIEWDUMMYITEM_GETLAYOUTELEMENTSIZE_OFFSET))(this);
		}

		::System::Void CDNBBPKICKA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCROLLVIEWDUMMYITEM_CDNBBPKICKA_OFFSET))(this);
		}
	};
}
