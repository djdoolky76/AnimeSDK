#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class GELIALJDFBL;
class KFELGAIGHAP;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class RetargetPerSequence; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CMGFOPNCHBG_CTOR_OFFSET UNITYSDK_OFFSET(0x1B196DD0)
#define CMGFOPNCHBG_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B197030)
#define CMGFOPNCHBG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1B1970B0)
#define CMGFOPNCHBG_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1B197690)
#define CMGFOPNCHBG_TICK_OFFSET UNITYSDK_OFFSET(0x1B1976E0)

inline static constexpr unsigned int CMGFOPNCHBG_TypeDefinitionIndex = 56504;

	class CMGFOPNCHBG : public ::GELIALJDFBL
	{
	public:
		::System::Collections::Generic::List_1<::KFELGAIGHAP*>* FBAGEMHGIIB; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* BLOMOEJJCIK; // 0x28
		::GELIALJDFBL* LLHKOFLJFCH; // 0x30
		::RPG::GameCore::RetargetPerSequence* OFKGLJOAMLD; // 0x38
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RetargetPerSequence* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RetargetPerSequence*))((::PBYTE)hIl2Cpp + CMGFOPNCHBG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMGFOPNCHBG_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMGFOPNCHBG_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMGFOPNCHBG_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CMGFOPNCHBG_TICK_OFFSET))(this, a1);
		}

	};
