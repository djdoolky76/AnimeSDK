#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Project/Config/MonsterGroupTemplateExt_MonsterTypeEnum.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::FlowCanvas { class LevelZeroMonsterCreateData; }
namespace MoleMole::FlowCanvas { class LevelZeroRandomPosMonsterCreateData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GGCHLABPAIE_OMKIAGPJKPM_AIILDPHKNMF_OFFSET UNITYSDK_OFFSET(0x10EEDB70)
#define GGCHLABPAIE_OMKIAGPJKPM__CTOR_1_OFFSET UNITYSDK_OFFSET(0x10EEDA00)
#define GGCHLABPAIE_OMKIAGPJKPM__CTOR_OFFSET UNITYSDK_OFFSET(0x10EED890)

inline static constexpr unsigned int GGCHLABPAIE_OMKIAGPJKPM_TypeDefinitionIndex = 79321;

class GGCHLABPAIE_OMKIAGPJKPM : public ::System::Object
{
public:
	::Il2CppArray<::System::Int32>* ACAPJGHNDDE; // 0x10
	::MoleMole::Project::Config::MonsterGroupTemplateExt_MonsterTypeEnum OBNIAHNMHPF; // 0x18
	::System::Int32 AELLPLBJELA; // 0x1C

	::System::Void _ctor(::System::Int32 AELLPLBJELA, ::MoleMole::Project::Config::MonsterGroupTemplateExt_MonsterTypeEnum MBNJABCDDLF, ::System::Collections::Generic::List_1<::MoleMole::FlowCanvas::LevelZeroMonsterCreateData*>* LHANJLIHPPD)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::MoleMole::Project::Config::MonsterGroupTemplateExt_MonsterTypeEnum, ::System::Collections::Generic::List_1<::MoleMole::FlowCanvas::LevelZeroMonsterCreateData*>*))((::PBYTE)hIl2Cpp + GGCHLABPAIE_OMKIAGPJKPM__CTOR_OFFSET))(this, AELLPLBJELA, MBNJABCDDLF, LHANJLIHPPD);
	}

	::System::Void _ctor_1(::System::Int32 AELLPLBJELA, ::MoleMole::Project::Config::MonsterGroupTemplateExt_MonsterTypeEnum MBNJABCDDLF, ::System::Collections::Generic::List_1<::MoleMole::FlowCanvas::LevelZeroRandomPosMonsterCreateData*>* LHANJLIHPPD)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::MoleMole::Project::Config::MonsterGroupTemplateExt_MonsterTypeEnum, ::System::Collections::Generic::List_1<::MoleMole::FlowCanvas::LevelZeroRandomPosMonsterCreateData*>*))((::PBYTE)hIl2Cpp + GGCHLABPAIE_OMKIAGPJKPM__CTOR_1_OFFSET))(this, AELLPLBJELA, MBNJABCDDLF, LHANJLIHPPD);
	}

	::System::Boolean AIILDPHKNMF(::GGCHLABPAIE_OMKIAGPJKPM* LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::GGCHLABPAIE_OMKIAGPJKPM*))((::PBYTE)hIl2Cpp + GGCHLABPAIE_OMKIAGPJKPM_AIILDPHKNMF_OFFSET))(this, LIBPKNHDIGP);
	}
};
