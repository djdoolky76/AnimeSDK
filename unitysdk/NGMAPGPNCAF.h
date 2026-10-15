#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdvSetTriggerSkipFakeAvatar; }
namespace RPG::GameCore { class TaskContext; }

#define NGMAPGPNCAF_CTOR_OFFSET UNITYSDK_OFFSET(0xBBAF460)
#define NGMAPGPNCAF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBBAF490)

inline static constexpr unsigned int NGMAPGPNCAF_TypeDefinitionIndex = 52503;

	class NGMAPGPNCAF
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvSetTriggerSkipFakeAvatar* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvSetTriggerSkipFakeAvatar*))((::PBYTE)hIl2Cpp + NGMAPGPNCAF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGMAPGPNCAF_ONTASKBEGIN_OFFSET))(this);
		}

	};
