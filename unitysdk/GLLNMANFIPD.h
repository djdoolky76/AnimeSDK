#pragma once
#include "unitysdk/unitysdk.h"
class PIILJCMOBLJ;
namespace RPG::GameCore { class TaskContext; }

#define GLLNMANFIPD_CTOR_OFFSET UNITYSDK_OFFSET(0x15ABCF60)
#define GLLNMANFIPD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15ABCF90)

	class GLLNMANFIPD
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::PIILJCMOBLJ* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::PIILJCMOBLJ*))((::PBYTE)hIl2Cpp + GLLNMANFIPD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLLNMANFIPD_ONTASKBEGIN_OFFSET))(this);
		}

	};
