#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RtModifierBehaviorLifeBinding.h"
namespace RPG::GameCore { class RtAttachTrigger; }
namespace RPG::GameCore { class TaskContext; }

#define MFGPFONCOMP_CTOR_OFFSET UNITYSDK_OFFSET(0xB8FA690)
#define MFGPFONCOMP_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB8FA6C0)
#define MFGPFONCOMP_EFKLLLLPAJH_OFFSET UNITYSDK_OFFSET(0xB8FA680)
#define MFGPFONCOMP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB8FA700)

	class MFGPFONCOMP
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RtAttachTrigger* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RtAttachTrigger*))((::PBYTE)hIl2Cpp + MFGPFONCOMP_CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::RtModifierBehaviorLifeBinding EFKLLLLPAJH()
		{
			return ((::RPG::GameCore::RtModifierBehaviorLifeBinding(*)(::PVOID))((::PBYTE)hIl2Cpp + MFGPFONCOMP_EFKLLLLPAJH_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFGPFONCOMP_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFGPFONCOMP_ONTASKBEGIN_OFFSET))(this);
		}

	};
