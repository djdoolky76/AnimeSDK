#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class KFELGAIGHAP;
namespace RPG::GameCore { class LoopTargetList; }
namespace RPG::GameCore { class TaskContext; }

#define OELNPPEOAJM_CMEFBBBDBDL_OFFSET UNITYSDK_OFFSET(0xBE32540)
#define OELNPPEOAJM_CTOR_OFFSET UNITYSDK_OFFSET(0xBE321A0)
#define OELNPPEOAJM_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBE32220)
#define OELNPPEOAJM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBE32300)
#define OELNPPEOAJM_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBE326D0)
#define OELNPPEOAJM_TICK_OFFSET UNITYSDK_OFFSET(0xBE32720)

inline static constexpr unsigned int OELNPPEOAJM_TypeDefinitionIndex = 55162;

	class OELNPPEOAJM : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::LoopTargetList* OFKGLJOAMLD; // 0x18
		::KFELGAIGHAP* NDOFCGDDHHD; // 0x20
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28
		::System::Int32 CALNAPHILLA; // 0x30
		::System::Int32 DLANCNECDDA; // 0x34
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::LoopTargetList* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::LoopTargetList*))((::PBYTE)hIl2Cpp + OELNPPEOAJM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OELNPPEOAJM_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OELNPPEOAJM_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OELNPPEOAJM_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OELNPPEOAJM_TICK_OFFSET))(this, a1);
		}

		::System::Void CMEFBBBDBDL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OELNPPEOAJM_CMEFBBBDBDL_OFFSET))(this);
		}

	};
