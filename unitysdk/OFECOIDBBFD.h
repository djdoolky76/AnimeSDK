#pragma once
#include "unitysdk/unitysdk.h"
class NGGIGGMKJPC;
namespace RPG::GameCore { class TaskContext; }

#define OFECOIDBBFD_CTOR_OFFSET UNITYSDK_OFFSET(0xC6F6EF0)
#define OFECOIDBBFD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC6F6F20)

inline static constexpr unsigned int OFECOIDBBFD_TypeDefinitionIndex = 54018;

	class OFECOIDBBFD
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::NGGIGGMKJPC* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::NGGIGGMKJPC*))((::PBYTE)hIl2Cpp + OFECOIDBBFD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFECOIDBBFD_ONTASKBEGIN_OFFSET))(this);
		}

	};
