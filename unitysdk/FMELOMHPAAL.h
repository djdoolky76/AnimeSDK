#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::Client { class Stage; }
namespace RPG::GameCore { class SetStageItemState; }
namespace RPG::GameCore { class TaskContext; }

#define FMELOMHPAAL_CTOR_OFFSET UNITYSDK_OFFSET(0x15853250)
#define FMELOMHPAAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x158537D0)
#define FMELOMHPAAL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15853280)
#define FMELOMHPAAL_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15853630)

inline static constexpr unsigned int FMELOMHPAAL_TypeDefinitionIndex = 58578;

	class FMELOMHPAAL
	{
	public:
		::RPG::GameCore::SetStageItemState* EJJEEJENLDA; // 0x28
		::RPG::Client::Stage* PDAIGLPEMEE; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetStageItemState* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetStageItemState*))((::PBYTE)hIl2Cpp + FMELOMHPAAL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMELOMHPAAL_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMELOMHPAAL_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMELOMHPAAL_DISPOSE_OFFSET))(this);
		}

	};
