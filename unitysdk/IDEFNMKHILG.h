#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TrainPartyCreateManikinEntity; }

#define IDEFNMKHILG_AELIHJHLMOI_OFFSET UNITYSDK_OFFSET(0x15EB76A0)
#define IDEFNMKHILG_CTOR_OFFSET UNITYSDK_OFFSET(0x15EB70B0)
#define IDEFNMKHILG_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15EB70C0)
#define IDEFNMKHILG_HEIEDLJBAMI_OFFSET UNITYSDK_OFFSET(0x15EB74B0)
#define IDEFNMKHILG_KBCBIPHIBAG_OFFSET UNITYSDK_OFFSET(0x15EB7110)
#define IDEFNMKHILG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15EB7310)
#define IDEFNMKHILG_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15EB75F0)
#define IDEFNMKHILG_TICK_OFFSET UNITYSDK_OFFSET(0x15EB7640)

inline static constexpr unsigned int IDEFNMKHILG_TypeDefinitionIndex = 53421;

	class IDEFNMKHILG : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::RPG::GameCore::TrainPartyCreateManikinEntity* OFKGLJOAMLD; // 0x28
		::System::Boolean GJDJPGBBACF; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TrainPartyCreateManikinEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TrainPartyCreateManikinEntity*))((::PBYTE)hIl2Cpp + IDEFNMKHILG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDEFNMKHILG_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDEFNMKHILG_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDEFNMKHILG_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IDEFNMKHILG_TICK_OFFSET))(this, a1);
		}

		::System::Void AELIHJHLMOI(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + IDEFNMKHILG_AELIHJHLMOI_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* HEIEDLJBAMI()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + IDEFNMKHILG_HEIEDLJBAMI_OFFSET))(this);
		}

		::System::Void KBCBIPHIBAG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDEFNMKHILG_KBCBIPHIBAG_OFFSET))(this);
		}

	};
