#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class GELIALJDFBL;
class KFELGAIGHAP;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class RetargetPerSequence; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CMGFOPNCHBG_CTOR_OFFSET UNITYSDK_OFFSET(0xDA31110)
#define CMGFOPNCHBG_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDA31370)
#define CMGFOPNCHBG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xDA313F0)
#define CMGFOPNCHBG_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xDA31A10)
#define CMGFOPNCHBG_TICK_OFFSET UNITYSDK_OFFSET(0xDA31A60)

	class CMGFOPNCHBG : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::RetargetPerSequence* OFKGLJOAMLD; // 0x18
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* BLOMOEJJCIK; // 0x20
		::System::Collections::Generic::List_1<::KFELGAIGHAP*>* FBAGEMHGIIB; // 0x28
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x30
		::GELIALJDFBL* LLHKOFLJFCH; // 0x38
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
