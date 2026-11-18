#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Project::Config { class LevelData; }

#define AOHFGGGDCPL_PGDALGHJHPP_PFLMOMNEMIM_OFFSET UNITYSDK_OFFSET(0x143BD080)
#define AOHFGGGDCPL_PGDALGHJHPP__CTOR_OFFSET UNITYSDK_OFFSET(0x143BD070)

inline static constexpr unsigned int AOHFGGGDCPL_PGDALGHJHPP_TypeDefinitionIndex = 75118;

class AOHFGGGDCPL_PGDALGHJHPP : public ::System::Object
{
public:
	::System::Int32 NPAKMAGBOCH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOHFGGGDCPL_PGDALGHJHPP__CTOR_OFFSET))(this);
	}

	::System::Boolean PFLMOMNEMIM(::MoleMole::Project::Config::LevelData* DPGFPHIMDEL)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Project::Config::LevelData*))((::PBYTE)hIl2Cpp + AOHFGGGDCPL_PGDALGHJHPP_PFLMOMNEMIM_OFFSET))(this, DPGFPHIMDEL);
	}
};
