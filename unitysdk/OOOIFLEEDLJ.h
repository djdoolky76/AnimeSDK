#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class KFELGAIGHAP;
namespace RPG::GameCore { class CharacterConfig; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetAlias; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerEntityColliderCameraConfig; }

#define OOOIFLEEDLJ_CTOR_OFFSET UNITYSDK_OFFSET(0xBF8B510)
#define OOOIFLEEDLJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBF8B520)
#define OOOIFLEEDLJ_LHLCJGODHJE_OFFSET UNITYSDK_OFFSET(0xBF8B5D0)
#define OOOIFLEEDLJ_ONCCIMKKFFB_OFFSET UNITYSDK_OFFSET(0xBF8BD90)
#define OOOIFLEEDLJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBF8B660)
#define OOOIFLEEDLJ_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBF8BEA0)
#define OOOIFLEEDLJ_TICK_OFFSET UNITYSDK_OFFSET(0xBF8BF50)

inline static constexpr unsigned int OOOIFLEEDLJ_TypeDefinitionIndex = 55737;

	class OOOIFLEEDLJ : public ::GELIALJDFBL
	{
	public:
		::KFELGAIGHAP* HFOFIODMFGB; // 0x18
		::RPG::GameCore::TriggerEntityColliderCameraConfig* OFKGLJOAMLD; // 0x20
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28
		::RPG::GameCore::TargetAlias* KLBJAHFMKHD; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerEntityColliderCameraConfig* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerEntityColliderCameraConfig*))((::PBYTE)hIl2Cpp + OOOIFLEEDLJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOOIFLEEDLJ_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOOIFLEEDLJ_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOOIFLEEDLJ_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OOOIFLEEDLJ_TICK_OFFSET))(this, a1);
		}

		::System::Void LHLCJGODHJE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOOIFLEEDLJ_LHLCJGODHJE_OFFSET))(this);
		}

		::RPG::GameCore::CharacterConfig* ONCCIMKKFFB(::RPG::GameCore::GameEntity* a1)
		{
			return ((::RPG::GameCore::CharacterConfig*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + OOOIFLEEDLJ_ONCCIMKKFFB_OFFSET))(this, a1);
		}

	};
