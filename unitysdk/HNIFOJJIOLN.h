#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
namespace RPG::GameCore { class SetDynamicValueByPreShowStanceBreak; }
namespace RPG::GameCore { class TaskContext; }

#define HNIFOJJIOLN_CTOR_OFFSET UNITYSDK_OFFSET(0x15D96AE0)
#define HNIFOJJIOLN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15D96BC0)

inline static constexpr unsigned int HNIFOJJIOLN_TypeDefinitionIndex = 54707;

	class HNIFOJJIOLN
	{
	public:
		::RPG::GameCore::StringHash DIJHOMCLPEG; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDynamicValueByPreShowStanceBreak* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDynamicValueByPreShowStanceBreak*))((::PBYTE)hIl2Cpp + HNIFOJJIOLN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNIFOJJIOLN_ONTASKBEGIN_OFFSET))(this);
		}

	};
