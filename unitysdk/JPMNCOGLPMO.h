#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class PropPuzzleEventSender; }
namespace RPG::GameCore { class TaskContext; }

#define JPMNCOGLPMO_CTOR_OFFSET UNITYSDK_OFFSET(0xB2CA900)
#define JPMNCOGLPMO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB2CA910)
#define JPMNCOGLPMO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB2CA9B0)
#define JPMNCOGLPMO_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB2CAD00)
#define JPMNCOGLPMO_TICK_OFFSET UNITYSDK_OFFSET(0xB2CA950)

inline static constexpr unsigned int JPMNCOGLPMO_TypeDefinitionIndex = 58339;

	class JPMNCOGLPMO : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::PropPuzzleEventSender* IGHAHBNLIJA; // 0x18
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x20
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
