#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class CharacterLeaveStage; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }

#define IFMLJINGLFM_CDNOABAIEHJ_OFFSET UNITYSDK_OFFSET(0x15F25390)
#define IFMLJINGLFM_CTOR_OFFSET UNITYSDK_OFFSET(0x15F24A90)
#define IFMLJINGLFM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15F24AA0)
#define IFMLJINGLFM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15F24AE0)
#define IFMLJINGLFM_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15F25400)
#define IFMLJINGLFM_TICK_OFFSET UNITYSDK_OFFSET(0x15F25450)

	class IFMLJINGLFM : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::CharacterLeaveStage* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CharacterLeaveStage* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CharacterLeaveStage*))((::PBYTE)hIl2Cpp + IFMLJINGLFM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFMLJINGLFM_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFMLJINGLFM_ONTASKBEGIN_OFFSET))(this);
		}

		static ::System::Int32 CDNOABAIEHJ(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Int32(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + IFMLJINGLFM_CDNOABAIEHJ_OFFSET))(a1);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFMLJINGLFM_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IFMLJINGLFM_TICK_OFFSET))(this, a1);
		}

	};
