#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class BlockSubmitEvents; }
namespace RPG::GameCore { class TaskContext; }

#define BFAAOKGBAGP_CTOR_OFFSET UNITYSDK_OFFSET(0xB15C570)
#define BFAAOKGBAGP_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB15C580)
#define BFAAOKGBAGP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB15C5C0)
#define BFAAOKGBAGP_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB15C650)
#define BFAAOKGBAGP_TICK_OFFSET UNITYSDK_OFFSET(0xB15C6A0)

	class BFAAOKGBAGP : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::BlockSubmitEvents* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::BlockSubmitEvents* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::BlockSubmitEvents*))((::PBYTE)hIl2Cpp + BFAAOKGBAGP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFAAOKGBAGP_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFAAOKGBAGP_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFAAOKGBAGP_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BFAAOKGBAGP_TICK_OFFSET))(this, a1);
		}

	};
