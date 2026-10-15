#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetAttachEffectTimeSlow; }
namespace RPG::GameCore { class TaskContext; }

#define BHFEEAPNAMI_CTOR_OFFSET UNITYSDK_OFFSET(0xB475AC0)
#define BHFEEAPNAMI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB475AF0)

	class BHFEEAPNAMI
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetAttachEffectTimeSlow* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetAttachEffectTimeSlow*))((::PBYTE)hIl2Cpp + BHFEEAPNAMI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHFEEAPNAMI_ONTASKBEGIN_OFFSET))(this);
		}

	};
