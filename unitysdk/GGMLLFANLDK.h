#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ReleaseTargetUniqueName; }
namespace RPG::GameCore { class TaskContext; }

#define GGMLLFANLDK_CTOR_OFFSET UNITYSDK_OFFSET(0x1B4AD860)
#define GGMLLFANLDK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1B4AD890)

inline static constexpr unsigned int GGMLLFANLDK_TypeDefinitionIndex = 56478;

	class GGMLLFANLDK
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ReleaseTargetUniqueName* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ReleaseTargetUniqueName*))((::PBYTE)hIl2Cpp + GGMLLFANLDK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGMLLFANLDK_ONTASKBEGIN_OFFSET))(this);
		}

	};
