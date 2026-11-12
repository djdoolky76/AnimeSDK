#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class PlayPenaconyEndmostSimpleTalk; }
namespace RPG::GameCore { class TaskContext; }

#define HGKPLJLLJOF_CTOR_OFFSET UNITYSDK_OFFSET(0x16BF5910)
#define HGKPLJLLJOF_JDPGFIBLFOP_OFFSET UNITYSDK_OFFSET(0x16BF5BC0)
#define HGKPLJLLJOF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16BF5940)

inline static constexpr unsigned int HGKPLJLLJOF_TypeDefinitionIndex = 54230;

	class HGKPLJLLJOF
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PlayPenaconyEndmostSimpleTalk* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PlayPenaconyEndmostSimpleTalk*))((::PBYTE)hIl2Cpp + HGKPLJLLJOF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGKPLJLLJOF_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void JDPGFIBLFOP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGKPLJLLJOF_JDPGFIBLFOP_OFFSET))(this);
		}

	};
