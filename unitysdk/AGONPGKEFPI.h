#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class GKGCNACLFEM;
namespace RPG::GameCore { class TaskContext; }

#define AGONPGKEFPI_CTOR_OFFSET UNITYSDK_OFFSET(0x19B167F0)
#define AGONPGKEFPI_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19B16800)
#define AGONPGKEFPI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x19B16890)
#define AGONPGKEFPI_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x19B16840)
#define AGONPGKEFPI_TICK_OFFSET UNITYSDK_OFFSET(0x19B16A70)

inline static constexpr unsigned int AGONPGKEFPI_TypeDefinitionIndex = 53815;

	class AGONPGKEFPI : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x18
		::GKGCNACLFEM* IGHAHBNLIJA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::GKGCNACLFEM* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::GKGCNACLFEM*))((::PBYTE)hIl2Cpp + AGONPGKEFPI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGONPGKEFPI_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGONPGKEFPI_ONTASKRESET_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGONPGKEFPI_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AGONPGKEFPI_TICK_OFFSET))(this, a1);
		}

	};
