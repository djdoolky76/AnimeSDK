#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class CPNGNNFLPND;
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define KNJLKNDHIKL_BHEIANKOOPN_OFFSET UNITYSDK_OFFSET(0xBDD5D60)
#define KNJLKNDHIKL_CTOR_OFFSET UNITYSDK_OFFSET(0xBDD5970)
#define KNJLKNDHIKL_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBDD5980)
#define KNJLKNDHIKL_MCBFAJMIFIF_OFFSET UNITYSDK_OFFSET(0xBDD5F00)
#define KNJLKNDHIKL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBDD5A90)
#define KNJLKNDHIKL_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBDD5E20)
#define KNJLKNDHIKL_PGCBCKNNCGH_OFFSET UNITYSDK_OFFSET(0xBDD59D0)
#define KNJLKNDHIKL_TICK_OFFSET UNITYSDK_OFFSET(0xBDD5EA0)

inline static constexpr unsigned int KNJLKNDHIKL_TypeDefinitionIndex = 54091;

	class KNJLKNDHIKL : public ::GELIALJDFBL
	{
	public:
		::CPNGNNFLPND* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x20
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
