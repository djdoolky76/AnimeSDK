#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class DisableSummonUnitGather; }
namespace RPG::GameCore { class TaskContext; }

#define DLFJBEDDLGH_CTOR_OFFSET UNITYSDK_OFFSET(0x1060E7F0)
#define DLFJBEDDLGH_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1060E820)
#define DLFJBEDDLGH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1060E860)

inline static constexpr unsigned int DLFJBEDDLGH_TypeDefinitionIndex = 59325;

	class DLFJBEDDLGH
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::DisableSummonUnitGather* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::DisableSummonUnitGather*))((::PBYTE)hIl2Cpp + DLFJBEDDLGH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLFJBEDDLGH_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLFJBEDDLGH_ONTASKBEGIN_OFFSET))(this);
		}

	};
