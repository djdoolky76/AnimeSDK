#pragma once
#include "unitysdk/unitysdk.h"
class JONPGIKCGBM;
namespace RPG::GameCore { class TaskContext; }

#define FCGFJFNGIEG_CTOR_OFFSET UNITYSDK_OFFSET(0x1C015880)
#define FCGFJFNGIEG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1C0158B0)
#define FCGFJFNGIEG_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1C015940)

inline static constexpr unsigned int FCGFJFNGIEG_TypeDefinitionIndex = 54813;

	class FCGFJFNGIEG
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::JONPGIKCGBM* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::JONPGIKCGBM*))((::PBYTE)hIl2Cpp + FCGFJFNGIEG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCGFJFNGIEG_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCGFJFNGIEG_ONTASKRESET_OFFSET))(this);
		}

	};
