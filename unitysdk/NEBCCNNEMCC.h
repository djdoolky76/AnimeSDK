#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class KFELGAIGHAP;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerDrinkMakerBartendInMission; }
namespace System { class Object; }

#define NEBCCNNEMCC_BHEIANKOOPN_OFFSET UNITYSDK_OFFSET(0x16FD0090)
#define NEBCCNNEMCC_CTOR_OFFSET UNITYSDK_OFFSET(0x16FCF900)
#define NEBCCNNEMCC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16FCFA00)
#define NEBCCNNEMCC_KOOAFCIDIOH_OFFSET UNITYSDK_OFFSET(0x16FD0300)
#define NEBCCNNEMCC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16FCFC00)
#define NEBCCNNEMCC_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x16FD0150)
#define NEBCCNNEMCC_TICK_OFFSET UNITYSDK_OFFSET(0x16FD0230)

inline static constexpr unsigned int NEBCCNNEMCC_TypeDefinitionIndex = 60047;

	class NEBCCNNEMCC : public ::GELIALJDFBL
	{
	public:
		::KFELGAIGHAP* EHOAHCNLNAN; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::KFELGAIGHAP* BBLAHCCDCDH; // 0x28
		::KFELGAIGHAP* IKNPCLDDCDI; // 0x30
		::RPG::GameCore::TriggerDrinkMakerBartendInMission* OFKGLJOAMLD; // 0x38
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerDrinkMakerBartendInMission* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerDrinkMakerBartendInMission*))((::PBYTE)hIl2Cpp + NEBCCNNEMCC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEBCCNNEMCC_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEBCCNNEMCC_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEBCCNNEMCC_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NEBCCNNEMCC_TICK_OFFSET))(this, a1);
		}

		::System::Void BHEIANKOOPN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEBCCNNEMCC_BHEIANKOOPN_OFFSET))(this);
		}

		::System::Void KOOAFCIDIOH(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NEBCCNNEMCC_KOOAFCIDIOH_OFFSET))(this, a1);
		}

	};
