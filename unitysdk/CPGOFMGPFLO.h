#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class HideEntityForCurrentCamera; }
namespace RPG::GameCore { class TaskContext; }

#define CPGOFMGPFLO_CTOR_OFFSET UNITYSDK_OFFSET(0x1917F610)
#define CPGOFMGPFLO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1917F620)
#define CPGOFMGPFLO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1917F660)
#define CPGOFMGPFLO_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1917F760)
#define CPGOFMGPFLO_TICK_OFFSET UNITYSDK_OFFSET(0x1917F7B0)

inline static constexpr unsigned int CPGOFMGPFLO_TypeDefinitionIndex = 56271;

	class CPGOFMGPFLO : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::HideEntityForCurrentCamera* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
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
