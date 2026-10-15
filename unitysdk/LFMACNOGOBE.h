#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::Client { class RoadRashGameModifier_AbilityMaxUsableCount; }
namespace RPG::Client::LittleGame::RoadRash { class RoadRashAbilityCoolDown; }
namespace RPG::GameCore { class TaskContext; }

#define LFMACNOGOBE_CTOR_OFFSET UNITYSDK_OFFSET(0xB67DA10)
#define LFMACNOGOBE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB67DFD0)
#define LFMACNOGOBE_GPKIFEONPLF_OFFSET UNITYSDK_OFFSET(0xB67DD70)
#define LFMACNOGOBE_HDHKGCHMANE_OFFSET UNITYSDK_OFFSET(0xB67DCC0)
#define LFMACNOGOBE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB67DA40)
#define LFMACNOGOBE_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB67DD20)

inline static constexpr unsigned int LFMACNOGOBE_TypeDefinitionIndex = 58415;

	class LFMACNOGOBE
	{
	public:
		::System::Boolean AMBLEJEBOIA; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::Client::RoadRashGameModifier_AbilityMaxUsableCount* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::Client::RoadRashGameModifier_AbilityMaxUsableCount*))((::PBYTE)hIl2Cpp + LFMACNOGOBE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFMACNOGOBE_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFMACNOGOBE_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFMACNOGOBE_DISPOSE_OFFSET))(this);
		}

		static ::System::Void HDHKGCHMANE(::RPG::Client::LittleGame::RoadRash::RoadRashAbilityCoolDown* a1)
		{
			return ((::System::Void(*)(::RPG::Client::LittleGame::RoadRash::RoadRashAbilityCoolDown*))((::PBYTE)hIl2Cpp + LFMACNOGOBE_HDHKGCHMANE_OFFSET))(a1);
		}

		::System::Void GPKIFEONPLF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFMACNOGOBE_GPKIFEONPLF_OFFSET))(this);
		}

	};
