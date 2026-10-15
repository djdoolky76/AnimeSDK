#pragma once
#include "unitysdk/unitysdk.h"
class IEOBOMONJKG;
namespace RPG::GameCore { class TaskContext; }

#define EPMBODCCJEB_CTOR_OFFSET UNITYSDK_OFFSET(0x155CD080)
#define EPMBODCCJEB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x155CD0B0)

inline static constexpr unsigned int EPMBODCCJEB_TypeDefinitionIndex = 52838;

	class EPMBODCCJEB
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::IEOBOMONJKG* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::IEOBOMONJKG*))((::PBYTE)hIl2Cpp + EPMBODCCJEB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPMBODCCJEB_ONTASKBEGIN_OFFSET))(this);
		}

	};
