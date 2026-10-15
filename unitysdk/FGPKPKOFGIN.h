#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class PlayRogueSimpleTalk; }
namespace RPG::GameCore { class TaskContext; }

#define FGPKPKOFGIN_CTOR_OFFSET UNITYSDK_OFFSET(0x15763B50)
#define FGPKPKOFGIN_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15763B80)
#define FGPKPKOFGIN_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0x15763EE0)
#define FGPKPKOFGIN_NPHDKJCJDCA_OFFSET UNITYSDK_OFFSET(0x15763C80)
#define FGPKPKOFGIN_ONSKIP_OFFSET UNITYSDK_OFFSET(0x15763E90)
#define FGPKPKOFGIN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15763BC0)

inline static constexpr unsigned int FGPKPKOFGIN_TypeDefinitionIndex = 58279;

	class FGPKPKOFGIN
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PlayRogueSimpleTalk* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PlayRogueSimpleTalk*))((::PBYTE)hIl2Cpp + FGPKPKOFGIN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGPKPKOFGIN_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGPKPKOFGIN_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnSkip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGPKPKOFGIN_ONSKIP_OFFSET))(this);
		}

		::System::Void NPHDKJCJDCA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGPKPKOFGIN_NPHDKJCJDCA_OFFSET))(this);
		}

		::System::Boolean get_ForceSkip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FGPKPKOFGIN_GET_FORCESKIP_OFFSET))(this);
		}

	};
