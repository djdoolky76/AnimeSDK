#pragma once
#include "unitysdk/unitysdk.h"
class NJGLADGCALF;
namespace RPG::GameCore { class TaskContext; }

#define HCNNJPHOKDK_CTOR_OFFSET UNITYSDK_OFFSET(0x15C2A360)
#define HCNNJPHOKDK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15C2A390)

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
