#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class DisableSummonUnitGather; }
namespace RPG::GameCore { class TaskContext; }

#define DLFJBEDDLGH_CTOR_OFFSET UNITYSDK_OFFSET(0xF89EED0)
#define DLFJBEDDLGH_DISPOSE_OFFSET UNITYSDK_OFFSET(0xF89EF00)
#define DLFJBEDDLGH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xF89EF40)

inline static constexpr unsigned int DLFJBEDDLGH_TypeDefinitionIndex = 58086;

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
