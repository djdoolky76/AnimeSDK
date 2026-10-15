#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class BNBOAMEBAOE;
class GELIALJDFBL;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitTransferFinishedEvent; }
namespace System { class Object; }

#define AHACLJIANNC_BKPGNCBNMGP_OFFSET UNITYSDK_OFFSET(0xEB78940)
#define AHACLJIANNC_CTOR_OFFSET UNITYSDK_OFFSET(0xEB786F0)
#define AHACLJIANNC_DISPOSE_OFFSET UNITYSDK_OFFSET(0xEB78700)
#define AHACLJIANNC_INCODLLPFJI_OFFSET UNITYSDK_OFFSET(0xEB78990)
#define AHACLJIANNC_JEGLPMDFCJD_OFFSET UNITYSDK_OFFSET(0xEB787F0)
#define AHACLJIANNC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xEB787A0)
#define AHACLJIANNC_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xEB78890)
#define AHACLJIANNC_TICK_OFFSET UNITYSDK_OFFSET(0xEB788E0)

inline static constexpr unsigned int AHACLJIANNC_TypeDefinitionIndex = 58932;

	class AHACLJIANNC : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::GELIALJDFBL* JLMAKNFAEBH; // 0x20
		::RPG::GameCore::WaitTransferFinishedEvent* OFKGLJOAMLD; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitTransferFinishedEvent* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitTransferFinishedEvent*))((::PBYTE)hIl2Cpp + AHACLJIANNC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHACLJIANNC_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHACLJIANNC_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHACLJIANNC_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AHACLJIANNC_TICK_OFFSET))(this, a1);
		}

		::System::Void BKPGNCBNMGP(::BNBOAMEBAOE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BNBOAMEBAOE*))((::PBYTE)hIl2Cpp + AHACLJIANNC_BKPGNCBNMGP_OFFSET))(this, a1);
		}

		::System::Void JEGLPMDFCJD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHACLJIANNC_JEGLPMDFCJD_OFFSET))(this);
		}

		::System::Void INCODLLPFJI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AHACLJIANNC_INCODLLPFJI_OFFSET))(this, a1);
		}

	};
