#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class MJDBJKCBKJP;
namespace RPG::GameCore { class TaskContext; }

#define CBIKNHPGGHG_CJICKPDEMNE_OFFSET UNITYSDK_OFFSET(0xC4AE0C0)
#define CBIKNHPGGHG_CTOR_OFFSET UNITYSDK_OFFSET(0xC4ADF50)
#define CBIKNHPGGHG_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC4ADF60)
#define CBIKNHPGGHG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC4ADFF0)
#define CBIKNHPGGHG_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC4ADFA0)
#define CBIKNHPGGHG_TICK_OFFSET UNITYSDK_OFFSET(0xC4AE2A0)

	class CBIKNHPGGHG : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::MJDBJKCBKJP* OFKGLJOAMLD; // 0x20
		::RPG::GameCore::FixPoint DKOFFPPGEFI; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::MJDBJKCBKJP* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::MJDBJKCBKJP*))((::PBYTE)hIl2Cpp + CBIKNHPGGHG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBIKNHPGGHG_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBIKNHPGGHG_ONTASKRESET_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBIKNHPGGHG_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CBIKNHPGGHG_TICK_OFFSET))(this, a1);
		}

		::System::Boolean CJICKPDEMNE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CBIKNHPGGHG_CJICKPDEMNE_OFFSET))(this);
		}

	};
