#pragma once
#include "unitysdk/unitysdk.h"
class BENHFIGIMGL;
namespace RPG::GameCore { class TaskContext; }

#define EPLBBONHNGB_CTOR_OFFSET UNITYSDK_OFFSET(0x155CBA60)
#define EPLBBONHNGB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x155CBA90)

inline static constexpr unsigned int EPLBBONHNGB_TypeDefinitionIndex = 52783;

	class EPLBBONHNGB
	{
	public:
		::BENHFIGIMGL* JKJPFJALGKO; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::BENHFIGIMGL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::BENHFIGIMGL*))((::PBYTE)hIl2Cpp + EPLBBONHNGB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPLBBONHNGB_ONTASKBEGIN_OFFSET))(this);
		}

	};
