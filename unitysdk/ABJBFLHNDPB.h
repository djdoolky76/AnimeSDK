#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class ResetBattleBGMToStage; }
namespace RPG::GameCore { class TaskContext; }

#define ABJBFLHNDPB_CTOR_OFFSET UNITYSDK_OFFSET(0xB0FA330)
#define ABJBFLHNDPB_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB0FA340)
#define ABJBFLHNDPB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB0FA380)
#define ABJBFLHNDPB_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB0FA4B0)
#define ABJBFLHNDPB_TICK_OFFSET UNITYSDK_OFFSET(0xB0FA500)

inline static constexpr unsigned int ABJBFLHNDPB_TypeDefinitionIndex = 58393;

	class ABJBFLHNDPB : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::ResetBattleBGMToStage* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ResetBattleBGMToStage* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ResetBattleBGMToStage*))((::PBYTE)hIl2Cpp + ABJBFLHNDPB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABJBFLHNDPB_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABJBFLHNDPB_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABJBFLHNDPB_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ABJBFLHNDPB_TICK_OFFSET))(this, a1);
		}

	};
