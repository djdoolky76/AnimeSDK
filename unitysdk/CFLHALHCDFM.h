#pragma once
#include "unitysdk/unitysdk.h"
class HDIHIEBCOAE;
namespace RPG::GameCore { class TaskContext; }

#define CFLHALHCDFM_CTOR_OFFSET UNITYSDK_OFFSET(0xCC4C700)
#define CFLHALHCDFM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xCC4C730)

inline static constexpr unsigned int CFLHALHCDFM_TypeDefinitionIndex = 55668;

	class CFLHALHCDFM
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::HDIHIEBCOAE* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::HDIHIEBCOAE*))((::PBYTE)hIl2Cpp + CFLHALHCDFM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFLHALHCDFM_ONTASKBEGIN_OFFSET))(this);
		}

	};
