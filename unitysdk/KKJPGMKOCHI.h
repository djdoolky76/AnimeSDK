#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class EKFMIDBJDIA;
class GELIALJDFBL;
namespace RPG::GameCore { class AdvOnButtonPressed; }
namespace RPG::GameCore { class TaskContext; }

#define KKJPGMKOCHI_CNLMOGBIOHA_OFFSET UNITYSDK_OFFSET(0xB4CF2F0)
#define KKJPGMKOCHI_CTOR_OFFSET UNITYSDK_OFFSET(0xB4CEEC0)
#define KKJPGMKOCHI_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB4CF220)
#define KKJPGMKOCHI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB4CEED0)
#define KKJPGMKOCHI_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB4CF030)
#define KKJPGMKOCHI_TICK_OFFSET UNITYSDK_OFFSET(0xB4CF5C0)

	class KKJPGMKOCHI : public ::GELIALJDFBL
	{
	public:
		::GELIALJDFBL* AGGELGEEJFN; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::RPG::GameCore::AdvOnButtonPressed* IGHAHBNLIJA; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvOnButtonPressed* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvOnButtonPressed*))((::PBYTE)hIl2Cpp + KKJPGMKOCHI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKJPGMKOCHI_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKJPGMKOCHI_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKJPGMKOCHI_DISPOSE_OFFSET))(this);
		}

		::System::Void CNLMOGBIOHA(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + KKJPGMKOCHI_CNLMOGBIOHA_OFFSET))(this, a1);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KKJPGMKOCHI_TICK_OFFSET))(this, a1);
		}

	};
