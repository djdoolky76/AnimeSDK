#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdvTrackNpcTrigger; }
namespace RPG::GameCore { class TaskContext; }

#define EDEPKJAPJLO_CTOR_OFFSET UNITYSDK_OFFSET(0x13312DD0)
#define EDEPKJAPJLO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x13312E00)

	class EDEPKJAPJLO
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvTrackNpcTrigger* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvTrackNpcTrigger*))((::PBYTE)hIl2Cpp + EDEPKJAPJLO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDEPKJAPJLO_ONTASKBEGIN_OFFSET))(this);
		}

	};
