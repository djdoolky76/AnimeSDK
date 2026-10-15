#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class RogueTournPersonaTalentGroupData; }
namespace RPG::Client { class RogueTournPersonaTalentNodeData; }
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_ROGUETOURNPERSONATALENTINFO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xE037B40)
#define RPG_CLIENT_ROGUETOURNPERSONATALENTINFO___C_CTOR_OFFSET UNITYSDK_OFFSET(0xE037B70)
#define RPG_CLIENT_ROGUETOURNPERSONATALENTINFO___C__INIT_B__1_0_OFFSET UNITYSDK_OFFSET(0xE037B80)
#define RPG_CLIENT_ROGUETOURNPERSONATALENTINFO___C__INIT_B__1_1_OFFSET UNITYSDK_OFFSET(0xE037BC0)

namespace RPG::Client
{
	class RogueTournPersonaTalentInfo___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::Client::RogueTournPersonaTalentNodeData*>** StaticGet___9__1_1()
		{
			return (::System::Comparison_1<::RPG::Client::RogueTournPersonaTalentNodeData*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6DAD0);
		}

		static ::System::Comparison_1<::RPG::Client::RogueTournPersonaTalentGroupData*>** StaticGet___9__1_0()
		{
			return (::System::Comparison_1<::RPG::Client::RogueTournPersonaTalentGroupData*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6DAD8);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6DAE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONATALENTINFO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONATALENTINFO___C_CTOR_OFFSET))(this);
		}

		::System::Int32 _Init_b__1_0(::RPG::Client::RogueTournPersonaTalentGroupData* a1, ::RPG::Client::RogueTournPersonaTalentGroupData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::RogueTournPersonaTalentGroupData*, ::RPG::Client::RogueTournPersonaTalentGroupData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONATALENTINFO___C__INIT_B__1_0_OFFSET))(this, a1, a2);
		}

		::System::Int32 _Init_b__1_1(::RPG::Client::RogueTournPersonaTalentNodeData* a1, ::RPG::Client::RogueTournPersonaTalentNodeData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::RogueTournPersonaTalentNodeData*, ::RPG::Client::RogueTournPersonaTalentNodeData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONATALENTINFO___C__INIT_B__1_1_OFFSET))(this, a1, a2);
		}

	};
}
