#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class EnableNegativeHP; }
namespace RPG::GameCore { class TaskContext; }

#define EOBLNKGKGNA_CTOR_OFFSET UNITYSDK_OFFSET(0x164CA4D0)
#define EOBLNKGKGNA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x164CA4E0)
#define EOBLNKGKGNA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x164CA520)
#define EOBLNKGKGNA_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x164CA640)
#define EOBLNKGKGNA_TICK_OFFSET UNITYSDK_OFFSET(0x164CA690)

inline static constexpr unsigned int EOBLNKGKGNA_TypeDefinitionIndex = 56191;

	class EOBLNKGKGNA : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::EnableNegativeHP* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::EnableNegativeHP* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::EnableNegativeHP*))((::PBYTE)hIl2Cpp + EOBLNKGKGNA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOBLNKGKGNA_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOBLNKGKGNA_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOBLNKGKGNA_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EOBLNKGKGNA_TICK_OFFSET))(this, a1);
		}

	};
