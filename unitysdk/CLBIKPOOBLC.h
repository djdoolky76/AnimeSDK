#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
namespace RPG::GameCore { class ModifyDefaultTeamFormation; }
namespace RPG::GameCore { class TaskContext; }

#define CLBIKPOOBLC_CNLOPPIFPFA_OFFSET UNITYSDK_OFFSET(0xD776D20)
#define CLBIKPOOBLC_CTOR_OFFSET UNITYSDK_OFFSET(0xD776920)
#define CLBIKPOOBLC_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD776930)
#define CLBIKPOOBLC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xD776970)
#define CLBIKPOOBLC_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xD776C70)
#define CLBIKPOOBLC_TICK_OFFSET UNITYSDK_OFFSET(0xD776CC0)

inline static constexpr unsigned int CLBIKPOOBLC_TypeDefinitionIndex = 56364;

	class CLBIKPOOBLC : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::ModifyDefaultTeamFormation* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ModifyDefaultTeamFormation* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ModifyDefaultTeamFormation*))((::PBYTE)hIl2Cpp + CLBIKPOOBLC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLBIKPOOBLC_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLBIKPOOBLC_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLBIKPOOBLC_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLBIKPOOBLC_TICK_OFFSET))(this, a1);
		}

		::System::Void CNLOPPIFPFA(::RPG::GameCore::TeamType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TeamType))((::PBYTE)hIl2Cpp + CLBIKPOOBLC_CNLOPPIFPFA_OFFSET))(this, a1);
		}

	};
