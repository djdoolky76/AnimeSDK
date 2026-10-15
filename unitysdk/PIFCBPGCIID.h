#pragma once
#include "unitysdk/unitysdk.h"
class CFFPEAALCPH;
namespace RPG::GameCore { class AnimTriggerRandomPlay; }
namespace RPG::GameCore { class TaskContext; }

#define PIFCBPGCIID_CTOR_OFFSET UNITYSDK_OFFSET(0xC25E640)
#define PIFCBPGCIID_NBLODDAKOBK_OFFSET UNITYSDK_OFFSET(0xC25EAC0)
#define PIFCBPGCIID_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC25E670)

	class PIFCBPGCIID
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AnimTriggerRandomPlay* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AnimTriggerRandomPlay*))((::PBYTE)hIl2Cpp + PIFCBPGCIID_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIFCBPGCIID_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Boolean NBLODDAKOBK(::CFFPEAALCPH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CFFPEAALCPH*))((::PBYTE)hIl2Cpp + PIFCBPGCIID_NBLODDAKOBK_OFFSET))(this, a1);
		}

	};
