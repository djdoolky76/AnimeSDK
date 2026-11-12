#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitPlayerPassBubbleBridge; }
namespace System { class Object; }

#define NFGMHBPDABB_CTOR_OFFSET UNITYSDK_OFFSET(0xC46CF10)
#define NFGMHBPDABB_ILEMLGEGLCC_OFFSET UNITYSDK_OFFSET(0xC46D310)
#define NFGMHBPDABB__PREPAREDATA_OFFSET UNITYSDK_OFFSET(0xC46D0A0)
#define NFGMHBPDABB__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0xC46D190)
#define NFGMHBPDABB__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0xC46D250)

inline static constexpr unsigned int NFGMHBPDABB_TypeDefinitionIndex = 54164;

	class NFGMHBPDABB
	{
	public:
		::System::UInt32 JGGDKOCIEGH; // 0x68
		::System::UInt32 PEEFHNHDBMF; // 0x6C
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitPlayerPassBubbleBridge* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitPlayerPassBubbleBridge*))((::PBYTE)hIl2Cpp + NFGMHBPDABB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean _PrepareData()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NFGMHBPDABB__PREPAREDATA_OFFSET))(this);
		}

		::System::Void _RegisterEventCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFGMHBPDABB__REGISTEREVENTCALLBACK_OFFSET))(this);
		}

		::System::Void _UnregisterEventCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFGMHBPDABB__UNREGISTEREVENTCALLBACK_OFFSET))(this);
		}

		::System::Void ILEMLGEGLCC(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NFGMHBPDABB_ILEMLGEGLCC_OFFSET))(this, a1);
		}

	};
