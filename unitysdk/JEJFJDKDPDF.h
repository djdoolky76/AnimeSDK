#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class ContentSizeFitter; }
namespace UnityEngine::UI { class GridLayoutGroup; }
namespace UnityEngine::UI { class VerticalLayoutGroup; }
namespace UnityEngine::UI::Extension { class UITabButtonGroup; }

#define JEJFJDKDPDF_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x19450070)
#define JEJFJDKDPDF_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1944FF00)
#define JEJFJDKDPDF__CTOR_OFFSET UNITYSDK_OFFSET(0x19450060)

inline static constexpr unsigned int JEJFJDKDPDF_TypeDefinitionIndex = 77829;

class JEJFJDKDPDF : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::Animation* OIKFFMHNCHB; // 0x18
	::UnityEngine::UI::ContentSizeFitter* PNJFIBJJCNI; // 0x20
	::UnityEngine::UI::VerticalLayoutGroup* HBLOJEJMKAA; // 0x28
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x30
	::UnityEngine::UI::Extension::UITabButtonGroup* FAGMEMGEGFP; // 0x38
	::UnityEngine::RectTransform* EHCDMOCLGGO; // 0x40
	::UnityEngine::UI::GridLayoutGroup* JEPOIIDDBNM; // 0x48
	::UnityEngine::RectTransform* MBKACMJJMBH; // 0x50
	::UnityEngine::Transform* OCJOCLEDABL; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEJFJDKDPDF__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JEJFJDKDPDF_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JEJFJDKDPDF_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
