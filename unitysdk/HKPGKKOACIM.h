#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client { class CameraDataAndFlags; }
namespace RPG::GameCore { class AdvEnablePropDialogMode; }
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TransformComponent; }

#define HKPGKKOACIM_AHICKGJHFEG_OFFSET UNITYSDK_OFFSET(0x15D504A0)
#define HKPGKKOACIM_CTOR_OFFSET UNITYSDK_OFFSET(0x15D50430)
#define HKPGKKOACIM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15D50450)
#define HKPGKKOACIM_FMNLLMGPDHI_OFFSET UNITYSDK_OFFSET(0x15D50EF0)
#define HKPGKKOACIM_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0x15D515A0)
#define HKPGKKOACIM_NKDNCJDPHIO_OFFSET UNITYSDK_OFFSET(0x15D50A00)
#define HKPGKKOACIM_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x15D51540)
#define HKPGKKOACIM_ONSKIP_OFFSET UNITYSDK_OFFSET(0x15D51390)
#define HKPGKKOACIM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15D50B00)
#define HKPGKKOACIM_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15D50F50)
#define HKPGKKOACIM_TICK_OFFSET UNITYSDK_OFFSET(0x15D50FA0)

inline static constexpr unsigned int HKPGKKOACIM_TypeDefinitionIndex = 52355;

	class HKPGKKOACIM : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::GameEntity* NBEMEHAHGEG; // 0x18
		::RPG::Client::CameraDataAndFlags* OMKPPIGCFDN; // 0x20
		::RPG::GameCore::AdvEnablePropDialogMode* OFKGLJOAMLD; // 0x28
		::RPG::GameCore::AdventureCharacterController* OHMHKPLKPJI; // 0x30
		::RPG::GameCore::GameEntity* ACJGKBDLCMF; // 0x38
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x40
		::RPG::GameCore::TransformComponent* JDPKGCFJHJF; // 0x48
		::System::Single AKAHKABBNAF; // 0x50
		::UnityEngine::Vector3 KIPJGEFAHPF; // 0x54
		::System::Boolean FPGKLEODJJN; // 0x60
		::System::Byte _padding0[0x3];
		::System::Nullable_1<::UnityEngine::Vector3> EPBKDBCMBDN; // 0x64
		::System::Byte _padding1[0x8];
		::System::Single MLIKCLDNOCI; // 0x74
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvEnablePropDialogMode* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvEnablePropDialogMode*))((::PBYTE)hIl2Cpp + HKPGKKOACIM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKPGKKOACIM_DISPOSE_OFFSET))(this);
		}

		::System::Void AHICKGJHFEG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKPGKKOACIM_AHICKGJHFEG_OFFSET))(this);
		}

		::System::Void NKDNCJDPHIO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKPGKKOACIM_NKDNCJDPHIO_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKPGKKOACIM_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKPGKKOACIM_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HKPGKKOACIM_TICK_OFFSET))(this, a1);
		}

		::System::Void OnSkip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKPGKKOACIM_ONSKIP_OFFSET))(this);
		}

		::System::Void OnFinishImmediatelyInPerformance(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HKPGKKOACIM_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET))(this, a1);
		}

		::System::Boolean get_ForceSkip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HKPGKKOACIM_GET_FORCESKIP_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* FMNLLMGPDHI()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + HKPGKKOACIM_FMNLLMGPDHI_OFFSET))(this);
		}

	};
