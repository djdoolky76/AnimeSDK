#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class PropPuzzleEventSender; }
namespace RPG::GameCore { class TaskContext; }

#define JPMNCOGLPMO_CTOR_OFFSET UNITYSDK_OFFSET(0xBB4DB20)
#define JPMNCOGLPMO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBB4DB30)
#define JPMNCOGLPMO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBB4DBD0)
#define JPMNCOGLPMO_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBB4DF10)
#define JPMNCOGLPMO_TICK_OFFSET UNITYSDK_OFFSET(0xBB4DB70)

inline static constexpr unsigned int JPMNCOGLPMO_TypeDefinitionIndex = 59595;

	class JPMNCOGLPMO : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x18
		::RPG::GameCore::PropPuzzleEventSender* IGHAHBNLIJA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PropPuzzleEventSender* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropPuzzleEventSender*))((::PBYTE)hIl2Cpp + JPMNCOGLPMO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPMNCOGLPMO_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JPMNCOGLPMO_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPMNCOGLPMO_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPMNCOGLPMO_ONTASKRESET_OFFSET))(this);
		}

	};
