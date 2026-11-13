#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class HeartDialEmoBlackList; }
namespace RPG::GameCore { class TaskContext; }

#define CAKFIAOFELF_CTOR_OFFSET UNITYSDK_OFFSET(0x18FBCA20)
#define CAKFIAOFELF_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18FBCC90)
#define CAKFIAOFELF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18FBCA30)
#define CAKFIAOFELF_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x18FBCC40)
#define CAKFIAOFELF_TICK_OFFSET UNITYSDK_OFFSET(0x18FBCCD0)

inline static constexpr unsigned int CAKFIAOFELF_TypeDefinitionIndex = 59402;

	class CAKFIAOFELF : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::HeartDialEmoBlackList* OFKGLJOAMLD; // 0x20
		::RPG::GameCore::GameEntity* FEECCONDBLP; // 0x28
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
