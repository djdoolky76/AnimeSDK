#pragma once
#include "unitysdk/unitysdk.h"
class GECICOILNGO;
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define HMKFLGIBALP_CTOR_OFFSET UNITYSDK_OFFSET(0x15D85E90)
#define HMKFLGIBALP_ILEMLGEGLCC_OFFSET UNITYSDK_OFFSET(0x15D861B0)
#define HMKFLGIBALP__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x15D86030)
#define HMKFLGIBALP__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x15D860F0)

inline static constexpr unsigned int HMKFLGIBALP_TypeDefinitionIndex = 53464;

	class HMKFLGIBALP
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::GECICOILNGO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::GECICOILNGO*))((::PBYTE)hIl2Cpp + HMKFLGIBALP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _RegisterEventCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMKFLGIBALP__REGISTEREVENTCALLBACK_OFFSET))(this);
		}

		::System::Void _UnregisterEventCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMKFLGIBALP__UNREGISTEREVENTCALLBACK_OFFSET))(this);
		}

		::System::Void ILEMLGEGLCC(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HMKFLGIBALP_ILEMLGEGLCC_OFFSET))(this, a1);
		}

	};
