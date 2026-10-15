#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class HeartDialEmoBlackList; }
namespace RPG::GameCore { class TaskContext; }

#define CAKFIAOFELF_CTOR_OFFSET UNITYSDK_OFFSET(0xC480590)
#define CAKFIAOFELF_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC480800)
#define CAKFIAOFELF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC4805A0)
#define CAKFIAOFELF_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC4807B0)
#define CAKFIAOFELF_TICK_OFFSET UNITYSDK_OFFSET(0xC480840)

inline static constexpr unsigned int CAKFIAOFELF_TypeDefinitionIndex = 58149;

	class CAKFIAOFELF : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::HeartDialEmoBlackList* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::GameEntity* FEECCONDBLP; // 0x20
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::HeartDialEmoBlackList* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::HeartDialEmoBlackList*))((::PBYTE)hIl2Cpp + CAKFIAOFELF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAKFIAOFELF_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAKFIAOFELF_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAKFIAOFELF_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CAKFIAOFELF_TICK_OFFSET))(this, a1);
		}

	};
