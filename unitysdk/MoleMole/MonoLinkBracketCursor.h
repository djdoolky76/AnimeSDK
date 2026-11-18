#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Image; }

#define MOLEMOLE_MONOLINKBRACKETCURSOR_GET_EDGEALIGNMENT_OFFSET UNITYSDK_OFFSET(0x1193BD90)
#define MOLEMOLE_MONOLINKBRACKETCURSOR_GET_LEFTBRACKETRT_OFFSET UNITYSDK_OFFSET(0x1193BDA0)
#define MOLEMOLE_MONOLINKBRACKETCURSOR_GET_REFERENCEFONTSIZE_OFFSET UNITYSDK_OFFSET(0x1193BD80)
#define MOLEMOLE_MONOLINKBRACKETCURSOR_GET_REFERENCEWIDTH_OFFSET UNITYSDK_OFFSET(0x1193BD70)
#define MOLEMOLE_MONOLINKBRACKETCURSOR_GET_RIGHTBRACKETRT_OFFSET UNITYSDK_OFFSET(0x1193BDB0)
#define MOLEMOLE_MONOLINKBRACKETCURSOR_GET_SLICEMINHEIGHT_OFFSET UNITYSDK_OFFSET(0x1193C070)
#define MOLEMOLE_MONOLINKBRACKETCURSOR_GET_SLICEMINWIDTH_OFFSET UNITYSDK_OFFSET(0x1193BDC0)
#define MOLEMOLE_MONOLINKBRACKETCURSOR_KLEGCPHPELN_OFFSET UNITYSDK_OFFSET(0x1193BDE0)
#define MOLEMOLE_MONOLINKBRACKETCURSOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1193C090)

namespace MoleMole
{
	inline static constexpr unsigned int MonoLinkBracketCursor_TypeDefinitionIndex = 66845;

	class MonoLinkBracketCursor : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single _referenceWidth; // 0x18
		::System::Single _referenceFontSize; // 0x1C
		::System::Single _edgeAlignment; // 0x20
		::System::Byte _padding0[0x4];
		::UnityEngine::RectTransform* _leftBracketRT; // 0x28
		::UnityEngine::RectTransform* _rightBracketRT; // 0x30
		::UnityEngine::UI::Image* _leftBracketImg; // 0x38
		::UnityEngine::UI::Image* _rightBracketImg; // 0x40
		::System::Single FJLPHKDDEHK; // 0x48
		::System::Single DCHOJAKPDEO; // 0x4C
		::System::Boolean NOCHDHBNMDG; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLINKBRACKETCURSOR__CTOR_OFFSET))(this);
		}

		::System::Single get_ReferenceWidth()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLINKBRACKETCURSOR_GET_REFERENCEWIDTH_OFFSET))(this);
		}

		::System::Single get_ReferenceFontSize()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLINKBRACKETCURSOR_GET_REFERENCEFONTSIZE_OFFSET))(this);
		}

		::System::Single get_EdgeAlignment()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLINKBRACKETCURSOR_GET_EDGEALIGNMENT_OFFSET))(this);
		}

		::UnityEngine::RectTransform* get_LeftBracketRT()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLINKBRACKETCURSOR_GET_LEFTBRACKETRT_OFFSET))(this);
		}

		::UnityEngine::RectTransform* get_RightBracketRT()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLINKBRACKETCURSOR_GET_RIGHTBRACKETRT_OFFSET))(this);
		}

		::System::Single get_SliceMinWidth()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLINKBRACKETCURSOR_GET_SLICEMINWIDTH_OFFSET))(this);
		}

		::System::Single get_SliceMinHeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLINKBRACKETCURSOR_GET_SLICEMINHEIGHT_OFFSET))(this);
		}

		::System::Void KLEGCPHPELN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLINKBRACKETCURSOR_KLEGCPHPELN_OFFSET))(this);
		}
	};
}
