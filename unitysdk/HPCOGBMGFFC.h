#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class PlayPenaconyEndmostScale; }
namespace RPG::GameCore { class TaskContext; }

#define HPCOGBMGFFC_CTOR_OFFSET UNITYSDK_OFFSET(0x15DB51C0)
#define HPCOGBMGFFC_JDPGFIBLFOP_OFFSET UNITYSDK_OFFSET(0x15DB5310)
#define HPCOGBMGFFC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15DB51F0)

inline static constexpr unsigned int HPCOGBMGFFC_TypeDefinitionIndex = 53068;

	class HPCOGBMGFFC
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PlayPenaconyEndmostScale* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PlayPenaconyEndmostScale*))((::PBYTE)hIl2Cpp + HPCOGBMGFFC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPCOGBMGFFC_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void JDPGFIBLFOP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPCOGBMGFFC_JDPGFIBLFOP_OFFSET))(this);
		}

	};
