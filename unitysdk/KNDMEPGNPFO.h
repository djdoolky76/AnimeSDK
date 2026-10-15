#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimChestState.h"
class BABNOKHOBCF;
class INMMPMDELKE;
class MNCOPNHONHO;
namespace Entitas { class IGroup; }
namespace RPG::Client::LittleGame::FourRotateVoxel { class FourRotateVoxelAnimalAttachBillboardData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KNDMEPGNPFO_CTOR_OFFSET UNITYSDK_OFFSET(0xB5806C0)
#define KNDMEPGNPFO_EJJIKPGGIPA_OFFSET UNITYSDK_OFFSET(0xB581220)
#define KNDMEPGNPFO_EXECUTE_OFFSET UNITYSDK_OFFSET(0xB580E60)
#define KNDMEPGNPFO_NAOCJCCLFCJ_OFFSET UNITYSDK_OFFSET(0xB5815B0)
#define KNDMEPGNPFO__CREATETRIGGER_OFFSET UNITYSDK_OFFSET(0xB580AD0)
#define KNDMEPGNPFO__DEPLOYCHEST_OFFSET UNITYSDK_OFFSET(0xB580D60)
#define KNDMEPGNPFO__REMOVETRIGGER_OFFSET UNITYSDK_OFFSET(0xB580CA0)
#define KNDMEPGNPFO__SOLVESETSTATE_OFFSET UNITYSDK_OFFSET(0xB580E00)
#define KNDMEPGNPFO__TEARDOWN_OFFSET UNITYSDK_OFFSET(0xB5809F0)

inline static constexpr unsigned int KNDMEPGNPFO_TypeDefinitionIndex = 76748;

	class KNDMEPGNPFO
	{
	public:
		::System::Collections::Generic::Dictionary_2<::INMMPMDELKE*, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelAnimalAttachBillboardData*>* INHFIMENLND; // 0x40
		::MNCOPNHONHO* PDENFEFCAGN; // 0x48
		::Entitas::IGroup* MGGKABMNGMN; // 0x50
		::BABNOKHOBCF* FKINCGODJEP; // 0x58
		::System::Int32 NHADOMDPGAL; // 0x60
		::System::Void _ctor(::BABNOKHOBCF* a1, ::MNCOPNHONHO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::BABNOKHOBCF*, ::MNCOPNHONHO*))((::PBYTE)hIl2Cpp + KNDMEPGNPFO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _TearDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNDMEPGNPFO__TEARDOWN_OFFSET))(this);
		}

		::System::Void _CreateTrigger(::INMMPMDELKE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::INMMPMDELKE*))((::PBYTE)hIl2Cpp + KNDMEPGNPFO__CREATETRIGGER_OFFSET))(this, a1);
		}

		::System::Void _RemoveTrigger(::INMMPMDELKE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::INMMPMDELKE*))((::PBYTE)hIl2Cpp + KNDMEPGNPFO__REMOVETRIGGER_OFFSET))(this, a1);
		}

		::System::Void _DeployChest(::INMMPMDELKE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::INMMPMDELKE*))((::PBYTE)hIl2Cpp + KNDMEPGNPFO__DEPLOYCHEST_OFFSET))(this, a1);
		}

		::System::Void _SolveSetState(::INMMPMDELKE* a1, ::RPG::GameCore::FiveDimChestState a2)
		{
			return ((::System::Void(*)(::PVOID, ::INMMPMDELKE*, ::RPG::GameCore::FiveDimChestState))((::PBYTE)hIl2Cpp + KNDMEPGNPFO__SOLVESETSTATE_OFFSET))(this, a1, a2);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNDMEPGNPFO_EXECUTE_OFFSET))(this);
		}

		::System::Void EJJIKPGGIPA(::INMMPMDELKE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::INMMPMDELKE*))((::PBYTE)hIl2Cpp + KNDMEPGNPFO_EJJIKPGGIPA_OFFSET))(this, a1);
		}

		::System::Void NAOCJCCLFCJ(::INMMPMDELKE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::INMMPMDELKE*))((::PBYTE)hIl2Cpp + KNDMEPGNPFO_NAOCJCCLFCJ_OFFSET))(this, a1);
		}

	};
