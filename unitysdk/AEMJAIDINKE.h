#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ShowBillboardInStoryMode; }
namespace RPG::GameCore { class TaskContext; }

#define AEMJAIDINKE_CTOR_OFFSET UNITYSDK_OFFSET(0xCF02F70)
#define AEMJAIDINKE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xCF02FA0)

	class AEMJAIDINKE
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowBillboardInStoryMode* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowBillboardInStoryMode*))((::PBYTE)hIl2Cpp + AEMJAIDINKE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEMJAIDINKE_ONTASKBEGIN_OFFSET))(this);
		}

	};
