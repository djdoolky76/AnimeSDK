#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/HEHNIKFLPBO_AKFHKBPGDKB.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

class AFMGFPCAPIE_MOKCAEPFFCP;
namespace MoleMole::Timeline { class ChatPlusDialogBehaviour; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HEHNIKFLPBO_ALDFGCLBGKF_OFFSET UNITYSDK_OFFSET(0x1407FB60)
#define HEHNIKFLPBO_CMBFLHOIAGG_OFFSET UNITYSDK_OFFSET(0x1407F640)
#define HEHNIKFLPBO_GHDJIEJFFKG_OFFSET UNITYSDK_OFFSET(0x1407FD30)
#define HEHNIKFLPBO_IGHGMLLEHNP_OFFSET UNITYSDK_OFFSET(0x1407FB00)
#define HEHNIKFLPBO_LMGCBKENOPJ_OFFSET UNITYSDK_OFFSET(0x1407FD40)
#define HEHNIKFLPBO_MOONNIIOGKP_OFFSET UNITYSDK_OFFSET(0x1407FEB0)
#define HEHNIKFLPBO_ONGRAPHSTART_OFFSET UNITYSDK_OFFSET(0x1407FBD0)
#define HEHNIKFLPBO_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0x1407FC60)
#define HEHNIKFLPBO_PDDMIEPBAEC_OFFSET UNITYSDK_OFFSET(0x1407FD50)
#define HEHNIKFLPBO_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x1407F2A0)
#define HEHNIKFLPBO__CTOR_OFFSET UNITYSDK_OFFSET(0x1407FD20)

inline static constexpr unsigned int HEHNIKFLPBO_TypeDefinitionIndex = 43442;

class HEHNIKFLPBO : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	::AFMGFPCAPIE_MOKCAEPFFCP* JDKMECAHILE; // 0x10
	::System::Int32 CMIOPJEILBM; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEHNIKFLPBO__CTOR_OFFSET))(this);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable HKOFGPMIFHB, ::UnityEngine::Playables::FrameData HMMMOCJAEOA, ::System::Object* NEEMKJBIIBC)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + HEHNIKFLPBO_PROCESSFRAME_OFFSET))(this, HKOFGPMIFHB, HMMMOCJAEOA, NEEMKJBIIBC);
	}

	::System::Void OnGraphStart(::UnityEngine::Playables::Playable HKOFGPMIFHB)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + HEHNIKFLPBO_ONGRAPHSTART_OFFSET))(this, HKOFGPMIFHB);
	}

	::System::Void OnGraphStop(::UnityEngine::Playables::Playable HKOFGPMIFHB)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + HEHNIKFLPBO_ONGRAPHSTOP_OFFSET))(this, HKOFGPMIFHB);
	}

	::System::Void IGHGMLLEHNP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEHNIKFLPBO_IGHGMLLEHNP_OFFSET))(this);
	}

	::System::Void GHDJIEJFFKG(::UnityEngine::Playables::Playable MIALFKCCCPI, ::UnityEngine::Playables::FrameData KMGKAIDEIBA, ::System::Object* FDHMCIFPNCK)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + HEHNIKFLPBO_GHDJIEJFFKG_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
	}

	::System::Void LMGCBKENOPJ(::UnityEngine::Playables::Playable MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + HEHNIKFLPBO_LMGCBKENOPJ_OFFSET))(this, MIALFKCCCPI);
	}

	static ::System::Int32 PDDMIEPBAEC(::HEHNIKFLPBO_AKFHKBPGDKB HAAEBCOBKFF, ::HEHNIKFLPBO_AKFHKBPGDKB BFMMEICFNCD)
	{
		return ((::System::Int32(*)(::HEHNIKFLPBO_AKFHKBPGDKB, ::HEHNIKFLPBO_AKFHKBPGDKB))((::PBYTE)hIl2Cpp + HEHNIKFLPBO_PDDMIEPBAEC_OFFSET))(HAAEBCOBKFF, BFMMEICFNCD);
	}

	::System::Collections::Generic::List_1<::System::Object*>* CMBFLHOIAGG(::UnityEngine::Playables::Playable HKOFGPMIFHB)
	{
		return ((::System::Collections::Generic::List_1<::System::Object*>*(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + HEHNIKFLPBO_CMBFLHOIAGG_OFFSET))(this, HKOFGPMIFHB);
	}

	static ::System::Int32 ALDFGCLBGKF(::MoleMole::Timeline::ChatPlusDialogBehaviour* GCKPCMEMKMM)
	{
		return ((::System::Int32(*)(::MoleMole::Timeline::ChatPlusDialogBehaviour*))((::PBYTE)hIl2Cpp + HEHNIKFLPBO_ALDFGCLBGKF_OFFSET))(GCKPCMEMKMM);
	}

	::System::Void MOONNIIOGKP(::UnityEngine::Playables::Playable MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + HEHNIKFLPBO_MOONNIIOGKP_OFFSET))(this, MIALFKCCCPI);
	}
};
