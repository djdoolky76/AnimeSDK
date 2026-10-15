#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class MappingAttachPoint; }
namespace RPG::GameCore { class TaskContext; }

#define HDCGGPEMCKJ_CTOR_OFFSET UNITYSDK_OFFSET(0x15C301B0)
#define HDCGGPEMCKJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15C301E0)

inline static constexpr unsigned int HDCGGPEMCKJ_TypeDefinitionIndex = 55170;

	class HDCGGPEMCKJ
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::MappingAttachPoint* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::MappingAttachPoint*))((::PBYTE)hIl2Cpp + HDCGGPEMCKJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDCGGPEMCKJ_ONTASKBEGIN_OFFSET))(this);
		}

	};
