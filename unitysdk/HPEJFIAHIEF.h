#pragma once
#include "unitysdk/unitysdk.h"
class IIFNNEDICFK;
namespace RPG::GameCore { class TaskContext; }

#define HPEJFIAHIEF_CTOR_OFFSET UNITYSDK_OFFSET(0x16D66540)
#define HPEJFIAHIEF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16D66570)

inline static constexpr unsigned int HPEJFIAHIEF_TypeDefinitionIndex = 56914;

	class HPEJFIAHIEF
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::IIFNNEDICFK* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::IIFNNEDICFK*))((::PBYTE)hIl2Cpp + HPEJFIAHIEF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPEJFIAHIEF_ONTASKBEGIN_OFFSET))(this);
		}

	};
