#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SkipBillboardModelVisibleCheck; }
namespace RPG::GameCore { class TaskContext; }

#define KCONOJKDNLA_CTOR_OFFSET UNITYSDK_OFFSET(0xB33E190)
#define KCONOJKDNLA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB33E1C0)

inline static constexpr unsigned int KCONOJKDNLA_TypeDefinitionIndex = 58712;

	class KCONOJKDNLA
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SkipBillboardModelVisibleCheck* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SkipBillboardModelVisibleCheck*))((::PBYTE)hIl2Cpp + KCONOJKDNLA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCONOJKDNLA_ONTASKBEGIN_OFFSET))(this);
		}

	};
