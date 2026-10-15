#pragma once
#include "unitysdk/unitysdk.h"
class BIAJADAIBND;
namespace RPG::GameCore { class TaskContext; }

#define DEDJEPNAPEI_CTOR_OFFSET UNITYSDK_OFFSET(0xE5048E0)
#define DEDJEPNAPEI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xE504910)

	class DEDJEPNAPEI
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::BIAJADAIBND* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::BIAJADAIBND*))((::PBYTE)hIl2Cpp + DEDJEPNAPEI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEDJEPNAPEI_ONTASKBEGIN_OFFSET))(this);
		}

	};
