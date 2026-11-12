#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ST_Side_RemoveModifierWhenReset; }
namespace RPG::GameCore { class TaskContext; }

#define CJMFBGMDNGG_CTOR_OFFSET UNITYSDK_OFFSET(0xE089800)
#define CJMFBGMDNGG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xE089830)
#define CJMFBGMDNGG_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xE089880)

inline static constexpr unsigned int CJMFBGMDNGG_TypeDefinitionIndex = 53355;

	class CJMFBGMDNGG
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Side_RemoveModifierWhenReset* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Side_RemoveModifierWhenReset*))((::PBYTE)hIl2Cpp + CJMFBGMDNGG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJMFBGMDNGG_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJMFBGMDNGG_ONTASKRESET_OFFSET))(this);
		}

	};
