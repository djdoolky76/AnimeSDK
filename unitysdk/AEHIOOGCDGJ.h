#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::GameCore { class AdvCharacterSteerToInputDir; }
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class TaskContext; }

#define AEHIOOGCDGJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB151C60)
#define AEHIOOGCDGJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB151CB0)
#define AEHIOOGCDGJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB151CF0)
#define AEHIOOGCDGJ_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB1525C0)
#define AEHIOOGCDGJ_TICK_OFFSET UNITYSDK_OFFSET(0xB151FE0)

inline static constexpr unsigned int AEHIOOGCDGJ_TypeDefinitionIndex = 52340;

	class AEHIOOGCDGJ : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::AdvCharacterSteerToInputDir* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::RPG::GameCore::AdventureCharacterController* CPIIOIPAAKK; // 0x28
		::System::Boolean NICGJCKBCEB; // 0x30
		::System::Byte _padding0[0x3];
		::System::Single JFNDPOLHLNK; // 0x34
		::UnityEngine::Vector3 BGNACBGBMHG; // 0x38
		::System::Int32 APNGJPMPMOB; // 0x44
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvCharacterSteerToInputDir* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvCharacterSteerToInputDir*))((::PBYTE)hIl2Cpp + AEHIOOGCDGJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEHIOOGCDGJ_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEHIOOGCDGJ_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEHIOOGCDGJ_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AEHIOOGCDGJ_TICK_OFFSET))(this, a1);
		}

	};
