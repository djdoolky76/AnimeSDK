#pragma once
#include "unitysdk/unitysdk.h"
class CMFFNNENPNL;
namespace RPG::GameCore { class TaskContext; }

#define OFIMEDCJMLD_CTOR_OFFSET UNITYSDK_OFFSET(0xBE42A20)
#define OFIMEDCJMLD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBE42A50)

inline static constexpr unsigned int OFIMEDCJMLD_TypeDefinitionIndex = 56390;

	class OFIMEDCJMLD
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::CMFFNNENPNL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::CMFFNNENPNL*))((::PBYTE)hIl2Cpp + OFIMEDCJMLD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFIMEDCJMLD_ONTASKBEGIN_OFFSET))(this);
		}

	};
