#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdvCharacterSetMotionBlendTime; }
namespace RPG::GameCore { class TaskContext; }

#define NBHJHHLJHIH_CTOR_OFFSET UNITYSDK_OFFSET(0xBAC3E80)
#define NBHJHHLJHIH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBAC3EB0)

inline static constexpr unsigned int NBHJHHLJHIH_TypeDefinitionIndex = 52339;

	class NBHJHHLJHIH
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvCharacterSetMotionBlendTime* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvCharacterSetMotionBlendTime*))((::PBYTE)hIl2Cpp + NBHJHHLJHIH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBHJHHLJHIH_ONTASKBEGIN_OFFSET))(this);
		}

	};
