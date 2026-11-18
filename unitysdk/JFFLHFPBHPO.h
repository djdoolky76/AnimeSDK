#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JFFLHFPBHPO_PDLKNBLIIOJ.h"
#include "unitysdk/UnityEngine/Rendering/Universal/DownSampleLevel.h"
#include "unitysdk/UnityEngine/Rendering/Universal/SampleDistanceMode.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace System { class Object; }

#define JFFLHFPBHPO_GHDJIEJFFKG_OFFSET UNITYSDK_OFFSET(0x1A4735B0)
#define JFFLHFPBHPO_IIODGIDIHGM_OFFSET UNITYSDK_OFFSET(0x1A470140)
#define JFFLHFPBHPO_MIDAMEBKOAP_OFFSET UNITYSDK_OFFSET(0x1A4735C0)
#define JFFLHFPBHPO_ODLBLHOKABA_OFFSET UNITYSDK_OFFSET(0x1A470700)
#define JFFLHFPBHPO_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x1A470460)
#define JFFLHFPBHPO_PDEDKHJDBDD_OFFSET UNITYSDK_OFFSET(0x1A4735A0)
#define JFFLHFPBHPO_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x1A472300)
#define JFFLHFPBHPO__CTOR_OFFSET UNITYSDK_OFFSET(0x1A473540)

inline static constexpr unsigned int JFFLHFPBHPO_TypeDefinitionIndex = 70967;

class JFFLHFPBHPO
{
public:
	::System::Single PDJKHPKBLFD; // 0x38
	::UnityEngine::Rendering::Universal::SampleDistanceMode HMKLPKCPGOO; // 0x3C
	::System::Single OKOAOFCJHFL; // 0x40
	::System::Single PANBOHJGEHB; // 0x44
	::System::Boolean MAPGMADDDBL; // 0x48
	::System::Boolean DMMJHLMLAAP; // 0x49
	::System::Boolean EPGLMMMMNJA; // 0x4A
	::System::Boolean ECBGLHFDMGD; // 0x4B
	::System::Single JELIAGAHPDN; // 0x4C
	::System::Boolean LILAJABIOMN; // 0x50
	::System::Boolean MIFEBBOEMNO; // 0x51
	::System::Boolean KJLLODCIEIN; // 0x52
	::System::Boolean NBNHLLCGHKG; // 0x53
	::UnityEngine::Vector2 FGAOMHHIIKI; // 0x54
	::System::Boolean KEAAIBHCIOO; // 0x5C
	::System::Boolean CLEANGJCAOC; // 0x5D
	::System::Boolean NOOLDNCJCOG; // 0x5E
	::System::Boolean FFPKLJEOCAN; // 0x5F
	::System::Int32 CNKIMEDIHNG; // 0x60
	::UnityEngine::Vector2 EIFIJLJLFIA; // 0x64
	::JFFLHFPBHPO_PDLKNBLIIOJ IJMHNGFLIKI; // 0x6C
	::System::Single HFMOIEALKPL; // 0xF4
	::System::Single JOEMJGFKMLE; // 0xF8
	::System::Boolean LCHNIELKLLA; // 0xFC
	::System::Boolean KIOBNIIMMGD; // 0xFD
	::System::Boolean HMKMFCOFMPJ; // 0xFE
	::System::Boolean KAHPIBMCEIF; // 0xFF
	::UnityEngine::Rendering::Universal::DownSampleLevel CCEMMHIKPHE; // 0x100
	::System::Single LALFACLHFFI; // 0x104
	::System::Boolean PFPMKLFBHKF; // 0x108
	::System::Boolean JFCKMFBJMFM; // 0x109
	::System::Boolean PEEKOPOPJLE; // 0x10A
	::System::Boolean GFMLDOFIICN; // 0x10B
	::System::Int32 GOKFLFLFDKD; // 0x10C
	::System::Single GEEMKIKDHLB; // 0x110
	::System::Boolean MHPABKFDIOI; // 0x114
	::System::Boolean CDPIKBAEBNF; // 0x115
	::System::Boolean HNPFEPMLGKL; // 0x116
	::System::Boolean OCAICAMKDNP; // 0x117

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFFLHFPBHPO__CTOR_OFFSET))(this);
	}

	::System::Void IIODGIDIHGM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFFLHFPBHPO_IIODGIDIHGM_OFFSET))(this);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable HKOFGPMIFHB)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + JFFLHFPBHPO_ONPLAYABLEDESTROY_OFFSET))(this, HKOFGPMIFHB);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable HKOFGPMIFHB, ::UnityEngine::Playables::FrameData HMMMOCJAEOA, ::System::Object* NEEMKJBIIBC)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + JFFLHFPBHPO_PROCESSFRAME_OFFSET))(this, HKOFGPMIFHB, HMMMOCJAEOA, NEEMKJBIIBC);
	}

	::System::Void PDEDKHJDBDD(::UnityEngine::Playables::Playable MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + JFFLHFPBHPO_PDEDKHJDBDD_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void GHDJIEJFFKG(::UnityEngine::Playables::Playable MIALFKCCCPI, ::UnityEngine::Playables::FrameData KMGKAIDEIBA, ::System::Object* FDHMCIFPNCK)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + JFFLHFPBHPO_GHDJIEJFFKG_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
	}

	::System::Void MIDAMEBKOAP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFFLHFPBHPO_MIDAMEBKOAP_OFFSET))(this);
	}

	::System::Void ODLBLHOKABA(::System::Boolean FFFEBCKEHEE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JFFLHFPBHPO_ODLBLHOKABA_OFFSET))(this, FFFEBCKEHEE);
	}
};
