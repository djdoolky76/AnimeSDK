#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class EnableLocalPlayerMoveIgnoreMonster; }
namespace RPG::GameCore { class TaskContext; }

#define KEEOAGMHFIF_BLILDBCEGFH_OFFSET UNITYSDK_OFFSET(0xB375320)
#define KEEOAGMHFIF_CTOR_OFFSET UNITYSDK_OFFSET(0xB3752A0)
#define KEEOAGMHFIF_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0xB3753D0)
#define KEEOAGMHFIF_ONSKIP_OFFSET UNITYSDK_OFFSET(0xB3753E0)
#define KEEOAGMHFIF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB3752D0)

inline static constexpr unsigned int KEEOAGMHFIF_TypeDefinitionIndex = 58108;

	class KEEOAGMHFIF
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::EnableLocalPlayerMoveIgnoreMonster* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::EnableLocalPlayerMoveIgnoreMonster*))((::PBYTE)hIl2Cpp + KEEOAGMHFIF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEEOAGMHFIF_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Boolean get_ForceSkip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KEEOAGMHFIF_GET_FORCESKIP_OFFSET))(this);
		}

		::System::Void OnSkip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEEOAGMHFIF_ONSKIP_OFFSET))(this);
		}

		::System::Void BLILDBCEGFH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEEOAGMHFIF_BLILDBCEGFH_OFFSET))(this);
		}

	};
