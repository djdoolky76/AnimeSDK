#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ActivityElationShowCutIn; }
namespace RPG::GameCore { class TaskContext; }

#define NDMHBKDLPFM_CTOR_OFFSET UNITYSDK_OFFSET(0xBB4B470)
#define NDMHBKDLPFM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBB4B4A0)

inline static constexpr unsigned int NDMHBKDLPFM_TypeDefinitionIndex = 56341;

	class NDMHBKDLPFM
	{
	public:
		// static const ::System::String* BMOMFJHBOEM; // 0x0
		// static const ::System::String* EBBBBJIOAHM; // 0x0
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ActivityElationShowCutIn* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ActivityElationShowCutIn*))((::PBYTE)hIl2Cpp + NDMHBKDLPFM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDMHBKDLPFM_ONTASKBEGIN_OFFSET))(this);
		}

	};
