#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class CPNGNNFLPND;
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define KNJLKNDHIKL_BHEIANKOOPN_OFFSET UNITYSDK_OFFSET(0xB580A40)
#define KNJLKNDHIKL_CTOR_OFFSET UNITYSDK_OFFSET(0xB580660)
#define KNJLKNDHIKL_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB580670)
#define KNJLKNDHIKL_MCBFAJMIFIF_OFFSET UNITYSDK_OFFSET(0xB580BE0)
#define KNJLKNDHIKL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB580780)
#define KNJLKNDHIKL_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB580B00)
#define KNJLKNDHIKL_PGCBCKNNCGH_OFFSET UNITYSDK_OFFSET(0xB5806C0)
#define KNJLKNDHIKL_TICK_OFFSET UNITYSDK_OFFSET(0xB580B80)

inline static constexpr unsigned int KNJLKNDHIKL_TypeDefinitionIndex = 52935;

	class KNJLKNDHIKL : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x18
		::CPNGNNFLPND* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::CPNGNNFLPND* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::CPNGNNFLPND*))((::PBYTE)hIl2Cpp + KNJLKNDHIKL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNJLKNDHIKL_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNJLKNDHIKL_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNJLKNDHIKL_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KNJLKNDHIKL_TICK_OFFSET))(this, a1);
		}

		::System::Void BHEIANKOOPN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNJLKNDHIKL_BHEIANKOOPN_OFFSET))(this);
		}

		::System::Void PGCBCKNNCGH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNJLKNDHIKL_PGCBCKNNCGH_OFFSET))(this);
		}

		::System::Void MCBFAJMIFIF(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + KNJLKNDHIKL_MCBFAJMIFIF_OFFSET))(this, a1, a2);
		}

	};
