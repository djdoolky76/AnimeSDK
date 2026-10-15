#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
#include "unitysdk/RPG/MVector2.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
namespace RPG::GameCore { class MatchThreeDragTutorial; }
namespace RPG::GameCore { class TaskContext; }

#define ILCKGFAEDPM_CTOR_OFFSET UNITYSDK_OFFSET(0x164A7D00)
#define ILCKGFAEDPM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x164A7D10)
#define ILCKGFAEDPM_KKDPDKDICJN_OFFSET UNITYSDK_OFFSET(0x164A81B0)
#define ILCKGFAEDPM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x164A7DC0)
#define ILCKGFAEDPM_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x164A8220)
#define ILCKGFAEDPM_TICK_OFFSET UNITYSDK_OFFSET(0x164A8270)

	class ILCKGFAEDPM : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::MatchThreeDragTutorial* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::MatchThreeDragTutorial* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::MatchThreeDragTutorial*))((::PBYTE)hIl2Cpp + ILCKGFAEDPM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILCKGFAEDPM_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILCKGFAEDPM_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILCKGFAEDPM_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ILCKGFAEDPM_TICK_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2Int KKDPDKDICJN(::RPG::MVector2 a1)
		{
			return ((::UnityEngine::Vector2Int(*)(::PVOID, ::RPG::MVector2))((::PBYTE)hIl2Cpp + ILCKGFAEDPM_KKDPDKDICJN_OFFSET))(this, a1);
		}

	};
