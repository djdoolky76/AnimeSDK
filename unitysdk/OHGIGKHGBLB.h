#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/MoleMole/Vector2Int.h"
#include "unitysdk/UnityEngine/Vector2.h"

class NFGCGMFFCFO;
class ZzzUiCurveGraphic_CurveSegment;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class RectTransform; }

#define OHGIGKHGBLB_EOLCMFIEPLI_OFFSET UNITYSDK_OFFSET(0x601FF0)
#define OHGIGKHGBLB__CTOR_OFFSET UNITYSDK_OFFSET(0x601FE0)

inline static constexpr unsigned int OHGIGKHGBLB_TypeDefinitionIndex = 75821;

struct alignas(8) OHGIGKHGBLB
{
	// static const ::System::Single LLOLIGPJOCF; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::Object*, ::NFGCGMFFCFO*>* NPHAOPKMIEA; // 0x10
	::UnityEngine::RectTransform* OBLEMFDIIOD; // 0x18

	::System::Void _ctor(::UnityEngine::RectTransform* EMDOIDLAFDB)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + OHGIGKHGBLB__CTOR_OFFSET))(this, EMDOIDLAFDB);
	}

	::ZzzUiCurveGraphic_CurveSegment* EOLCMFIEPLI(::MoleMole::Vector2Int KDEHMPGOCEP, ::MoleMole::Vector2Int PADJNMGMGHO, ::UnityEngine::Vector2 AENOEFFHHEM, ::UnityEngine::Vector2 CNJMEAHCLDH)
	{
		return ((::ZzzUiCurveGraphic_CurveSegment*(*)(::PVOID, ::MoleMole::Vector2Int, ::MoleMole::Vector2Int, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + OHGIGKHGBLB_EOLCMFIEPLI_OFFSET))(this, KDEHMPGOCEP, PADJNMGMGHO, AENOEFFHHEM, CNJMEAHCLDH);
	}
};
