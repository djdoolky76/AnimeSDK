#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class CharacterReenterStage; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }

#define LKGMNHIHIDC_CDNOABAIEHJ_OFFSET UNITYSDK_OFFSET(0xB743780)
#define LKGMNHIHIDC_CTOR_OFFSET UNITYSDK_OFFSET(0xB742E40)
#define LKGMNHIHIDC_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB742E50)
#define LKGMNHIHIDC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB742E90)
#define LKGMNHIHIDC_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB7437F0)
#define LKGMNHIHIDC_TICK_OFFSET UNITYSDK_OFFSET(0xB743840)

inline static constexpr unsigned int LKGMNHIHIDC_TypeDefinitionIndex = 54945;

	class LKGMNHIHIDC : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::CharacterReenterStage* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CharacterReenterStage* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CharacterReenterStage*))((::PBYTE)hIl2Cpp + LKGMNHIHIDC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKGMNHIHIDC_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKGMNHIHIDC_ONTASKBEGIN_OFFSET))(this);
		}

		static ::System::Int32 CDNOABAIEHJ(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Int32(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + LKGMNHIHIDC_CDNOABAIEHJ_OFFSET))(a1);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKGMNHIHIDC_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LKGMNHIHIDC_TICK_OFFSET))(this, a1);
		}

	};
