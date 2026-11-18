#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IECNLPPHCHI;
namespace MoleMole { class TextureSheetAnimCurveParam; }
namespace System { class Action; }

#define LLEPFLCMKJD_FBEDBFPMJJG_HBKKBBNIEOI_OFFSET UNITYSDK_OFFSET(0x12D3A160)
#define LLEPFLCMKJD_FBEDBFPMJJG__CTOR_OFFSET UNITYSDK_OFFSET(0x12D3A150)

inline static constexpr unsigned int LLEPFLCMKJD_FBEDBFPMJJG_TypeDefinitionIndex = 49357;

class LLEPFLCMKJD_FBEDBFPMJJG : public ::System::Object
{
public:
	::System::Action* OCIKNBPALGG; // 0x10
	::MoleMole::TextureSheetAnimCurveParam* ALLOPLHJOMK; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLEPFLCMKJD_FBEDBFPMJJG__CTOR_OFFSET))(this);
	}

	::System::Void HBKKBBNIEOI(::IECNLPPHCHI* ECKMPOAABAL, ::System::Int32 HBJOLKHGGDD)
	{
		return ((::System::Void(*)(::PVOID, ::IECNLPPHCHI*, ::System::Int32))((::PBYTE)hIl2Cpp + LLEPFLCMKJD_FBEDBFPMJJG_HBKKBBNIEOI_OFFSET))(this, ECKMPOAABAL, HBJOLKHGGDD);
	}
};
