#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::Client { class WaitMatchThreeV2BirdLocationChange; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define JKAPAOPAFAD_CTOR_OFFSET UNITYSDK_OFFSET(0xB20D520)
#define JKAPAOPAFAD_ILEMLGEGLCC_OFFSET UNITYSDK_OFFSET(0xB20D870)
#define JKAPAOPAFAD__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0xB20D6F0)
#define JKAPAOPAFAD__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0xB20D7B0)

	class JKAPAOPAFAD
	{
	public:
		::System::UInt32 NFPAFAKKALP; // 0x68
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::Client::WaitMatchThreeV2BirdLocationChange* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::Client::WaitMatchThreeV2BirdLocationChange*))((::PBYTE)hIl2Cpp + JKAPAOPAFAD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _RegisterEventCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKAPAOPAFAD__REGISTEREVENTCALLBACK_OFFSET))(this);
		}

		::System::Void _UnregisterEventCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKAPAOPAFAD__UNREGISTEREVENTCALLBACK_OFFSET))(this);
		}

		::System::Void ILEMLGEGLCC(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JKAPAOPAFAD_ILEMLGEGLCC_OFFSET))(this, a1);
		}

	};
