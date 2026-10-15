#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitGroupPropertyChange; }
namespace System { class String; }

#define GNMHAEFBMPC_CTOR_OFFSET UNITYSDK_OFFSET(0x15B0EBA0)
#define GNMHAEFBMPC_ILEMLGEGLCC_OFFSET UNITYSDK_OFFSET(0x15B0EDB0)
#define GNMHAEFBMPC__PREPAREDATA_OFFSET UNITYSDK_OFFSET(0x15B0F290)
#define GNMHAEFBMPC__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x15B0EE10)
#define GNMHAEFBMPC__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x15B0F080)

inline static constexpr unsigned int GNMHAEFBMPC_TypeDefinitionIndex = 53474;

	class GNMHAEFBMPC
	{
	public:
		::System::String* LDJGOLCFGMA; // 0x68
		::System::UInt32 PEEFHNHDBMF; // 0x70
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitGroupPropertyChange* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitGroupPropertyChange*))((::PBYTE)hIl2Cpp + GNMHAEFBMPC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void ILEMLGEGLCC(::System::UInt32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + GNMHAEFBMPC_ILEMLGEGLCC_OFFSET))(this, a1, a2);
		}

		::System::Void _RegisterEventCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNMHAEFBMPC__REGISTEREVENTCALLBACK_OFFSET))(this);
		}

		::System::Void _UnregisterEventCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNMHAEFBMPC__UNREGISTEREVENTCALLBACK_OFFSET))(this);
		}

		::System::Boolean _PrepareData()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GNMHAEFBMPC__PREPAREDATA_OFFSET))(this);
		}

	};
