#pragma once
#include "unitysdk/unitysdk.h"
class MDGGNPMMCCN;
namespace RPG::GameCore { class TaskContext; }

#define MEEDBIMNFKJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB8BD650)
#define MEEDBIMNFKJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB8BD680)

	class MEEDBIMNFKJ
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::MDGGNPMMCCN* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::MDGGNPMMCCN*))((::PBYTE)hIl2Cpp + MEEDBIMNFKJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEEDBIMNFKJ_ONTASKBEGIN_OFFSET))(this);
		}

	};
