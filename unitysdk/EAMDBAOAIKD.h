#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TutorialChimeraArrangementDisableDragging; }

#define EAMDBAOAIKD_CTOR_OFFSET UNITYSDK_OFFSET(0x1267E620)
#define EAMDBAOAIKD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1267E6D0)
#define EAMDBAOAIKD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1267E650)

inline static constexpr unsigned int EAMDBAOAIKD_TypeDefinitionIndex = 58816;

	class EAMDBAOAIKD
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TutorialChimeraArrangementDisableDragging* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TutorialChimeraArrangementDisableDragging*))((::PBYTE)hIl2Cpp + EAMDBAOAIKD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAMDBAOAIKD_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAMDBAOAIKD_DISPOSE_OFFSET))(this);
		}

	};
