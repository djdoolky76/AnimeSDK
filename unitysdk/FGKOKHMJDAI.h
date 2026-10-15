#pragma once
#include "unitysdk/unitysdk.h"
class GCCMOKELOPB;
namespace RPG::GameCore { class TaskContext; }

#define FGKOKHMJDAI_CTOR_OFFSET UNITYSDK_OFFSET(0x15767440)
#define FGKOKHMJDAI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15767470)

	class FGKOKHMJDAI
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::GCCMOKELOPB* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::GCCMOKELOPB*))((::PBYTE)hIl2Cpp + FGKOKHMJDAI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGKOKHMJDAI_ONTASKBEGIN_OFFSET))(this);
		}

	};
