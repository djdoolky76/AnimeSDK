#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::Client { class ElfFarmGameplayManager; }
namespace RPG::GameCore { class ElfFarmGameplayInit; }
namespace RPG::GameCore { class TaskContext; }

#define FMCCDENLNBF_CTOR_OFFSET UNITYSDK_OFFSET(0x15840C60)
#define FMCCDENLNBF_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15840C90)
#define FMCCDENLNBF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15840CF0)
#define FMCCDENLNBF_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15840E60)

inline static constexpr unsigned int FMCCDENLNBF_TypeDefinitionIndex = 52739;

	class FMCCDENLNBF
	{
	public:
		::RPG::Client::ElfFarmGameplayManager* PNMFAOJNNIC; // 0x28
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x30
		::RPG::GameCore::ElfFarmGameplayInit* OFKGLJOAMLD; // 0x38
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ElfFarmGameplayInit* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ElfFarmGameplayInit*))((::PBYTE)hIl2Cpp + FMCCDENLNBF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMCCDENLNBF_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMCCDENLNBF_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMCCDENLNBF_ONTASKRESET_OFFSET))(this);
		}

	};
