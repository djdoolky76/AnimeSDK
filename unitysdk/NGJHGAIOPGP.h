#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WolfBroStunTargetArchive; }

#define NGJHGAIOPGP_CTOR_OFFSET UNITYSDK_OFFSET(0x18E8DAD0)
#define NGJHGAIOPGP_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18E8DAE0)
#define NGJHGAIOPGP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18E8DB30)
#define NGJHGAIOPGP_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x18E8DF00)
#define NGJHGAIOPGP_TICK_OFFSET UNITYSDK_OFFSET(0x18E8DF50)

inline static constexpr unsigned int NGJHGAIOPGP_TypeDefinitionIndex = 60238;

	class NGJHGAIOPGP : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::WolfBroStunTargetArchive* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::UInt32 BCAGKLKAFCF; // 0x28
		::System::UInt32 LIOBGEKEABI; // 0x2C
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WolfBroStunTargetArchive* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WolfBroStunTargetArchive*))((::PBYTE)hIl2Cpp + NGJHGAIOPGP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGJHGAIOPGP_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGJHGAIOPGP_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGJHGAIOPGP_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NGJHGAIOPGP_TICK_OFFSET))(this, a1);
		}

	};
