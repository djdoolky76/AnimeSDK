#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PBHPOOFFAFI.h"

namespace MoleMole::Project::Config { class LevelData; }

#define JCOFPPAHDLP_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x198A09B0)
#define JCOFPPAHDLP__CTOR_OFFSET UNITYSDK_OFFSET(0x198A09A0)

inline static constexpr unsigned int JCOFPPAHDLP_TypeDefinitionIndex = 59396;

class JCOFPPAHDLP : public ::PBHPOOFFAFI
{
public:
	::MoleMole::Project::Config::LevelData* CENFDFIKBDC; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCOFPPAHDLP__CTOR_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC(::MoleMole::Project::Config::LevelData* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Project::Config::LevelData*))((::PBYTE)hIl2Cpp + JCOFPPAHDLP_BBOMJDBNHIC_OFFSET))(this, LJBPECKCCEA);
	}
};
