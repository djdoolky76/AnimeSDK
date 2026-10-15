#pragma once
#include "unitysdk/unitysdk.h"
class FBCGHKLKHJN;
namespace RPG::GameCore { class TaskContext; }

#define PGHBIAMIHMH_CTOR_OFFSET UNITYSDK_OFFSET(0xC218720)
#define PGHBIAMIHMH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC218750)

inline static constexpr unsigned int PGHBIAMIHMH_TypeDefinitionIndex = 55568;

	class PGHBIAMIHMH
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::FBCGHKLKHJN* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::FBCGHKLKHJN*))((::PBYTE)hIl2Cpp + PGHBIAMIHMH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGHBIAMIHMH_ONTASKBEGIN_OFFSET))(this);
		}

	};
