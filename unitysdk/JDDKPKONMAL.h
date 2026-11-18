#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"

class MKGKIONBDPL;
namespace System { class Action; }
namespace System::Threading { class CancellationTokenSource; }
namespace UnityEngine { class RectTransform; }

#define JDDKPKONMAL_EELKPDDLODF_OFFSET UNITYSDK_OFFSET(0x16ACAD70)
#define JDDKPKONMAL_HKBLKKFOICM_OFFSET UNITYSDK_OFFSET(0x16ACA8A0)
#define JDDKPKONMAL_HMPPBEAKIDB_OFFSET UNITYSDK_OFFSET(0x16ACA9B0)
#define JDDKPKONMAL_IDDGPHHONNF_OFFSET UNITYSDK_OFFSET(0x16ACABC0)
#define JDDKPKONMAL_LJMIPGJJELP_OFFSET UNITYSDK_OFFSET(0x16ACAC80)
#define JDDKPKONMAL_MPLBJMFJLFI_OFFSET UNITYSDK_OFFSET(0x16ACAF80)
#define JDDKPKONMAL_OBHCIGFIBCB_OFFSET UNITYSDK_OFFSET(0x16ACB650)
#define JDDKPKONMAL__CTOR_OFFSET UNITYSDK_OFFSET(0x16ACA890)

inline static constexpr unsigned int JDDKPKONMAL_TypeDefinitionIndex = 55012;

class JDDKPKONMAL : public ::System::Object
{
public:
	::System::Threading::CancellationTokenSource* OBGNMOOPIMO; // 0x10
	::MKGKIONBDPL* INLOMKENOFG; // 0x18
	::System::Action* EJHFGKNDHNA; // 0x20
	::System::Single OADGIJCJKBO; // 0x28
	::System::Single EKGMLLJEJHM; // 0x2C
	::Foundation::Coroutine::CoroutineHandle CAGHKCKJBAA; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDDKPKONMAL__CTOR_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask HKBLKKFOICM(::System::Single JABKCLKHHLP, ::System::Single JMBBLJOCOBF, ::System::Single FNIOPKPHDEH, ::System::Threading::CancellationTokenSource* JHEAOGOHIAL)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Threading::CancellationTokenSource*))((::PBYTE)hIl2Cpp + JDDKPKONMAL_HKBLKKFOICM_OFFSET))(this, JABKCLKHHLP, JMBBLJOCOBF, FNIOPKPHDEH, JHEAOGOHIAL);
	}

	::System::Void HMPPBEAKIDB(::System::Single JABKCLKHHLP, ::System::Single JMBBLJOCOBF, ::System::Single FNIOPKPHDEH, ::System::Action* MGAKJHJAGJI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + JDDKPKONMAL_HMPPBEAKIDB_OFFSET))(this, JABKCLKHHLP, JMBBLJOCOBF, FNIOPKPHDEH, MGAKJHJAGJI);
	}

	::System::Void IDDGPHHONNF(::UnityEngine::RectTransform* MKFHMDBLHLI)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + JDDKPKONMAL_IDDGPHHONNF_OFFSET))(this, MKFHMDBLHLI);
	}

	::System::Void LJMIPGJJELP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDDKPKONMAL_LJMIPGJJELP_OFFSET))(this);
	}

	::System::Void EELKPDDLODF(::System::Single GFLFOMADNNP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JDDKPKONMAL_EELKPDDLODF_OFFSET))(this, GFLFOMADNNP);
	}

	::System::Void MPLBJMFJLFI(::System::Single GFLFOMADNNP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JDDKPKONMAL_MPLBJMFJLFI_OFFSET))(this, GFLFOMADNNP);
	}

	::System::Void OBHCIGFIBCB(::MKGKIONBDPL* HBDIHKMNDEE)
	{
		return ((::System::Void(*)(::PVOID, ::MKGKIONBDPL*))((::PBYTE)hIl2Cpp + JDDKPKONMAL_OBHCIGFIBCB_OFFSET))(this, HBDIHKMNDEE);
	}
};
