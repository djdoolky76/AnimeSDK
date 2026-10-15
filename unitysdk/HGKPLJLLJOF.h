#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class PlayPenaconyEndmostSimpleTalk; }
namespace RPG::GameCore { class TaskContext; }

#define HGKPLJLLJOF_CTOR_OFFSET UNITYSDK_OFFSET(0x15C9E970)
#define HGKPLJLLJOF_JDPGFIBLFOP_OFFSET UNITYSDK_OFFSET(0x15C9EC20)
#define HGKPLJLLJOF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15C9E9A0)

inline static constexpr unsigned int HGKPLJLLJOF_TypeDefinitionIndex = 53070;

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
