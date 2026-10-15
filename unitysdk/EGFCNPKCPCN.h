#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class SwitchBattleArea; }
namespace RPG::GameCore { class TaskContext; }

#define EGFCNPKCPCN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1450B290)
#define EGFCNPKCPCN_CTOR_OFFSET UNITYSDK_OFFSET(0x1450A9F0)
#define EGFCNPKCPCN_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1450AA10)
#define EGFCNPKCPCN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1450AAB0)
#define EGFCNPKCPCN_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1450AA60)
#define EGFCNPKCPCN_TICK_OFFSET UNITYSDK_OFFSET(0x1450AF50)

	class EGFCNPKCPCN : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::SwitchBattleArea* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Single JGKBGIEHILF; // 0x28
		::System::Boolean IELGJKINIBB; // 0x2C
		::System::Boolean ONANKDBEFFM; // 0x2D
		static ::System::Single* StaticGet_GFCIOHGKKEE()
		{
			return (::System::Single*)UnitySDK::FromName("", "EGFCNPKCPCN")->GetStaticField(0x9C0);
		}

		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SwitchBattleArea* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SwitchBattleArea*))((::PBYTE)hIl2Cpp + EGFCNPKCPCN_CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EGFCNPKCPCN_CCTOR_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGFCNPKCPCN_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGFCNPKCPCN_ONTASKRESET_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGFCNPKCPCN_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EGFCNPKCPCN_TICK_OFFSET))(this, a1);
		}

	};
