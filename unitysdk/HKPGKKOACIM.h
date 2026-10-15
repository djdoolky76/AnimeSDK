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

#define HKPGKKOACIM_AHICKGJHFEG_OFFSET UNITYSDK_OFFSET(0x15D43D50)
#define HKPGKKOACIM_CTOR_OFFSET UNITYSDK_OFFSET(0x15D43CE0)
#define HKPGKKOACIM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15D43D00)
#define HKPGKKOACIM_FMNLLMGPDHI_OFFSET UNITYSDK_OFFSET(0x15D44790)
#define HKPGKKOACIM_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0x15D44E40)
#define HKPGKKOACIM_NKDNCJDPHIO_OFFSET UNITYSDK_OFFSET(0x15D442B0)
#define HKPGKKOACIM_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x15D44DE0)
#define HKPGKKOACIM_ONSKIP_OFFSET UNITYSDK_OFFSET(0x15D44C30)
#define HKPGKKOACIM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15D443A0)
#define HKPGKKOACIM_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15D447F0)
#define HKPGKKOACIM_TICK_OFFSET UNITYSDK_OFFSET(0x15D44840)

inline static constexpr unsigned int HKPGKKOACIM_TypeDefinitionIndex = 52355;

	class HKPGKKOACIM : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::GameEntity* ACJGKBDLCMF; // 0x18
		::RPG::GameCore::GameEntity* NBEMEHAHGEG; // 0x20
		::RPG::GameCore::AdventureCharacterController* OHMHKPLKPJI; // 0x28
		::RPG::GameCore::TransformComponent* JDPKGCFJHJF; // 0x30
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x38
		::RPG::Client::CameraDataAndFlags* OMKPPIGCFDN; // 0x40
		::RPG::GameCore::AdvEnablePropDialogMode* OFKGLJOAMLD; // 0x48
		::System::Boolean FPGKLEODJJN; // 0x50
		::System::Byte _padding0[0x3];
		::UnityEngine::Vector3 KIPJGEFAHPF; // 0x54
		::System::Nullable_1<::UnityEngine::Vector3> EPBKDBCMBDN; // 0x60
		::System::Byte _padding1[0x8];
		::System::Single MLIKCLDNOCI; // 0x70
		::System::Single AKAHKABBNAF; // 0x74
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
