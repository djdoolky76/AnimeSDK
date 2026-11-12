#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class PlayerHPRatioCheck; }
namespace RPG::GameCore { class TaskContext; }

#define AMOMPADBOAE_CTOR_OFFSET UNITYSDK_OFFSET(0x166F56D0)
#define AMOMPADBOAE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x166F56E0)
#define AMOMPADBOAE_FCMFJEOAMGC_OFFSET UNITYSDK_OFFSET(0x166F5830)
#define AMOMPADBOAE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x166F5720)
#define AMOMPADBOAE_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x166F5770)
#define AMOMPADBOAE_TICK_OFFSET UNITYSDK_OFFSET(0x166F57C0)

inline static constexpr unsigned int AMOMPADBOAE_TypeDefinitionIndex = 59547;

	class AMOMPADBOAE : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::PlayerHPRatioCheck* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PlayerHPRatioCheck* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PlayerHPRatioCheck*))((::PBYTE)hIl2Cpp + AMOMPADBOAE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMOMPADBOAE_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMOMPADBOAE_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMOMPADBOAE_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AMOMPADBOAE_TICK_OFFSET))(this, a1);
		}

		::System::Boolean FCMFJEOAMGC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AMOMPADBOAE_FCMFJEOAMGC_OFFSET))(this);
		}

	};
