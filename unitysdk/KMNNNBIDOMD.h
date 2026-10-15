#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class AetherDivideTriggerAttackSimplified; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KMNNNBIDOMD_CTOR_OFFSET UNITYSDK_OFFSET(0xB569840)
#define KMNNNBIDOMD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB56A020)
#define KMNNNBIDOMD_GLHDJGCLCMG_OFFSET UNITYSDK_OFFSET(0xB56A060)
#define KMNNNBIDOMD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB5698A0)
#define KMNNNBIDOMD_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB569850)
#define KMNNNBIDOMD_TICK_OFFSET UNITYSDK_OFFSET(0xB569FC0)

inline static constexpr unsigned int KMNNNBIDOMD_TypeDefinitionIndex = 57931;

	class KMNNNBIDOMD : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x18
		::RPG::GameCore::AetherDivideTriggerAttackSimplified* EJJEEJENLDA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AetherDivideTriggerAttackSimplified* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AetherDivideTriggerAttackSimplified*))((::PBYTE)hIl2Cpp + KMNNNBIDOMD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMNNNBIDOMD_ONTASKRESET_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMNNNBIDOMD_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KMNNNBIDOMD_TICK_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMNNNBIDOMD_DISPOSE_OFFSET))(this);
		}

		::System::Void GLHDJGCLCMG(::RPG::GameCore::GameEntity* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + KMNNNBIDOMD_GLHDJGCLCMG_OFFSET))(this, a1, a2);
		}

	};
