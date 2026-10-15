#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class CCGFLDDDIPN;
namespace RPG::GameCore { class SetBattleAchievement; }
namespace RPG::GameCore { class TaskContext; }

#define NNEFPEBACPC_BIPPBMLBNOM_OFFSET UNITYSDK_OFFSET(0xBC99870)
#define NNEFPEBACPC_CTOR_OFFSET UNITYSDK_OFFSET(0xBC99790)
#define NNEFPEBACPC_IOKHONAMAPL_OFFSET UNITYSDK_OFFSET(0xBC9A360)
#define NNEFPEBACPC_KBPFANNIPKD_OFFSET UNITYSDK_OFFSET(0xBC99FF0)
#define NNEFPEBACPC_NIFJEMJBPOK_OFFSET UNITYSDK_OFFSET(0xBC99C80)
#define NNEFPEBACPC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBC997C0)

inline static constexpr unsigned int NNEFPEBACPC_TypeDefinitionIndex = 58514;

	class NNEFPEBACPC
	{
	public:
		::CCGFLDDDIPN* LJIFHAJFIDK; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetBattleAchievement* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetBattleAchievement*))((::PBYTE)hIl2Cpp + NNEFPEBACPC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNEFPEBACPC_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void KBPFANNIPKD(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + NNEFPEBACPC_KBPFANNIPKD_OFFSET))(this, a1);
		}

		::System::Void NIFJEMJBPOK(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + NNEFPEBACPC_NIFJEMJBPOK_OFFSET))(this, a1);
		}

		::System::Boolean BIPPBMLBNOM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NNEFPEBACPC_BIPPBMLBNOM_OFFSET))(this);
		}

		::System::Boolean IOKHONAMAPL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NNEFPEBACPC_IOKHONAMAPL_OFFSET))(this);
		}

	};
