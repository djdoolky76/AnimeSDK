#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FGCOIBFFCHB;
class LGINJIKKBJA;
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define AOKJBNONOAH_FIGNCGFGOBM_OFFSET UNITYSDK_OFFSET(0x11BDCC20)
#define AOKJBNONOAH_FNDDNBLJFII_OFFSET UNITYSDK_OFFSET(0x11BDC760)
#define AOKJBNONOAH_GMGIOLBGDHI_OFFSET UNITYSDK_OFFSET(0x11BDC9A0)
#define AOKJBNONOAH_LGJADAOGOBB_OFFSET UNITYSDK_OFFSET(0x11BDCB70)
#define AOKJBNONOAH_LNFKOPGNOAK_OFFSET UNITYSDK_OFFSET(0x11BDC900)
#define AOKJBNONOAH__CTOR_OFFSET UNITYSDK_OFFSET(0x11BDC750)

inline static constexpr unsigned int AOKJBNONOAH_TypeDefinitionIndex = 54014;

class AOKJBNONOAH : public ::System::Object
{
public:
	::FGCOIBFFCHB* JABIKEIIKOF; // 0x10
	::FGCOIBFFCHB* CHHCIIKOMAA; // 0x18
	::LGINJIKKBJA* IJEOBMLHPHH; // 0x20
	::FGCOIBFFCHB* EFHNAJFPIHH; // 0x28
	::FGCOIBFFCHB* FMPFMIHNLGL; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* LEKGFMHHIHJ; // 0x38
	::System::Int32 IKEIILLOIGO; // 0x40
	::System::Boolean KMEKMGBBPFA; // 0x44
	::System::Boolean FIOGLGKFCDO; // 0x45
	::System::Boolean PCLHAPLEBED; // 0x46
	::System::Byte _padding0[0x1];
	::System::Int32 OIKFFGKDHME; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOKJBNONOAH__CTOR_OFFSET))(this);
	}

	::System::Void FNDDNBLJFII(::System::Int32 BABIHDEGHAB)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AOKJBNONOAH_FNDDNBLJFII_OFFSET))(this, BABIHDEGHAB);
	}

	::System::Void LNFKOPGNOAK(::FGCOIBFFCHB* FMPFMIHNLGL, ::LGINJIKKBJA* IJEOBMLHPHH, ::UnityEngine::UI::Extension::UILocalizationText* LEKGFMHHIHJ, ::FGCOIBFFCHB* CHHCIIKOMAA, ::FGCOIBFFCHB* EFHNAJFPIHH, ::FGCOIBFFCHB* JABIKEIIKOF)
	{
		return ((::System::Void(*)(::PVOID, ::FGCOIBFFCHB*, ::LGINJIKKBJA*, ::UnityEngine::UI::Extension::UILocalizationText*, ::FGCOIBFFCHB*, ::FGCOIBFFCHB*, ::FGCOIBFFCHB*))((::PBYTE)hIl2Cpp + AOKJBNONOAH_LNFKOPGNOAK_OFFSET))(this, FMPFMIHNLGL, IJEOBMLHPHH, LEKGFMHHIHJ, CHHCIIKOMAA, EFHNAJFPIHH, JABIKEIIKOF);
	}

	::System::Void GMGIOLBGDHI(::System::Int32 OIKFFGKDHME)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AOKJBNONOAH_GMGIOLBGDHI_OFFSET))(this, OIKFFGKDHME);
	}

	::System::Void LGJADAOGOBB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOKJBNONOAH_LGJADAOGOBB_OFFSET))(this);
	}

	::System::Void FIGNCGFGOBM(::System::Boolean JLINNGAELHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AOKJBNONOAH_FIGNCGFGOBM_OFFSET))(this, JLINNGAELHN);
	}
};
