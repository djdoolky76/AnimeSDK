#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ST_Side_TriggerEffect; }
namespace RPG::GameCore { class TaskContext; }

#define CEFIBEKFLAI_CTOR_OFFSET UNITYSDK_OFFSET(0xC7826E0)
#define CEFIBEKFLAI_GHIFMGPKFPF_OFFSET UNITYSDK_OFFSET(0xC782780)
#define CEFIBEKFLAI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC782710)
#define CEFIBEKFLAI_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC782C00)

inline static constexpr unsigned int CEFIBEKFLAI_TypeDefinitionIndex = 52255;

	class CEFIBEKFLAI
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Side_TriggerEffect* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Side_TriggerEffect*))((::PBYTE)hIl2Cpp + CEFIBEKFLAI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEFIBEKFLAI_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEFIBEKFLAI_ONTASKRESET_OFFSET))(this);
		}

		::System::Void GHIFMGPKFPF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEFIBEKFLAI_GHIFMGPKFPF_OFFSET))(this);
		}

	};
