#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class DarkTeamDestroyCheck; }
namespace RPG::GameCore { class TaskContext; }

#define CGKAAPEOLNB_CTOR_OFFSET UNITYSDK_OFFSET(0xCC850F0)
#define CGKAAPEOLNB_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCC85100)
#define CGKAAPEOLNB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xCC85140)
#define CGKAAPEOLNB_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xCC85250)
#define CGKAAPEOLNB_OPDLLNNEBPF_OFFSET UNITYSDK_OFFSET(0xCC851A0)
#define CGKAAPEOLNB_TICK_OFFSET UNITYSDK_OFFSET(0xCC852A0)

inline static constexpr unsigned int CGKAAPEOLNB_TypeDefinitionIndex = 58063;

	class CGKAAPEOLNB : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::DarkTeamDestroyCheck* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
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
