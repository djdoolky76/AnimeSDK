#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class RelateTimeRewindTargetMaterial; }
namespace RPG::GameCore { class TaskContext; }

#define NLPKEDLGOJB_CTOR_OFFSET UNITYSDK_OFFSET(0xBC79AA0)
#define NLPKEDLGOJB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBC79AD0)

inline static constexpr unsigned int NLPKEDLGOJB_TypeDefinitionIndex = 53384;

	class NLPKEDLGOJB
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RelateTimeRewindTargetMaterial* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RelateTimeRewindTargetMaterial*))((::PBYTE)hIl2Cpp + NLPKEDLGOJB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLPKEDLGOJB_ONTASKBEGIN_OFFSET))(this);
		}

	};
