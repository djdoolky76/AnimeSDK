#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
namespace RPG::GameCore { class StackRedStance; }
namespace RPG::GameCore { class TaskContext; }

#define AJMFGJMGIJH_CTOR_OFFSET UNITYSDK_OFFSET(0x19D47500)
#define AJMFGJMGIJH_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19D47510)
#define AJMFGJMGIJH_GHBALPBMLJE_OFFSET UNITYSDK_OFFSET(0x19D478D0)
#define AJMFGJMGIJH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x19D47600)
#define AJMFGJMGIJH_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x19D47550)
#define AJMFGJMGIJH_TICK_OFFSET UNITYSDK_OFFSET(0x19D475A0)

inline static constexpr unsigned int AJMFGJMGIJH_TypeDefinitionIndex = 56845;

	class AJMFGJMGIJH : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::StackRedStance* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::StackRedStance* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::StackRedStance*))((::PBYTE)hIl2Cpp + AJMFGJMGIJH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJMFGJMGIJH_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJMFGJMGIJH_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AJMFGJMGIJH_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJMFGJMGIJH_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Boolean GHBALPBMLJE(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::FixPoint a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + AJMFGJMGIJH_GHBALPBMLJE_OFFSET))(this, a1, a2, a3);
		}

	};
