#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
#include "unitysdk/UnityEngine/Rect.h"
namespace RPG::GameCore { class ShowTutorialBlockMask; }
namespace RPG::GameCore { class TaskContext; }

#define IDJPIPHGKMK_CTOR_OFFSET UNITYSDK_OFFSET(0x15ECB080)
#define IDJPIPHGKMK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15ECB090)
#define IDJPIPHGKMK_IBBLOPBJJJG_OFFSET UNITYSDK_OFFSET(0x15ECB170)
#define IDJPIPHGKMK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15ECB0D0)
#define IDJPIPHGKMK_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15ECB220)
#define IDJPIPHGKMK_TICK_OFFSET UNITYSDK_OFFSET(0x15ECB270)

inline static constexpr unsigned int IDJPIPHGKMK_TypeDefinitionIndex = 58698;

	class IDJPIPHGKMK : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::ShowTutorialBlockMask* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowTutorialBlockMask* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowTutorialBlockMask*))((::PBYTE)hIl2Cpp + IDJPIPHGKMK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDJPIPHGKMK_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDJPIPHGKMK_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDJPIPHGKMK_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IDJPIPHGKMK_TICK_OFFSET))(this, a1);
		}

		::UnityEngine::Rect IBBLOPBJJJG()
		{
			return ((::UnityEngine::Rect(*)(::PVOID))((::PBYTE)hIl2Cpp + IDJPIPHGKMK_IBBLOPBJJJG_OFFSET))(this);
		}

	};
