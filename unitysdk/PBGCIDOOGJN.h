#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitUIControllerClose; }

#define PBGCIDOOGJN_CTOR_OFFSET UNITYSDK_OFFSET(0x1AABB410)
#define PBGCIDOOGJN_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1AABB640)
#define PBGCIDOOGJN_OAJNPDGHOAD_OFFSET UNITYSDK_OFFSET(0x1AABB480)
#define PBGCIDOOGJN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1AABB420)
#define PBGCIDOOGJN_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1AABB580)
#define PBGCIDOOGJN_TICK_OFFSET UNITYSDK_OFFSET(0x1AABB5D0)

inline static constexpr unsigned int PBGCIDOOGJN_TypeDefinitionIndex = 60214;

	class PBGCIDOOGJN : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::WaitUIControllerClose* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitUIControllerClose* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitUIControllerClose*))((::PBYTE)hIl2Cpp + PBGCIDOOGJN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBGCIDOOGJN_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBGCIDOOGJN_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PBGCIDOOGJN_TICK_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBGCIDOOGJN_DISPOSE_OFFSET))(this);
		}

		::System::Boolean OAJNPDGHOAD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PBGCIDOOGJN_OAJNPDGHOAD_OFFSET))(this);
		}

	};
