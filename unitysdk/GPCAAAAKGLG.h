#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
namespace RPG::GameCore { class EnableStoryWin; }
namespace RPG::GameCore { class TaskContext; }

#define GPCAAAAKGLG_CTOR_OFFSET UNITYSDK_OFFSET(0x15B3DB50)
#define GPCAAAAKGLG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15B3DC60)

inline static constexpr unsigned int GPCAAAAKGLG_TypeDefinitionIndex = 58112;

	class GPCAAAAKGLG
	{
	public:
		::RPG::GameCore::StringHash AKCIAOKAAHI; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::EnableStoryWin* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::EnableStoryWin*))((::PBYTE)hIl2Cpp + GPCAAAAKGLG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPCAAAAKGLG_ONTASKBEGIN_OFFSET))(this);
		}

	};
