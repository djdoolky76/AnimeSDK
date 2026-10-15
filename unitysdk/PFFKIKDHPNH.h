#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::Client { class RoadRashGameModifier_TimedState; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TaskContext; }

#define PFFKIKDHPNH_CTOR_OFFSET UNITYSDK_OFFSET(0xC205ED0)
#define PFFKIKDHPNH_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC205EE0)
#define PFFKIKDHPNH_GETCONFIG_OFFSET UNITYSDK_OFFSET(0xC2060F0)
#define PFFKIKDHPNH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC205F20)
#define PFFKIKDHPNH_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC205F70)
#define PFFKIKDHPNH_TICK_OFFSET UNITYSDK_OFFSET(0xC205FC0)

inline static constexpr unsigned int PFFKIKDHPNH_TypeDefinitionIndex = 58432;

	class PFFKIKDHPNH : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::Client::RoadRashGameModifier_TimedState* OFKGLJOAMLD; // 0x20
		::System::Single BPAIDCADMDO; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::Client::RoadRashGameModifier_TimedState* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::Client::RoadRashGameModifier_TimedState*))((::PBYTE)hIl2Cpp + PFFKIKDHPNH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFFKIKDHPNH_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFFKIKDHPNH_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFFKIKDHPNH_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PFFKIKDHPNH_TICK_OFFSET))(this, a1);
		}

		::RPG::GameCore::TaskConfig* GetConfig()
		{
			return ((::RPG::GameCore::TaskConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + PFFKIKDHPNH_GETCONFIG_OFFSET))(this);
		}

	};
