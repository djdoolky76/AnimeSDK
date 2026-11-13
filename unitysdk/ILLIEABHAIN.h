#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AutoMappingAttachPoint; }
namespace RPG::GameCore { class TaskContext; }

#define ILLIEABHAIN_CTOR_OFFSET UNITYSDK_OFFSET(0x1B5AB030)
#define ILLIEABHAIN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1B5AB060)

inline static constexpr unsigned int ILLIEABHAIN_TypeDefinitionIndex = 56041;

	class ILLIEABHAIN
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AutoMappingAttachPoint* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AutoMappingAttachPoint*))((::PBYTE)hIl2Cpp + ILLIEABHAIN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILLIEABHAIN_ONTASKBEGIN_OFFSET))(this);
		}

	};
