#pragma once
#include "unitysdk/unitysdk.h"
class FDDGFLBHAHE;
namespace RPG::GameCore { class TaskContext; }

#define IIHKLNHFGNJ_CTOR_OFFSET UNITYSDK_OFFSET(0x173F5B50)
#define IIHKLNHFGNJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x173F5B80)

inline static constexpr unsigned int IIHKLNHFGNJ_TypeDefinitionIndex = 56108;

	class IIHKLNHFGNJ
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::FDDGFLBHAHE* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::FDDGFLBHAHE*))((::PBYTE)hIl2Cpp + IIHKLNHFGNJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIHKLNHFGNJ_ONTASKBEGIN_OFFSET))(this);
		}

	};
