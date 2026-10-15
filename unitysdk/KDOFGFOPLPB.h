#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::Client { class StartMatchThreeV2PVE1v1Game; }
namespace RPG::GameCore { class TaskContext; }

#define KDOFGFOPLPB_CTOR_OFFSET UNITYSDK_OFFSET(0xB368B90)
#define KDOFGFOPLPB_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB368BA0)
#define KDOFGFOPLPB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB368BE0)
#define KDOFGFOPLPB_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB369190)
#define KDOFGFOPLPB_TICK_OFFSET UNITYSDK_OFFSET(0xB3691E0)
#define KDOFGFOPLPB__ONTASKBEGIN_B__2_0_OFFSET UNITYSDK_OFFSET(0xB369240)

	class KDOFGFOPLPB : public ::GELIALJDFBL
	{
	public:
		::RPG::Client::StartMatchThreeV2PVE1v1Game* IGHAHBNLIJA; // 0x18
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::Client::StartMatchThreeV2PVE1v1Game* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::Client::StartMatchThreeV2PVE1v1Game*))((::PBYTE)hIl2Cpp + KDOFGFOPLPB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDOFGFOPLPB_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDOFGFOPLPB_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDOFGFOPLPB_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KDOFGFOPLPB_TICK_OFFSET))(this, a1);
		}

		::System::Void _OnTaskBegin_b__2_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDOFGFOPLPB__ONTASKBEGIN_B__2_0_OFFSET))(this);
		}

	};
