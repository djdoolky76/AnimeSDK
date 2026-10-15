#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class ICKCNNLHLNF;
class KKIJDPKIIKL;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TutorialClickBtn; }

#define AKDKPFKJGPN_CTOR_OFFSET UNITYSDK_OFFSET(0x12CCC610)
#define AKDKPFKJGPN_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12CCC620)
#define AKDKPFKJGPN_KONJANCPEEI_OFFSET UNITYSDK_OFFSET(0x12CCC930)
#define AKDKPFKJGPN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x12CCC670)
#define AKDKPFKJGPN_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x12CCC800)
#define AKDKPFKJGPN_TICK_OFFSET UNITYSDK_OFFSET(0x12CCC850)

inline static constexpr unsigned int AKDKPFKJGPN_TypeDefinitionIndex = 58820;

	class AKDKPFKJGPN : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::TutorialClickBtn* OFKGLJOAMLD; // 0x20
		::ICKCNNLHLNF* EIHIJPGBJFO; // 0x28
		::KKIJDPKIIKL* ALDDFNIAIKP; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TutorialClickBtn* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TutorialClickBtn*))((::PBYTE)hIl2Cpp + AKDKPFKJGPN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKDKPFKJGPN_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKDKPFKJGPN_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKDKPFKJGPN_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AKDKPFKJGPN_TICK_OFFSET))(this, a1);
		}

		::System::Void KONJANCPEEI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKDKPFKJGPN_KONJANCPEEI_OFFSET))(this);
		}

	};
