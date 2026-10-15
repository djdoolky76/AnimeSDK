#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
namespace RPG::GameCore { class SetDynamicValueByShield; }
namespace RPG::GameCore { class TaskContext; }

#define HPLCFJOIDAK_CTOR_OFFSET UNITYSDK_OFFSET(0x15DC4BB0)
#define HPLCFJOIDAK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15DC4C90)

inline static constexpr unsigned int HPLCFJOIDAK_TypeDefinitionIndex = 55465;

	class HPLCFJOIDAK
	{
	public:
		::RPG::GameCore::StringHash DIJHOMCLPEG; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDynamicValueByShield* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDynamicValueByShield*))((::PBYTE)hIl2Cpp + HPLCFJOIDAK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPLCFJOIDAK_ONTASKBEGIN_OFFSET))(this);
		}

	};
