#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class RogueFinish; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define DCLLEHMLCKM_BPEAAOINNBL_OFFSET UNITYSDK_OFFSET(0xE248EF0)
#define DCLLEHMLCKM_CTOR_OFFSET UNITYSDK_OFFSET(0xE2489A0)
#define DCLLEHMLCKM_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE248DD0)
#define DCLLEHMLCKM_FEDEMHPFPLO_OFFSET UNITYSDK_OFFSET(0xE248C00)
#define DCLLEHMLCKM_NIIJDKJLMJD_OFFSET UNITYSDK_OFFSET(0xE248E90)
#define DCLLEHMLCKM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xE2489B0)
#define DCLLEHMLCKM_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xE248D20)
#define DCLLEHMLCKM_TICK_OFFSET UNITYSDK_OFFSET(0xE248D70)

inline static constexpr unsigned int DCLLEHMLCKM_TypeDefinitionIndex = 58464;

	class DCLLEHMLCKM : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::RogueFinish* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RogueFinish* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RogueFinish*))((::PBYTE)hIl2Cpp + DCLLEHMLCKM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCLLEHMLCKM_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCLLEHMLCKM_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DCLLEHMLCKM_TICK_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCLLEHMLCKM_DISPOSE_OFFSET))(this);
		}

		::System::Void NIIJDKJLMJD(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DCLLEHMLCKM_NIIJDKJLMJD_OFFSET))(this, a1);
		}

		::System::Void FEDEMHPFPLO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCLLEHMLCKM_FEDEMHPFPLO_OFFSET))(this);
		}

		::System::Void BPEAAOINNBL(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + DCLLEHMLCKM_BPEAAOINNBL_OFFSET))(this, a1, a2);
		}

	};
