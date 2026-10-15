#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class GELIALJDFBL;
class KFELGAIGHAP;
class KKJABONKCAI;
class NAOKFLDEDBJ;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }

#define KPFMCBOLPAA_CTOR_OFFSET UNITYSDK_OFFSET(0xB5AFCD0)
#define KPFMCBOLPAA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB5AFE20)
#define KPFMCBOLPAA_IFOMKIPFGMP_OFFSET UNITYSDK_OFFSET(0xB5B0750)
#define KPFMCBOLPAA_KHAFEIGEIGI_OFFSET UNITYSDK_OFFSET(0xB5B06F0)
#define KPFMCBOLPAA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB5AFF80)
#define KPFMCBOLPAA_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB5B05F0)
#define KPFMCBOLPAA_TICK_OFFSET UNITYSDK_OFFSET(0xB5B0640)

inline static constexpr unsigned int KPFMCBOLPAA_TypeDefinitionIndex = 53910;

	class KPFMCBOLPAA : public ::GELIALJDFBL
	{
	public:
		::KKJABONKCAI* OFKGLJOAMLD; // 0x18
		::GELIALJDFBL* LLHKOFLJFCH; // 0x20
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28
		::KFELGAIGHAP* BCGLDJBEBPK; // 0x30
		::NAOKFLDEDBJ* BLDLELNJDML; // 0x38
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::KKJABONKCAI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::KKJABONKCAI*))((::PBYTE)hIl2Cpp + KPFMCBOLPAA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPFMCBOLPAA_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPFMCBOLPAA_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPFMCBOLPAA_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KPFMCBOLPAA_TICK_OFFSET))(this, a1);
		}

		::System::Boolean KHAFEIGEIGI(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + KPFMCBOLPAA_KHAFEIGEIGI_OFFSET))(this, a1);
		}

		::System::Void IFOMKIPFGMP(::NAOKFLDEDBJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NAOKFLDEDBJ*))((::PBYTE)hIl2Cpp + KPFMCBOLPAA_IFOMKIPFGMP_OFFSET))(this, a1);
		}

	};
