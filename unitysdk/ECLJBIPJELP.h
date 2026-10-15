#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelGraphComponent; }
namespace RPG::GameCore { class ShowHeartDialUI; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define ECLJBIPJELP_AIOABAGGGAE_OFFSET UNITYSDK_OFFSET(0x12D131C0)
#define ECLJBIPJELP_CTOR_OFFSET UNITYSDK_OFFSET(0x12D12FE0)
#define ECLJBIPJELP_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12D132D0)
#define ECLJBIPJELP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x12D12FF0)
#define ECLJBIPJELP_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x12D13280)
#define ECLJBIPJELP_PDMDDFIEALL_OFFSET UNITYSDK_OFFSET(0x12D13370)
#define ECLJBIPJELP_TICK_OFFSET UNITYSDK_OFFSET(0x12D13310)

inline static constexpr unsigned int ECLJBIPJELP_TypeDefinitionIndex = 58663;

	class ECLJBIPJELP : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::ShowHeartDialUI* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::RPG::GameCore::LevelGraphComponent* LJCPCPJJEIB; // 0x28
		::RPG::GameCore::GameEntity* FEECCONDBLP; // 0x30
		// static const ::System::String* OMICKFONNDG; // 0x0
		// static const ::System::String* ELKFLMMHOGO; // 0x0
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowHeartDialUI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowHeartDialUI*))((::PBYTE)hIl2Cpp + ECLJBIPJELP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECLJBIPJELP_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECLJBIPJELP_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECLJBIPJELP_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ECLJBIPJELP_TICK_OFFSET))(this, a1);
		}

		::RPG::GameCore::LevelGraphComponent* AIOABAGGGAE(::System::String* a1)
		{
			return ((::RPG::GameCore::LevelGraphComponent*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ECLJBIPJELP_AIOABAGGGAE_OFFSET))(this, a1);
		}

		::System::Void PDMDDFIEALL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECLJBIPJELP_PDMDDFIEALL_OFFSET))(this);
		}

	};
