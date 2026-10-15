#pragma once
#include "unitysdk/unitysdk.h"
class BIIAGBFHLJN;
namespace RPG::GameCore { class TaskContext; }

#define LGJHDOLDBBA_CTOR_OFFSET UNITYSDK_OFFSET(0xB699900)
#define LGJHDOLDBBA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB699930)
#define LGJHDOLDBBA_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB699A80)

inline static constexpr unsigned int LGJHDOLDBBA_TypeDefinitionIndex = 53716;

	class LGJHDOLDBBA
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::BIIAGBFHLJN* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::BIIAGBFHLJN*))((::PBYTE)hIl2Cpp + LGJHDOLDBBA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGJHDOLDBBA_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGJHDOLDBBA_ONTASKRESET_OFFSET))(this);
		}

	};
