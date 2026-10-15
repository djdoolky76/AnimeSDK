#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdvSetTargetAlertValue; }
namespace RPG::GameCore { class TaskContext; }

#define DBHHOFMEPIA_CTOR_OFFSET UNITYSDK_OFFSET(0xDFE1E80)
#define DBHHOFMEPIA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xDFE1EB0)

inline static constexpr unsigned int DBHHOFMEPIA_TypeDefinitionIndex = 52502;

	class DBHHOFMEPIA
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvSetTargetAlertValue* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvSetTargetAlertValue*))((::PBYTE)hIl2Cpp + DBHHOFMEPIA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBHHOFMEPIA_ONTASKBEGIN_OFFSET))(this);
		}

	};
