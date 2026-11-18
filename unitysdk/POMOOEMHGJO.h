#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/POMOOEMHGJO_FLIAPAPIJKE.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace System { class Object; }
namespace UnityEngine { class Texture; }

#define POMOOEMHGJO_GHDJIEJFFKG_OFFSET UNITYSDK_OFFSET(0x1C6715F0)
#define POMOOEMHGJO_IIODGIDIHGM_OFFSET UNITYSDK_OFFSET(0x1C670520)
#define POMOOEMHGJO_MIDAMEBKOAP_OFFSET UNITYSDK_OFFSET(0x1C671600)
#define POMOOEMHGJO_ODLBLHOKABA_OFFSET UNITYSDK_OFFSET(0x1C6706D0)
#define POMOOEMHGJO_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x1C670600)
#define POMOOEMHGJO_PDEDKHJDBDD_OFFSET UNITYSDK_OFFSET(0x1C6715E0)
#define POMOOEMHGJO_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x1C670E60)
#define POMOOEMHGJO__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6715B0)

inline static constexpr unsigned int POMOOEMHGJO_TypeDefinitionIndex = 77734;

class POMOOEMHGJO
{
public:
	::UnityEngine::Texture* JFLJGFOAPIF; // 0x38
	::POMOOEMHGJO_FLIAPAPIJKE IJMHNGFLIKI; // 0x40
	::System::Single NPFMIPPGPHM; // 0x70
	::System::Single FNNKDGEHBBG; // 0x74
	::System::Boolean MHPABKFDIOI; // 0x78
	::System::Boolean PHJJAILKEJB; // 0x79
	::System::Boolean CDPIKBAEBNF; // 0x7A
	::System::Boolean KCMKCKFBFLD; // 0x7B
	::System::Boolean GCOGFLOJMKE; // 0x7C
	::System::Boolean MCCPCAHNIAN; // 0x7D
	::System::Byte _padding0[0x2];
	::UnityEngine::Vector2 HDABEPAFBCI; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POMOOEMHGJO__CTOR_OFFSET))(this);
	}

	::System::Void IIODGIDIHGM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POMOOEMHGJO_IIODGIDIHGM_OFFSET))(this);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable HKOFGPMIFHB)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + POMOOEMHGJO_ONPLAYABLEDESTROY_OFFSET))(this, HKOFGPMIFHB);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable HKOFGPMIFHB, ::UnityEngine::Playables::FrameData HMMMOCJAEOA, ::System::Object* NEEMKJBIIBC)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + POMOOEMHGJO_PROCESSFRAME_OFFSET))(this, HKOFGPMIFHB, HMMMOCJAEOA, NEEMKJBIIBC);
	}

	::System::Void PDEDKHJDBDD(::UnityEngine::Playables::Playable MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + POMOOEMHGJO_PDEDKHJDBDD_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void ODLBLHOKABA(::System::Boolean FFFEBCKEHEE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + POMOOEMHGJO_ODLBLHOKABA_OFFSET))(this, FFFEBCKEHEE);
	}

	::System::Void GHDJIEJFFKG(::UnityEngine::Playables::Playable MIALFKCCCPI, ::UnityEngine::Playables::FrameData KMGKAIDEIBA, ::System::Object* FDHMCIFPNCK)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + POMOOEMHGJO_GHDJIEJFFKG_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
	}

	::System::Void MIDAMEBKOAP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POMOOEMHGJO_MIDAMEBKOAP_OFFSET))(this);
	}
};
