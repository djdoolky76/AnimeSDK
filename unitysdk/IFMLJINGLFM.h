#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class CharacterLeaveStage; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }

#define IFMLJINGLFM_CDNOABAIEHJ_OFFSET UNITYSDK_OFFSET(0x1BC21920)
#define IFMLJINGLFM_CTOR_OFFSET UNITYSDK_OFFSET(0x1BC21020)
#define IFMLJINGLFM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1BC21030)
#define IFMLJINGLFM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1BC21070)
#define IFMLJINGLFM_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1BC21990)
#define IFMLJINGLFM_TICK_OFFSET UNITYSDK_OFFSET(0x1BC219E0)

inline static constexpr unsigned int IFMLJINGLFM_TypeDefinitionIndex = 56110;

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
