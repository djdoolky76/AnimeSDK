#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"

class FGCOIBFFCHB;
namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole { class MonoUIPortraitConfig; }
namespace MoleMole::Config { class ConfigUIPortrait; }
namespace System { class String; }
namespace UnityEngine { class RectTransform; }

#define BKLAOKBIHCE_CREATEOP_OFFSET UNITYSDK_OFFSET(0x128AE8D0)
#define BKLAOKBIHCE_FBENGHDICCK_OFFSET UNITYSDK_OFFSET(0x128AEB10)
#define BKLAOKBIHCE_FDAJAEFIFFM_OFFSET UNITYSDK_OFFSET(0x128AEE60)
#define BKLAOKBIHCE_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x128AED90)
#define BKLAOKBIHCE_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x128AE830)
#define BKLAOKBIHCE__CTOR_OFFSET UNITYSDK_OFFSET(0x128AE7A0)

inline static constexpr unsigned int BKLAOKBIHCE_TypeDefinitionIndex = 87502;

class BKLAOKBIHCE
{
public:
	// static const ::System::String* MIFGJCPCGAE; // 0x0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKLAOKBIHCE__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + BKLAOKBIHCE_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigUIPortrait*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigUIPortrait*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BKLAOKBIHCE_CREATEOP_OFFSET))(this);
	}

	::System::Void FBENGHDICCK(::MoleMole::MonoUIPortraitConfig* DEHDPCOMCPC, ::UnityEngine::RectTransform* NLIMNILFBEC, ::System::String* ABOMFKBGCAJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MonoUIPortraitConfig*, ::UnityEngine::RectTransform*, ::System::String*))((::PBYTE)hIl2Cpp + BKLAOKBIHCE_FBENGHDICCK_OFFSET))(this, DEHDPCOMCPC, NLIMNILFBEC, ABOMFKBGCAJ);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + BKLAOKBIHCE_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void FDAJAEFIFFM(::FGCOIBFFCHB* PKIIIHKBGPN, ::System::String* NACAAHAEDKP)
	{
		return ((::System::Void(*)(::PVOID, ::FGCOIBFFCHB*, ::System::String*))((::PBYTE)hIl2Cpp + BKLAOKBIHCE_FDAJAEFIFFM_OFFSET))(this, PKIIIHKBGPN, NACAAHAEDKP);
	}
};
