#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class ShowBattleMessage; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define LIJCFJCHGAF_CTOR_OFFSET UNITYSDK_OFFSET(0xB6D34E0)
#define LIJCFJCHGAF_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB6D3580)
#define LIJCFJCHGAF_KEODGKPHEGD_OFFSET UNITYSDK_OFFSET(0xB6D3930)
#define LIJCFJCHGAF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB6D35C0)
#define LIJCFJCHGAF_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB6D3C70)
#define LIJCFJCHGAF_PKOKAPOBFBP_OFFSET UNITYSDK_OFFSET(0xB6D3760)
#define LIJCFJCHGAF_TICK_OFFSET UNITYSDK_OFFSET(0xB6D3CC0)

inline static constexpr unsigned int LIJCFJCHGAF_TypeDefinitionIndex = 56446;

	class LIJCFJCHGAF : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::System::Text::StringBuilder* NBGGLAANOJH; // 0x20
		::RPG::GameCore::ShowBattleMessage* OFKGLJOAMLD; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowBattleMessage* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowBattleMessage*))((::PBYTE)hIl2Cpp + LIJCFJCHGAF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIJCFJCHGAF_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIJCFJCHGAF_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIJCFJCHGAF_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LIJCFJCHGAF_TICK_OFFSET))(this, a1);
		}

		::System::String* PKOKAPOBFBP()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LIJCFJCHGAF_PKOKAPOBFBP_OFFSET))(this);
		}

		::System::String* KEODGKPHEGD(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + LIJCFJCHGAF_KEODGKPHEGD_OFFSET))(this, a1);
		}

	};
