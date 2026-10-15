#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class HideEntityForCurrentCamera; }
namespace RPG::GameCore { class TaskContext; }

#define CPGOFMGPFLO_CTOR_OFFSET UNITYSDK_OFFSET(0xDCD53C0)
#define CPGOFMGPFLO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDCD53D0)
#define CPGOFMGPFLO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xDCD5410)
#define CPGOFMGPFLO_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xDCD5510)
#define CPGOFMGPFLO_TICK_OFFSET UNITYSDK_OFFSET(0xDCD5560)

	class CPGOFMGPFLO : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::HideEntityForCurrentCamera* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::HideEntityForCurrentCamera* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::HideEntityForCurrentCamera*))((::PBYTE)hIl2Cpp + CPGOFMGPFLO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPGOFMGPFLO_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPGOFMGPFLO_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPGOFMGPFLO_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CPGOFMGPFLO_TICK_OFFSET))(this, a1);
		}

	};
