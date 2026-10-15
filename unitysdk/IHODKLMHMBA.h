#pragma once
#include "unitysdk/unitysdk.h"
class FFCMNDPOADN;
namespace RPG::GameCore { class TaskContext; }

#define IHODKLMHMBA_CTOR_OFFSET UNITYSDK_OFFSET(0x16426260)
#define IHODKLMHMBA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16426290)

	class IHODKLMHMBA
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::FFCMNDPOADN* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::FFCMNDPOADN*))((::PBYTE)hIl2Cpp + IHODKLMHMBA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHODKLMHMBA_ONTASKBEGIN_OFFSET))(this);
		}

	};
