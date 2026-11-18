#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HHMPJLFOGDG_ODNKCNLKBLK.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace System { class Object; }

#define HHMPJLFOGDG_GHDJIEJFFKG_OFFSET UNITYSDK_OFFSET(0x17B009F0)
#define HHMPJLFOGDG_IIODGIDIHGM_OFFSET UNITYSDK_OFFSET(0x17AFF600)
#define HHMPJLFOGDG_MIDAMEBKOAP_OFFSET UNITYSDK_OFFSET(0x17B00A00)
#define HHMPJLFOGDG_ODLBLHOKABA_OFFSET UNITYSDK_OFFSET(0x17AFF820)
#define HHMPJLFOGDG_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x17AFF730)
#define HHMPJLFOGDG_PDEDKHJDBDD_OFFSET UNITYSDK_OFFSET(0x17B00A10)
#define HHMPJLFOGDG_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x17B00180)
#define HHMPJLFOGDG__CTOR_OFFSET UNITYSDK_OFFSET(0x17B009B0)

inline static constexpr unsigned int HHMPJLFOGDG_TypeDefinitionIndex = 49052;

class HHMPJLFOGDG
{
public:
	::HHMPJLFOGDG_ODNKCNLKBLK IJMHNGFLIKI; // 0x38
	::System::Single OCIANCLMDKO; // 0x70
	::System::Boolean GLBPPBCHGAE; // 0x74
	::System::Boolean CDPIKBAEBNF; // 0x75
	::System::Boolean KGMLBHOFAMJ; // 0x76
	::System::Boolean HBFLALCKPAK; // 0x77
	::System::Single FNPNJGNEFHE; // 0x78
	::UnityEngine::Color GMIPBCKNEFH; // 0x7C
	::UnityEngine::Vector2 MKEGNKPNOAB; // 0x8C
	::System::Boolean CCPLIBDDMBF; // 0x94
	::System::Boolean IIGKOEAJLHB; // 0x95
	::System::Boolean MHPABKFDIOI; // 0x96
	::System::Boolean OIOGCGMCBNF; // 0x97

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHMPJLFOGDG__CTOR_OFFSET))(this);
	}

	::System::Void IIODGIDIHGM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHMPJLFOGDG_IIODGIDIHGM_OFFSET))(this);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable HKOFGPMIFHB)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + HHMPJLFOGDG_ONPLAYABLEDESTROY_OFFSET))(this, HKOFGPMIFHB);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable HKOFGPMIFHB, ::UnityEngine::Playables::FrameData HMMMOCJAEOA, ::System::Object* NEEMKJBIIBC)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + HHMPJLFOGDG_PROCESSFRAME_OFFSET))(this, HKOFGPMIFHB, HMMMOCJAEOA, NEEMKJBIIBC);
	}

	::System::Void GHDJIEJFFKG(::UnityEngine::Playables::Playable MIALFKCCCPI, ::UnityEngine::Playables::FrameData KMGKAIDEIBA, ::System::Object* FDHMCIFPNCK)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + HHMPJLFOGDG_GHDJIEJFFKG_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
	}

	::System::Void MIDAMEBKOAP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHMPJLFOGDG_MIDAMEBKOAP_OFFSET))(this);
	}

	::System::Void ODLBLHOKABA(::System::Boolean FFFEBCKEHEE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HHMPJLFOGDG_ODLBLHOKABA_OFFSET))(this, FFFEBCKEHEE);
	}

	::System::Void PDEDKHJDBDD(::UnityEngine::Playables::Playable MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + HHMPJLFOGDG_PDEDKHJDBDD_OFFSET))(this, MIALFKCCCPI);
	}
};
