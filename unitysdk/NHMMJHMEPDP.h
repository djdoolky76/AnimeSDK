#pragma once
#include "unitysdk/unitysdk.h"
class HNKAHGBAJID;
namespace RPG::GameCore { class TaskContext; }

#define NHMMJHMEPDP_CTOR_OFFSET UNITYSDK_OFFSET(0xBBD8FF0)
#define NHMMJHMEPDP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBBD9020)

	class NHMMJHMEPDP
	{
	public:
		::HNKAHGBAJID* IGHAHBNLIJA; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::HNKAHGBAJID* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::HNKAHGBAJID*))((::PBYTE)hIl2Cpp + NHMMJHMEPDP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHMMJHMEPDP_ONTASKBEGIN_OFFSET))(this);
		}

	};
