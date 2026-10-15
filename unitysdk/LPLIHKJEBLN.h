#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class ShowBattleFeverTimeScreenFire; }
namespace RPG::GameCore { class TaskContext; }

#define LPLIHKJEBLN_CTOR_OFFSET UNITYSDK_OFFSET(0xB81D820)
#define LPLIHKJEBLN_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB81D830)
#define LPLIHKJEBLN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB81D870)
#define LPLIHKJEBLN_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB81D9E0)
#define LPLIHKJEBLN_TICK_OFFSET UNITYSDK_OFFSET(0xB81DA30)

inline static constexpr unsigned int LPLIHKJEBLN_TypeDefinitionIndex = 55607;

	class LPLIHKJEBLN : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::ShowBattleFeverTimeScreenFire* OFKGLJOAMLD; // 0x20
		// static const ::System::String* NEHPDHONFOB; // 0x0
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowBattleFeverTimeScreenFire* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowBattleFeverTimeScreenFire*))((::PBYTE)hIl2Cpp + LPLIHKJEBLN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPLIHKJEBLN_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPLIHKJEBLN_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPLIHKJEBLN_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LPLIHKJEBLN_TICK_OFFSET))(this, a1);
		}

	};
