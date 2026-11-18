#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ADACKFLADPO_GCPPOLEOHMF.h"
#include "unitysdk/UnityEngine/Vector4.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace System { class Object; }
namespace UnityEngine { class Texture; }

#define ADACKFLADPO_GHDJIEJFFKG_OFFSET UNITYSDK_OFFSET(0x135D6690)
#define ADACKFLADPO_IIODGIDIHGM_OFFSET UNITYSDK_OFFSET(0x135D4E60)
#define ADACKFLADPO_MIDAMEBKOAP_OFFSET UNITYSDK_OFFSET(0x135D6680)
#define ADACKFLADPO_ODLBLHOKABA_OFFSET UNITYSDK_OFFSET(0x135D5190)
#define ADACKFLADPO_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x135D5050)
#define ADACKFLADPO_PDEDKHJDBDD_OFFSET UNITYSDK_OFFSET(0x135D6670)
#define ADACKFLADPO_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x135D5CA0)
#define ADACKFLADPO__CTOR_OFFSET UNITYSDK_OFFSET(0x135D6640)

inline static constexpr unsigned int ADACKFLADPO_TypeDefinitionIndex = 39565;

class ADACKFLADPO
{
public:
	::ADACKFLADPO_GCPPOLEOHMF IJMHNGFLIKI; // 0x38
	::UnityEngine::Texture* CDMHPGLDAPI; // 0x98
	::UnityEngine::Texture* IHICFOMKGJP; // 0xA0
	::System::Single OKBKGGIILHK; // 0xA8
	::System::Boolean JOOAIHPJJCK; // 0xAC
	::System::Boolean HBFLALCKPAK; // 0xAD
	::System::Boolean KHKIIGDFEAA; // 0xAE
	::System::Boolean CDPIKBAEBNF; // 0xAF
	::UnityEngine::Vector4 HEDKHCONFOK; // 0xB0
	::System::Single OCIANCLMDKO; // 0xC0
	::System::Boolean EMFCNFIJHNG; // 0xC4
	::System::Boolean FFIIPMJBDMP; // 0xC5
	::System::Byte _padding0[0x2];
	::UnityEngine::Vector4 HEONCDKNMGA; // 0xC8
	::System::Boolean PNFLIAAKFDF; // 0xD8
	::System::Boolean MHPABKFDIOI; // 0xD9
	::System::Boolean GABNPMHBJHL; // 0xDA
	::System::Boolean LOECKLGHDIA; // 0xDB

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADACKFLADPO__CTOR_OFFSET))(this);
	}

	::System::Void IIODGIDIHGM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADACKFLADPO_IIODGIDIHGM_OFFSET))(this);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable HKOFGPMIFHB)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + ADACKFLADPO_ONPLAYABLEDESTROY_OFFSET))(this, HKOFGPMIFHB);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable HKOFGPMIFHB, ::UnityEngine::Playables::FrameData HMMMOCJAEOA, ::System::Object* NEEMKJBIIBC)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + ADACKFLADPO_PROCESSFRAME_OFFSET))(this, HKOFGPMIFHB, HMMMOCJAEOA, NEEMKJBIIBC);
	}

	::System::Void PDEDKHJDBDD(::UnityEngine::Playables::Playable MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + ADACKFLADPO_PDEDKHJDBDD_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void ODLBLHOKABA(::System::Boolean FFFEBCKEHEE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ADACKFLADPO_ODLBLHOKABA_OFFSET))(this, FFFEBCKEHEE);
	}

	::System::Void MIDAMEBKOAP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADACKFLADPO_MIDAMEBKOAP_OFFSET))(this);
	}

	::System::Void GHDJIEJFFKG(::UnityEngine::Playables::Playable MIALFKCCCPI, ::UnityEngine::Playables::FrameData KMGKAIDEIBA, ::System::Object* FDHMCIFPNCK)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + ADACKFLADPO_GHDJIEJFFKG_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
	}
};
