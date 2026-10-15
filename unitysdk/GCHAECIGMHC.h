#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class ElfEnterNextDay; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define GCHAECIGMHC_CTOR_OFFSET UNITYSDK_OFFSET(0x1596AE90)
#define GCHAECIGMHC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1596AEA0)
#define GCHAECIGMHC_OEMHIBLBHLC_OFFSET UNITYSDK_OFFSET(0x1596B230)
#define GCHAECIGMHC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1596AF30)
#define GCHAECIGMHC_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1596B280)
#define GCHAECIGMHC_TICK_OFFSET UNITYSDK_OFFSET(0x1596B310)

	class GCHAECIGMHC : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::ElfEnterNextDay* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ElfEnterNextDay* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ElfEnterNextDay*))((::PBYTE)hIl2Cpp + GCHAECIGMHC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCHAECIGMHC_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCHAECIGMHC_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OEMHIBLBHLC(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GCHAECIGMHC_OEMHIBLBHLC_OFFSET))(this, a1);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCHAECIGMHC_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GCHAECIGMHC_TICK_OFFSET))(this, a1);
		}

	};
