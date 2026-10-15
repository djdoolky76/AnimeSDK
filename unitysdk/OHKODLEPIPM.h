#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class ShowAlleyTransportEnergyHint; }
namespace RPG::GameCore { class TaskContext; }

#define OHKODLEPIPM_CTOR_OFFSET UNITYSDK_OFFSET(0xBE6CB20)
#define OHKODLEPIPM_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBE6CB30)
#define OHKODLEPIPM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBE6CB70)
#define OHKODLEPIPM_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBE6CBF0)
#define OHKODLEPIPM_TICK_OFFSET UNITYSDK_OFFSET(0xBE6CC40)

inline static constexpr unsigned int OHKODLEPIPM_TypeDefinitionIndex = 58601;

	class OHKODLEPIPM : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::ShowAlleyTransportEnergyHint* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowAlleyTransportEnergyHint* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowAlleyTransportEnergyHint*))((::PBYTE)hIl2Cpp + OHKODLEPIPM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHKODLEPIPM_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHKODLEPIPM_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHKODLEPIPM_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OHKODLEPIPM_TICK_OFFSET))(this, a1);
		}

	};
