#pragma once
#include "unitysdk/unitysdk.h"
class APOGNPMEHDK;
namespace RPG::GameCore { class TaskContext; }

#define JKEDLBHDNFD_CTOR_OFFSET UNITYSDK_OFFSET(0xB21A530)
#define JKEDLBHDNFD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB21A780)
#define JKEDLBHDNFD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB21A560)

	class JKEDLBHDNFD
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::APOGNPMEHDK* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::APOGNPMEHDK*))((::PBYTE)hIl2Cpp + JKEDLBHDNFD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKEDLBHDNFD_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKEDLBHDNFD_DISPOSE_OFFSET))(this);
		}

	};
