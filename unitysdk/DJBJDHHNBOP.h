#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/MoleMole/Config/EntitySkillType.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole::Config { class SkillTypeToAttackTagsConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DJBJDHHNBOP_COPIDBEMEIE_OFFSET UNITYSDK_OFFSET(0x1A1E3CA0)
#define DJBJDHHNBOP_CREATEOP_OFFSET UNITYSDK_OFFSET(0x1A1E3A60)
#define DJBJDHHNBOP_FMMAOJOKMPK_OFFSET UNITYSDK_OFFSET(0x1A1E3E30)
#define DJBJDHHNBOP_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x1A1E3D60)
#define DJBJDHHNBOP_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x1A1E39C0)
#define DJBJDHHNBOP__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1E3930)

inline static constexpr unsigned int DJBJDHHNBOP_TypeDefinitionIndex = 61262;

class DJBJDHHNBOP
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJBJDHHNBOP__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + DJBJDHHNBOP_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::SkillTypeToAttackTagsConfig*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::SkillTypeToAttackTagsConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJBJDHHNBOP_CREATEOP_OFFSET))(this);
	}

	::MoleMole::Config::SkillTypeToAttackTagsConfig* COPIDBEMEIE()
	{
		return ((::MoleMole::Config::SkillTypeToAttackTagsConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJBJDHHNBOP_COPIDBEMEIE_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + DJBJDHHNBOP_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Boolean FMMAOJOKMPK(::System::Collections::Generic::List_1<::System::String*>* JMDOANHOEJG, ::MoleMole::Config::EntitySkillType& BBDHPBAPPPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*, ::MoleMole::Config::EntitySkillType&))((::PBYTE)hIl2Cpp + DJBJDHHNBOP_FMMAOJOKMPK_OFFSET))(this, JMDOANHOEJG, BBDHPBAPPPI);
	}
};
