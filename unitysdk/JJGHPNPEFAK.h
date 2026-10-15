#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitFloorSavedValueChangeV2; }
namespace System { class String; }

#define JJGHPNPEFAK_CTOR_OFFSET UNITYSDK_OFFSET(0xB1FE900)
#define JJGHPNPEFAK_ILEMLGEGLCC_OFFSET UNITYSDK_OFFSET(0xB1FEB90)
#define JJGHPNPEFAK__PREPAREDATA_OFFSET UNITYSDK_OFFSET(0xB1FEE20)
#define JJGHPNPEFAK__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0xB1FEBF0)
#define JJGHPNPEFAK__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0xB1FED00)

inline static constexpr unsigned int JJGHPNPEFAK_TypeDefinitionIndex = 53471;

	class JJGHPNPEFAK
	{
	public:
		::System::String* OILAMMNCFMN; // 0x68
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitFloorSavedValueChangeV2* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitFloorSavedValueChangeV2*))((::PBYTE)hIl2Cpp + JJGHPNPEFAK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void ILEMLGEGLCC(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + JJGHPNPEFAK_ILEMLGEGLCC_OFFSET))(this, a1);
		}

		::System::Void _RegisterEventCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJGHPNPEFAK__REGISTEREVENTCALLBACK_OFFSET))(this);
		}

		::System::Void _UnregisterEventCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJGHPNPEFAK__UNREGISTEREVENTCALLBACK_OFFSET))(this);
		}

		::System::Boolean _PrepareData()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JJGHPNPEFAK__PREPAREDATA_OFFSET))(this);
		}

	};
