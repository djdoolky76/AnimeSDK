#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigAttackDistanceAttenuation; }
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define GOCPPECPBJB_CREATEOP_OFFSET UNITYSDK_OFFSET(0x125EDC70)
#define GOCPPECPBJB_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x125EE570)
#define GOCPPECPBJB_OJNOGGOAGNN_OFFSET UNITYSDK_OFFSET(0x125EDF00)
#define GOCPPECPBJB_OPNBJPOOBAA_OFFSET UNITYSDK_OFFSET(0x125EE190)
#define GOCPPECPBJB_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x125EDBD0)
#define GOCPPECPBJB__CTOR_OFFSET UNITYSDK_OFFSET(0x125EDB40)

inline static constexpr unsigned int GOCPPECPBJB_TypeDefinitionIndex = 84823;

class GOCPPECPBJB
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOCPPECPBJB__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + GOCPPECPBJB_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigAttackDistanceAttenuation*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigAttackDistanceAttenuation*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOCPPECPBJB_CREATEOP_OFFSET))(this);
	}

	::UnityEngine::AnimationCurve* OJNOGGOAGNN(::System::String* MCOHLHMKLIP)
	{
		return ((::UnityEngine::AnimationCurve*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GOCPPECPBJB_OJNOGGOAGNN_OFFSET))(this, MCOHLHMKLIP);
	}

	::System::Single OPNBJPOOBAA(::System::String* CBMDJKGKBFF, ::MoleMole::Battle::Entity* MFMPICKHAMJ, ::MoleMole::Battle::Entity* JKELDNKGNDI)
	{
		return ((::System::Single(*)(::PVOID, ::System::String*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + GOCPPECPBJB_OPNBJPOOBAA_OFFSET))(this, CBMDJKGKBFF, MFMPICKHAMJ, JKELDNKGNDI);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + GOCPPECPBJB_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}
};
