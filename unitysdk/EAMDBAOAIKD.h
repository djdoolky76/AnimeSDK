#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TutorialChimeraArrangementDisableDragging; }

#define EAMDBAOAIKD_CTOR_OFFSET UNITYSDK_OFFSET(0x181DAB60)
#define EAMDBAOAIKD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x181DAC10)
#define EAMDBAOAIKD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x181DAB90)

inline static constexpr unsigned int EAMDBAOAIKD_TypeDefinitionIndex = 60084;

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
