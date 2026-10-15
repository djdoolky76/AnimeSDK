#pragma once
#include "unitysdk/unitysdk.h"
class PHGMBKIHFBC;
namespace RPG::GameCore { class TaskContext; }

#define LEPNEOMOJAA_CTOR_OFFSET UNITYSDK_OFFSET(0xB65DCA0)
#define LEPNEOMOJAA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB65DCD0)

inline static constexpr unsigned int LEPNEOMOJAA_TypeDefinitionIndex = 55267;

	class LEPNEOMOJAA
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::PHGMBKIHFBC* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::PHGMBKIHFBC*))((::PBYTE)hIl2Cpp + LEPNEOMOJAA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEPNEOMOJAA_ONTASKBEGIN_OFFSET))(this);
		}

	};
