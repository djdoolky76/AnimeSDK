#pragma once
#include "unitysdk/unitysdk.h"
class HCNFFJKBKMM;
namespace RPG::GameCore { class TaskContext; }

#define JJPDBPBAIJG_CTOR_OFFSET UNITYSDK_OFFSET(0xBA318F0)
#define JJPDBPBAIJG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBA31920)
#define JJPDBPBAIJG_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBA319B0)

inline static constexpr unsigned int JJPDBPBAIJG_TypeDefinitionIndex = 54814;

	class JJPDBPBAIJG
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::HCNFFJKBKMM* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::HCNFFJKBKMM*))((::PBYTE)hIl2Cpp + JJPDBPBAIJG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJPDBPBAIJG_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJPDBPBAIJG_ONTASKRESET_OFFSET))(this);
		}

	};
