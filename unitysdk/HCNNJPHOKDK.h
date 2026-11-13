#pragma once
#include "unitysdk/unitysdk.h"
class NJGLADGCALF;
namespace RPG::GameCore { class TaskContext; }

#define HCNNJPHOKDK_CTOR_OFFSET UNITYSDK_OFFSET(0x1B7BD820)
#define HCNNJPHOKDK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1B7BD850)

inline static constexpr unsigned int HCNNJPHOKDK_TypeDefinitionIndex = 59867;

	class HCNNJPHOKDK
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::NJGLADGCALF* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::NJGLADGCALF*))((::PBYTE)hIl2Cpp + HCNNJPHOKDK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCNNJPHOKDK_ONTASKBEGIN_OFFSET))(this);
		}

	};
