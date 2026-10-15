#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
class KFELGAIGHAP;
namespace RPG::GameCore { class SwitchCaseByAttackDamageType; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IPOLHCLEBED_CTOR_OFFSET UNITYSDK_OFFSET(0x16525CF0)
#define IPOLHCLEBED_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16525F50)
#define IPOLHCLEBED_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16526200)

	class IPOLHCLEBED
	{
	public:
		::KFELGAIGHAP* IHPPIJOMNAP; // 0x28
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AttackDamageType, ::KFELGAIGHAP*>* ILPALCPKGHE; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SwitchCaseByAttackDamageType* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SwitchCaseByAttackDamageType*))((::PBYTE)hIl2Cpp + IPOLHCLEBED_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPOLHCLEBED_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPOLHCLEBED_ONTASKBEGIN_OFFSET))(this);
		}

	};
