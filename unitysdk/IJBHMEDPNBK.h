#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class PlayPenaconyEndmostClosePage; }
namespace RPG::GameCore { class TaskContext; }

#define IJBHMEDPNBK_CTOR_OFFSET UNITYSDK_OFFSET(0x1644BB20)
#define IJBHMEDPNBK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1644BB50)

inline static constexpr unsigned int IJBHMEDPNBK_TypeDefinitionIndex = 53066;

	class IJBHMEDPNBK
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PlayPenaconyEndmostClosePage* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PlayPenaconyEndmostClosePage*))((::PBYTE)hIl2Cpp + IJBHMEDPNBK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJBHMEDPNBK_ONTASKBEGIN_OFFSET))(this);
		}

	};
