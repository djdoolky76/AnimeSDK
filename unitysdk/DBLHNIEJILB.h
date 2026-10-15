#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetIgnoreSendEnlightSection; }
namespace RPG::GameCore { class TaskContext; }

#define DBLHNIEJILB_CTOR_OFFSET UNITYSDK_OFFSET(0xE22F940)
#define DBLHNIEJILB_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0xE22F970)
#define DBLHNIEJILB_ONSKIP_OFFSET UNITYSDK_OFFSET(0xE22FB30)
#define DBLHNIEJILB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xE22F980)

	class DBLHNIEJILB
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetIgnoreSendEnlightSection* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetIgnoreSendEnlightSection*))((::PBYTE)hIl2Cpp + DBLHNIEJILB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_ForceSkip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DBLHNIEJILB_GET_FORCESKIP_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBLHNIEJILB_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnSkip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBLHNIEJILB_ONSKIP_OFFSET))(this);
		}

	};
