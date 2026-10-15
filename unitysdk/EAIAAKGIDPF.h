#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class BJEKBEMLPCH;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LittleGameLevelConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define EAIAAKGIDPF_CTOR_OFFSET UNITYSDK_OFFSET(0x1267A4E0)
#define EAIAAKGIDPF_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1267A4F0)
#define EAIAAKGIDPF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1267A530)
#define EAIAAKGIDPF_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1267A9B0)
#define EAIAAKGIDPF_TICK_OFFSET UNITYSDK_OFFSET(0x1267A950)
#define EAIAAKGIDPF__ONTASKBEGIN_B__2_0_OFFSET UNITYSDK_OFFSET(0x1267AA00)

inline static constexpr unsigned int EAIAAKGIDPF_TypeDefinitionIndex = 52957;

	class EAIAAKGIDPF : public ::GELIALJDFBL
	{
	public:
		::BJEKBEMLPCH* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::RPG::GameCore::LittleGameLevelConfig* CLKEPOJFDPD; // 0x28
		::RPG::GameCore::GameEntity* ICHEDAEHEBG; // 0x30
		::System::String* BFDFFDNCBCA; // 0x38
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::BJEKBEMLPCH* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::BJEKBEMLPCH*))((::PBYTE)hIl2Cpp + EAIAAKGIDPF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAIAAKGIDPF_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAIAAKGIDPF_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EAIAAKGIDPF_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAIAAKGIDPF_ONTASKRESET_OFFSET))(this);
		}

		::System::Void _OnTaskBegin_b__2_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAIAAKGIDPF__ONTASKBEGIN_B__2_0_OFFSET))(this);
		}

	};
