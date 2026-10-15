#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class DBPOLNGAAPH;
namespace RPG::GameCore { class TaskContext; }

#define EMOILLIBGMG_CTOR_OFFSET UNITYSDK_OFFSET(0x155594E0)
#define EMOILLIBGMG_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15559510)
#define EMOILLIBGMG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15559550)
#define EMOILLIBGMG_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x155595E0)
#define EMOILLIBGMG_TICK_OFFSET UNITYSDK_OFFSET(0x15559630)

	class EMOILLIBGMG : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::System::UInt32 CPLKJGNJCCC; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::DBPOLNGAAPH* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::DBPOLNGAAPH*))((::PBYTE)hIl2Cpp + EMOILLIBGMG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMOILLIBGMG_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMOILLIBGMG_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMOILLIBGMG_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EMOILLIBGMG_TICK_OFFSET))(this, a1);
		}

	};
