#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
namespace RPG::Client { class MonoEffect; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerReplaceCharacterPresetEffect; }
namespace System { class String; }

#define IAKIFFBLMEE_CTOR_OFFSET UNITYSDK_OFFSET(0x15E17350)
#define IAKIFFBLMEE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15E17360)
#define IAKIFFBLMEE_ICIPLODEPFA_OFFSET UNITYSDK_OFFSET(0x15E17810)
#define IAKIFFBLMEE_IOGAOALHJFP_OFFSET UNITYSDK_OFFSET(0x15E17CE0)
#define IAKIFFBLMEE_NHMFJHLHGFD_OFFSET UNITYSDK_OFFSET(0x15E179E0)
#define IAKIFFBLMEE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15E17450)
#define IAKIFFBLMEE_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15E173A0)
#define IAKIFFBLMEE_TICK_OFFSET UNITYSDK_OFFSET(0x15E173F0)

inline static constexpr unsigned int IAKIFFBLMEE_TypeDefinitionIndex = 55764;

	class IAKIFFBLMEE : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TriggerReplaceCharacterPresetEffect* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		// static const ::System::String* HPKGEJDHMCA; // 0x0
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerReplaceCharacterPresetEffect* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerReplaceCharacterPresetEffect*))((::PBYTE)hIl2Cpp + IAKIFFBLMEE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAKIFFBLMEE_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAKIFFBLMEE_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IAKIFFBLMEE_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAKIFFBLMEE_ONTASKBEGIN_OFFSET))(this);
		}

		static ::System::Void NHMFJHLHGFD(::System::String* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::Client::MonoEffect* a3, ::RPG::Client::TriggerEffectCallbackParams a4)
		{
			return ((::System::Void(*)(::System::String*, ::RPG::GameCore::GameEntity*, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + IAKIFFBLMEE_NHMFJHLHGFD_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void ICIPLODEPFA(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + IAKIFFBLMEE_ICIPLODEPFA_OFFSET))(a1);
		}

		static ::System::Void IOGAOALHJFP(::RPG::GameCore::GameEntity* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::System::String*))((::PBYTE)hIl2Cpp + IAKIFFBLMEE_IOGAOALHJFP_OFFSET))(a1, a2);
		}

	};
