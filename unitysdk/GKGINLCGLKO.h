#pragma once
#include "unitysdk/unitysdk.h"
class LHNLECHOKMG;
class OEAKPLCANOI;
namespace RPG::Client { class FiveDimGameInstance; }
namespace RPG::GameCore { class TaskContext; }

#define GKGINLCGLKO_BPDJKBHIBGH_OFFSET UNITYSDK_OFFSET(0x15A97760)
#define GKGINLCGLKO_CTOR_OFFSET UNITYSDK_OFFSET(0x15A972D0)
#define GKGINLCGLKO_DPNMEFMDFJB_OFFSET UNITYSDK_OFFSET(0x15A974C0)
#define GKGINLCGLKO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15A97300)

inline static constexpr unsigned int GKGINLCGLKO_TypeDefinitionIndex = 52842;

	class GKGINLCGLKO
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::LHNLECHOKMG* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::LHNLECHOKMG*))((::PBYTE)hIl2Cpp + GKGINLCGLKO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKGINLCGLKO_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void DPNMEFMDFJB(::RPG::Client::FiveDimGameInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FiveDimGameInstance*))((::PBYTE)hIl2Cpp + GKGINLCGLKO_DPNMEFMDFJB_OFFSET))(this, a1);
		}

		::System::Void BPDJKBHIBGH(::OEAKPLCANOI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OEAKPLCANOI*))((::PBYTE)hIl2Cpp + GKGINLCGLKO_BPDJKBHIBGH_OFFSET))(this, a1);
		}

	};
