#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetTargetColliderLayer; }
namespace RPG::GameCore { class TaskContext; }

#define CPJFHPHBPHP_CTOR_OFFSET UNITYSDK_OFFSET(0xDCD7070)
#define CPJFHPHBPHP_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDCD70A0)
#define CPJFHPHBPHP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xDCD70E0)

inline static constexpr unsigned int CPJFHPHBPHP_TypeDefinitionIndex = 53254;

	class CPJFHPHBPHP
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetTargetColliderLayer* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetTargetColliderLayer*))((::PBYTE)hIl2Cpp + CPJFHPHBPHP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPJFHPHBPHP_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPJFHPHBPHP_ONTASKBEGIN_OFFSET))(this);
		}

	};
