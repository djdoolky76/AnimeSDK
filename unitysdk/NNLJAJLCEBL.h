#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class PlayAnimationClip; }
namespace RPG::GameCore { class TaskContext; }

#define NNLJAJLCEBL_CTOR_OFFSET UNITYSDK_OFFSET(0xC5B6790)
#define NNLJAJLCEBL_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC5B67A0)
#define NNLJAJLCEBL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC5B67E0)
#define NNLJAJLCEBL_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC5B69E0)
#define NNLJAJLCEBL_TICK_OFFSET UNITYSDK_OFFSET(0xC5B6A30)

inline static constexpr unsigned int NNLJAJLCEBL_TypeDefinitionIndex = 56443;

	class NNLJAJLCEBL : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::PlayAnimationClip* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PlayAnimationClip* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PlayAnimationClip*))((::PBYTE)hIl2Cpp + NNLJAJLCEBL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNLJAJLCEBL_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNLJAJLCEBL_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNLJAJLCEBL_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NNLJAJLCEBL_TICK_OFFSET))(this, a1);
		}

	};
