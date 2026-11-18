#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DKOGJJNLMNE.h"
#include "unitysdk/DNAJKGMIIEK.h"
#include "unitysdk/JGLIFHIAIEH.h"
#include "unitysdk/MoleMole/Arcade/CompanionProject/CpSkillEffectData.h"
#include "unitysdk/NMEBLNJMHGI.h"

namespace MoleMole::Arcade::CompanionProject { class CpAnimAxisInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_ARCADE_COMPANIONPROJECT_CPSKILLEFFECTMOVEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1EA1FD50)

namespace MoleMole::Arcade::CompanionProject
{
	inline static constexpr unsigned int CpSkillEffectMoveData_TypeDefinitionIndex = 94607;

	class CpSkillEffectMoveData : public ::MoleMole::Arcade::CompanionProject::CpSkillEffectData
	{
	public:
		::JGLIFHIAIEH pos; // 0x28
		::NMEBLNJMHGI posParam; // 0x30
		::DNAJKGMIIEK curve; // 0x38
		::DKOGJJNLMNE moveType; // 0x40
		::System::Byte _padding0[0x4];
		::System::Collections::Generic::List_1<::MoleMole::Arcade::CompanionProject::CpAnimAxisInfo*>* axisInfos; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_COMPANIONPROJECT_CPSKILLEFFECTMOVEDATA__CTOR_OFFSET))(this);
		}
	};
}
