#pragma once
#include "unitysdk/unitysdk.h"
class EKFMIDBJDIA;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitPropStateChange; }

#define PPMFNHFGBLC_CTOR_OFFSET UNITYSDK_OFFSET(0xC393DF0)
#define PPMFNHFGBLC_IFCNMIBPBOI_OFFSET UNITYSDK_OFFSET(0xC394510)
#define PPMFNHFGBLC_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC394310)
#define PPMFNHFGBLC__PREPAREDATA_OFFSET UNITYSDK_OFFSET(0xC393F60)
#define PPMFNHFGBLC__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0xC394370)
#define PPMFNHFGBLC__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0xC394440)

inline static constexpr unsigned int PPMFNHFGBLC_TypeDefinitionIndex = 53489;

	class PPMFNHFGBLC
	{
	public:
		::System::UInt32 IDOEBJDGHBF; // 0x68
		::System::UInt32 JJNEKDFIBMA; // 0x6C
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitPropStateChange* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitPropStateChange*))((::PBYTE)hIl2Cpp + PPMFNHFGBLC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean _PrepareData()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PPMFNHFGBLC__PREPAREDATA_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPMFNHFGBLC_ONTASKRESET_OFFSET))(this);
		}

		::System::Void _RegisterEventCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPMFNHFGBLC__REGISTEREVENTCALLBACK_OFFSET))(this);
		}

		::System::Void _UnregisterEventCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPMFNHFGBLC__UNREGISTEREVENTCALLBACK_OFFSET))(this);
		}

		::System::Void IFCNMIBPBOI(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + PPMFNHFGBLC_IFCNMIBPBOI_OFFSET))(this, a1);
		}

	};
