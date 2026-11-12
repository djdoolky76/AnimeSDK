#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class AJJANBAHOGJ;
class IAAOMMGICFK;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }

#define GCNOKOMIKFE_CTOR_OFFSET UNITYSDK_OFFSET(0x168C5BC0)
#define GCNOKOMIKFE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x168C6100)
#define GCNOKOMIKFE_EALOIIOKNCD_OFFSET UNITYSDK_OFFSET(0x168C5FF0)
#define GCNOKOMIKFE_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x168C6180)
#define GCNOKOMIKFE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x168C5BD0)
#define GCNOKOMIKFE_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x168C6060)
#define GCNOKOMIKFE_TICK_OFFSET UNITYSDK_OFFSET(0x168C5F30)

inline static constexpr unsigned int GCNOKOMIKFE_TypeDefinitionIndex = 53834;

	class GCNOKOMIKFE : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::GameEntity* OJAHLJGABMJ; // 0x18
		::AJJANBAHOGJ* IGHAHBNLIJA; // 0x20
		::IAAOMMGICFK* HOADGOKCPDG; // 0x28
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x30
		::System::Single NNKDEALFLIN; // 0x38
		::System::Int32 MCHMDPAPOHC; // 0x3C
		::System::Int32 IDEAJCAGFMB; // 0x40
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::AJJANBAHOGJ* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::AJJANBAHOGJ*))((::PBYTE)hIl2Cpp + GCNOKOMIKFE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCNOKOMIKFE_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GCNOKOMIKFE_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCNOKOMIKFE_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCNOKOMIKFE_DISPOSE_OFFSET))(this);
		}

		::System::Void OnFinishImmediatelyInPerformance(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GCNOKOMIKFE_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET))(this, a1);
		}

		::System::Void EALOIIOKNCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCNOKOMIKFE_EALOIIOKNCD_OFFSET))(this);
		}

	};
