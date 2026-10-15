#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitFloorCustomValueChange; }
namespace System { class String; }

#define HMLCJDCGAKB_CTOR_OFFSET UNITYSDK_OFFSET(0x15D87970)
#define HMLCJDCGAKB_ILEMLGEGLCC_OFFSET UNITYSDK_OFFSET(0x15D87B80)
#define HMLCJDCGAKB__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x15D87C00)
#define HMLCJDCGAKB__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x15D87D30)

inline static constexpr unsigned int HMLCJDCGAKB_TypeDefinitionIndex = 53468;

	class HMLCJDCGAKB
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitFloorCustomValueChange* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitFloorCustomValueChange*))((::PBYTE)hIl2Cpp + HMLCJDCGAKB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void ILEMLGEGLCC(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HMLCJDCGAKB_ILEMLGEGLCC_OFFSET))(this, a1);
		}

		::System::Void _RegisterEventCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMLCJDCGAKB__REGISTEREVENTCALLBACK_OFFSET))(this);
		}

		::System::Void _UnregisterEventCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMLCJDCGAKB__UNREGISTEREVENTCALLBACK_OFFSET))(this);
		}

	};
