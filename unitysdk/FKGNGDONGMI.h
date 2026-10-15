#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TravelShipHideLandOnBtn; }

#define FKGNGDONGMI_CTOR_OFFSET UNITYSDK_OFFSET(0x157E7CD0)
#define FKGNGDONGMI_DISPOSE_OFFSET UNITYSDK_OFFSET(0x157E7CE0)
#define FKGNGDONGMI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x157E7D80)
#define FKGNGDONGMI_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x157E80E0)
#define FKGNGDONGMI_TICK_OFFSET UNITYSDK_OFFSET(0x157E7D20)

inline static constexpr unsigned int FKGNGDONGMI_TypeDefinitionIndex = 53437;

	class FKGNGDONGMI : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x18
		::RPG::GameCore::TravelShipHideLandOnBtn* IGHAHBNLIJA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TravelShipHideLandOnBtn* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TravelShipHideLandOnBtn*))((::PBYTE)hIl2Cpp + FKGNGDONGMI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKGNGDONGMI_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FKGNGDONGMI_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKGNGDONGMI_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKGNGDONGMI_ONTASKRESET_OFFSET))(this);
		}

	};
