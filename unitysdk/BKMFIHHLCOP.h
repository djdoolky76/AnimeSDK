#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class KFELGAIGHAP;
namespace RPG::Client { class RuntimeGroupManager; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitGroupUnload; }

#define BKMFIHHLCOP_CTOR_OFFSET UNITYSDK_OFFSET(0xC1279E0)
#define BKMFIHHLCOP_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC127B70)
#define BKMFIHHLCOP_JAAJHNKCADB_OFFSET UNITYSDK_OFFSET(0xC127E80)
#define BKMFIHHLCOP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC127DA0)
#define BKMFIHHLCOP_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC127C70)
#define BKMFIHHLCOP_TICK_OFFSET UNITYSDK_OFFSET(0xC127D40)

inline static constexpr unsigned int BKMFIHHLCOP_TypeDefinitionIndex = 54638;

	class BKMFIHHLCOP : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::WaitGroupUnload* IGHAHBNLIJA; // 0x18
		::RPG::Client::RuntimeGroupManager* KDCJFIMPKLP; // 0x20
		::KFELGAIGHAP* CMBMMHOONBK; // 0x28
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x30
		::System::UInt32 PEEFHNHDBMF; // 0x38
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitGroupUnload* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitGroupUnload*))((::PBYTE)hIl2Cpp + BKMFIHHLCOP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKMFIHHLCOP_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BKMFIHHLCOP_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKMFIHHLCOP_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKMFIHHLCOP_ONTASKRESET_OFFSET))(this);
		}

		::System::Void JAAJHNKCADB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKMFIHHLCOP_JAAJHNKCADB_OFFSET))(this);
		}

	};
