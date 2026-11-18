#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"

class BCABDJMIGEA;
class HLFNGCCDKGE;
namespace MoleMole { class SkillCharacterScriptConfig; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigCommonEntityAnimEvents; }
namespace MoleMole::Config { class ConfigEntityAnimEvent; }
namespace System { class Action; }
namespace System { class String; }

#define GONCPGPFBED_BAHLJOBFLOD_OFFSET UNITYSDK_OFFSET(0x1491D310)
#define GONCPGPFBED_GCKHEFEPNEC_OFFSET UNITYSDK_OFFSET(0x1491CA40)
#define GONCPGPFBED_HAKLHGJOGIP_OFFSET UNITYSDK_OFFSET(0x1491D3D0)
#define GONCPGPFBED_HDBDCOKMHNE_OFFSET UNITYSDK_OFFSET(0x1491CF10)
#define GONCPGPFBED_HHHMOHOPCJM_OFFSET UNITYSDK_OFFSET(0x1491CFF0)
#define GONCPGPFBED_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x1491D240)
#define GONCPGPFBED_KGFDINCPDPB_OFFSET UNITYSDK_OFFSET(0x1491CDD0)
#define GONCPGPFBED_LKOABMAIFED_OFFSET UNITYSDK_OFFSET(0x1491D3C0)
#define GONCPGPFBED_NGGKEEGICOC_OFFSET UNITYSDK_OFFSET(0x1491D3E0)
#define GONCPGPFBED_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x1491C990)
#define GONCPGPFBED__CTOR_OFFSET UNITYSDK_OFFSET(0x1491C8A0)

inline static constexpr unsigned int GONCPGPFBED_TypeDefinitionIndex = 60470;

class GONCPGPFBED
{
public:
	// static const ::System::Char HCCNDIGKAFF = 0x23; // 0x0
	::BCABDJMIGEA* _DHABGEPFEEN_k__BackingField; // 0x28
	::HLFNGCCDKGE* _MAHGMPIMDCL_k__BackingField; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GONCPGPFBED__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + GONCPGPFBED_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::MoleMole::Config::ConfigEntityAnimEvent* GCKHEFEPNEC(::MoleMole::Battle::Entity* KDEHMPGOCEP, ::System::String* GPMKNAIINNH)
	{
		return ((::MoleMole::Config::ConfigEntityAnimEvent*(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::String*))((::PBYTE)hIl2Cpp + GONCPGPFBED_GCKHEFEPNEC_OFFSET))(this, KDEHMPGOCEP, GPMKNAIINNH);
	}

	::MoleMole::Config::ConfigEntityAnimEvent* KGFDINCPDPB(::MoleMole::SkillCharacterScriptConfig* DFMKILICPFB, ::System::String* PKGDBDFHOMO)
	{
		return ((::MoleMole::Config::ConfigEntityAnimEvent*(*)(::PVOID, ::MoleMole::SkillCharacterScriptConfig*, ::System::String*))((::PBYTE)hIl2Cpp + GONCPGPFBED_KGFDINCPDPB_OFFSET))(this, DFMKILICPFB, PKGDBDFHOMO);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + GONCPGPFBED_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Boolean BAHLJOBFLOD(::System::String* PKGDBDFHOMO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GONCPGPFBED_BAHLJOBFLOD_OFFSET))(this, PKGDBDFHOMO);
	}

	::System::Boolean HHHMOHOPCJM(::System::String* DOAMBBJJMCN, ::MoleMole::Config::ConfigCommonEntityAnimEvents*& OKPMKKMKENF)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::MoleMole::Config::ConfigCommonEntityAnimEvents*&))((::PBYTE)hIl2Cpp + GONCPGPFBED_HHHMOHOPCJM_OFFSET))(this, DOAMBBJJMCN, OKPMKKMKENF);
	}

	::MoleMole::Config::ConfigEntityAnimEvent* HDBDCOKMHNE(::System::String* LMCPMAKFIIG)
	{
		return ((::MoleMole::Config::ConfigEntityAnimEvent*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GONCPGPFBED_HDBDCOKMHNE_OFFSET))(this, LMCPMAKFIIG);
	}

	::BCABDJMIGEA* LKOABMAIFED()
	{
		return ((::BCABDJMIGEA*(*)(::PVOID))((::PBYTE)hIl2Cpp + GONCPGPFBED_LKOABMAIFED_OFFSET))(this);
	}

	::HLFNGCCDKGE* HAKLHGJOGIP()
	{
		return ((::HLFNGCCDKGE*(*)(::PVOID))((::PBYTE)hIl2Cpp + GONCPGPFBED_HAKLHGJOGIP_OFFSET))(this);
	}

	::System::Void NGGKEEGICOC(::System::Boolean EBAJLMBGMFE, ::System::String* OIIHCACKLHD, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + GONCPGPFBED_NGGKEEGICOC_OFFSET))(this, EBAJLMBGMFE, OIIHCACKLHD, IBNICCGMILF);
	}
};
