#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class KFELGAIGHAP;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitPlayerSkillAbort; }
namespace System { class Object; }

#define DPHENEHCAPK_CTOR_OFFSET UNITYSDK_OFFSET(0x12639000)
#define DPHENEHCAPK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12639090)
#define DPHENEHCAPK_OKOELKMHGHK_OFFSET UNITYSDK_OFFSET(0x12639410)
#define DPHENEHCAPK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x12639250)
#define DPHENEHCAPK_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x12639300)
#define DPHENEHCAPK_OOJIFECGAGE_OFFSET UNITYSDK_OFFSET(0x12639530)
#define DPHENEHCAPK_TICK_OFFSET UNITYSDK_OFFSET(0x126391F0)

inline static constexpr unsigned int DPHENEHCAPK_TypeDefinitionIndex = 53485;

	class DPHENEHCAPK : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::KFELGAIGHAP* EMOELIFPFCC; // 0x20
		::RPG::GameCore::WaitPlayerSkillAbort* OFKGLJOAMLD; // 0x28
		::System::Boolean MFGHMLJJNIG; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitPlayerSkillAbort* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitPlayerSkillAbort*))((::PBYTE)hIl2Cpp + DPHENEHCAPK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPHENEHCAPK_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DPHENEHCAPK_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPHENEHCAPK_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPHENEHCAPK_ONTASKRESET_OFFSET))(this);
		}

		::System::Void OKOELKMHGHK(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DPHENEHCAPK_OKOELKMHGHK_OFFSET))(this, a1);
		}

		::System::Void OOJIFECGAGE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPHENEHCAPK_OOJIFECGAGE_OFFSET))(this);
		}

	};
