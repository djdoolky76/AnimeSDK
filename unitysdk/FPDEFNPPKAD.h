#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TravelShipHideDockMapIcon; }

#define FPDEFNPPKAD_CTOR_OFFSET UNITYSDK_OFFSET(0x159106E0)
#define FPDEFNPPKAD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x159106F0)
#define FPDEFNPPKAD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15910790)
#define FPDEFNPPKAD_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15910B00)
#define FPDEFNPPKAD_TICK_OFFSET UNITYSDK_OFFSET(0x15910730)

inline static constexpr unsigned int FPDEFNPPKAD_TypeDefinitionIndex = 53436;

	class FPDEFNPPKAD : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x18
		::RPG::GameCore::TravelShipHideDockMapIcon* IGHAHBNLIJA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TravelShipHideDockMapIcon* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TravelShipHideDockMapIcon*))((::PBYTE)hIl2Cpp + FPDEFNPPKAD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPDEFNPPKAD_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FPDEFNPPKAD_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPDEFNPPKAD_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPDEFNPPKAD_ONTASKRESET_OFFSET))(this);
		}

	};
