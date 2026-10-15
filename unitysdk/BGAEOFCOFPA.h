#pragma once
#include "unitysdk/unitysdk.h"
class HNGOKEODKMC;
namespace RPG::GameCore { class TaskContext; }

#define BGAEOFCOFPA_CTOR_OFFSET UNITYSDK_OFFSET(0xB1758F0)
#define BGAEOFCOFPA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB175920)

	class BGAEOFCOFPA
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::HNGOKEODKMC* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::HNGOKEODKMC*))((::PBYTE)hIl2Cpp + BGAEOFCOFPA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGAEOFCOFPA_ONTASKBEGIN_OFFSET))(this);
		}

	};
