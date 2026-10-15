#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client { class LoopScene; }
namespace RPG::GameCore { class LoopMoveObject; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerLoopScene; }

#define NKCPCLDGKLO_CCANEFGICGG_OFFSET UNITYSDK_OFFSET(0xBC30CB0)
#define NKCPCLDGKLO_CTOR_OFFSET UNITYSDK_OFFSET(0xBC307F0)
#define NKCPCLDGKLO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBC30800)
#define NKCPCLDGKLO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBC30840)
#define NKCPCLDGKLO_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBC31100)
#define NKCPCLDGKLO_TICK_OFFSET UNITYSDK_OFFSET(0xBC31150)

inline static constexpr unsigned int NKCPCLDGKLO_TypeDefinitionIndex = 58791;

	class NKCPCLDGKLO : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::TriggerLoopScene* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerLoopScene* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerLoopScene*))((::PBYTE)hIl2Cpp + NKCPCLDGKLO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKCPCLDGKLO_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKCPCLDGKLO_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void CCANEFGICGG(::RPG::Client::LoopScene* a1, ::Il2CppArray<::RPG::GameCore::LoopMoveObject*>* a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LoopScene*, ::Il2CppArray<::RPG::GameCore::LoopMoveObject*>*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NKCPCLDGKLO_CCANEFGICGG_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKCPCLDGKLO_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NKCPCLDGKLO_TICK_OFFSET))(this, a1);
		}

	};
