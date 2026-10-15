#pragma once
#include "unitysdk/unitysdk.h"
class KHJCNJAILFO;
namespace RPG::GameCore { class TaskContext; }

#define OHEAFHBABNG_CTOR_OFFSET UNITYSDK_OFFSET(0xBE61FA0)
#define OHEAFHBABNG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBE61FD0)

inline static constexpr unsigned int OHEAFHBABNG_TypeDefinitionIndex = 58631;

	class OHEAFHBABNG
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::KHJCNJAILFO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::KHJCNJAILFO*))((::PBYTE)hIl2Cpp + OHEAFHBABNG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHEAFHBABNG_ONTASKBEGIN_OFFSET))(this);
		}

	};
