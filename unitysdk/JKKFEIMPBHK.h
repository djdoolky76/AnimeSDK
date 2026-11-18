#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PBJOCICFNGK.h"
#include "unitysdk/LIBOIKJGAIH.h"

class IOOIHHOJOPI;
class MDKGDBLHLJG;
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class RectTransform; }

#define JKKFEIMPBHK_CJBFCLMFDOM_OFFSET UNITYSDK_OFFSET(0x1C364CD0)
#define JKKFEIMPBHK_DLEGGAJNLBH_OFFSET UNITYSDK_OFFSET(0x1C364BE0)
#define JKKFEIMPBHK_EJMLADDEHAE_OFFSET UNITYSDK_OFFSET(0x1C3649D0)
#define JKKFEIMPBHK_LKNBCFOKJLO_OFFSET UNITYSDK_OFFSET(0x1C364C40)
#define JKKFEIMPBHK_MOKINDNACHI_OFFSET UNITYSDK_OFFSET(0x1C364A80)
#define JKKFEIMPBHK_NPKBDILPMHJ_OFFSET UNITYSDK_OFFSET(0x1C364B50)
#define JKKFEIMPBHK_PILPKINFMBA_OFFSET UNITYSDK_OFFSET(0x1C364AC0)
#define JKKFEIMPBHK__CTOR_OFFSET UNITYSDK_OFFSET(0x1C364B00)

inline static constexpr unsigned int JKKFEIMPBHK_TypeDefinitionIndex = 92202;

class JKKFEIMPBHK : public ::PBJOCICFNGK
{
public:
	::MDKGDBLHLJG* GOICOOANBFP; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKKFEIMPBHK__CTOR_OFFSET))(this);
	}

	::System::Void EJMLADDEHAE(::LIBOIKJGAIH& EIEOJFEPMAB, ::IOOIHHOJOPI* IOKOLJDCKPN)
	{
		return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::IOOIHHOJOPI*))((::PBYTE)hIl2Cpp + JKKFEIMPBHK_EJMLADDEHAE_OFFSET))(this, EIEOJFEPMAB, IOKOLJDCKPN);
	}

	::System::Void MOKINDNACHI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKKFEIMPBHK_MOKINDNACHI_OFFSET))(this);
	}

	::System::Void PILPKINFMBA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKKFEIMPBHK_PILPKINFMBA_OFFSET))(this);
	}

	::System::Void NPKBDILPMHJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKKFEIMPBHK_NPKBDILPMHJ_OFFSET))(this);
	}

	::UnityEngine::CanvasGroup* DLEGGAJNLBH()
	{
		return ((::UnityEngine::CanvasGroup*(*)(::PVOID))((::PBYTE)hIl2Cpp + JKKFEIMPBHK_DLEGGAJNLBH_OFFSET))(this);
	}

	::System::Void LKNBCFOKJLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKKFEIMPBHK_LKNBCFOKJLO_OFFSET))(this);
	}

	::UnityEngine::RectTransform* CJBFCLMFDOM()
	{
		return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + JKKFEIMPBHK_CJBFCLMFDOM_OFFSET))(this);
	}
};
