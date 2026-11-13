#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class DarkTeamDestroyCheck; }
namespace RPG::GameCore { class TaskContext; }

#define CGKAAPEOLNB_CTOR_OFFSET UNITYSDK_OFFSET(0x1785E410)
#define CGKAAPEOLNB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1785E420)
#define CGKAAPEOLNB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1785E460)
#define CGKAAPEOLNB_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1785E570)
#define CGKAAPEOLNB_OPDLLNNEBPF_OFFSET UNITYSDK_OFFSET(0x1785E4C0)
#define CGKAAPEOLNB_TICK_OFFSET UNITYSDK_OFFSET(0x1785E5C0)

inline static constexpr unsigned int CGKAAPEOLNB_TypeDefinitionIndex = 59302;

	class CGKAAPEOLNB : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::DarkTeamDestroyCheck* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::DarkTeamDestroyCheck* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::DarkTeamDestroyCheck*))((::PBYTE)hIl2Cpp + CGKAAPEOLNB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGKAAPEOLNB_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGKAAPEOLNB_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGKAAPEOLNB_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CGKAAPEOLNB_TICK_OFFSET))(this, a1);
		}

		::System::Boolean OPDLLNNEBPF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CGKAAPEOLNB_OPDLLNNEBPF_OFFSET))(this);
		}

	};
