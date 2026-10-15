#pragma once
#include "unitysdk/unitysdk.h"
class DBLFKIDDKDO;
namespace RPG::GameCore { class TaskContext; }

#define NGMHDHBIJJM_CTOR_OFFSET UNITYSDK_OFFSET(0xBBAF550)
#define NGMHDHBIJJM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBBAF580)

inline static constexpr unsigned int NGMHDHBIJJM_TypeDefinitionIndex = 55048;

	class NGMHDHBIJJM
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::DBLFKIDDKDO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::DBLFKIDDKDO*))((::PBYTE)hIl2Cpp + NGMHDHBIJJM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGMHDHBIJJM_ONTASKBEGIN_OFFSET))(this);
		}

	};
